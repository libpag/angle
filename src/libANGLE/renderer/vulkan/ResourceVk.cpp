//
// Copyright 2017 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// Resource:
//    Resource lifetime tracking in the Vulkan back-end.
//

#include "libANGLE/renderer/vulkan/ResourceVk.h"

#include "libANGLE/renderer/vulkan/ContextVk.h"

namespace rx
{
namespace vk
{
namespace
{
template <typename T>
angle::Result WaitForIdle(ContextVk *contextVk,
                          T *resource,
                          const char *debugMessage,
                          RenderPassClosureReason reason)
{
    // If there are pending commands for the resource, flush them.
    if (contextVk->hasUnsubmittedUse(resource->getResourceUse()))
    {
        ANGLE_TRY(contextVk->flushImpl(nullptr, reason));
    }

    RendererVk *renderer = contextVk->getRenderer();
    // Make sure the driver is done with the resource.
    if (renderer->hasUnfinishedUse(resource->getResourceUse()))
    {
        if (debugMessage)
        {
            ANGLE_VK_PERF_WARNING(contextVk, GL_DEBUG_SEVERITY_HIGH, "%s", debugMessage);
        }
        ANGLE_TRY(renderer->finishResourceUse(contextVk, resource->getResourceUse()));
    }

    ASSERT(!renderer->hasUnfinishedUse(resource->getResourceUse()));

    return angle::Result::Continue;
}
}  // namespace

// Resource implementation.
Resource::Resource() {}

Resource::Resource(Resource &&other) : Resource()
{
    mUse = std::move(other.mUse);
}

Resource &Resource::operator=(Resource &&rhs)
{
    std::swap(mUse, rhs.mUse);
    return *this;
}

Resource::~Resource() {}

angle::Result Resource::waitForIdle(ContextVk *contextVk,
                                    const char *debugMessage,
                                    RenderPassClosureReason reason)
{
    return WaitForIdle(contextVk, this, debugMessage, reason);
}

// ReadWriteResource implementation.
ReadWriteResource::ReadWriteResource() {}

ReadWriteResource::ReadWriteResource(ReadWriteResource &&other) : ReadWriteResource()
{
    *this = std::move(other);
}

ReadWriteResource::~ReadWriteResource() {}

ReadWriteResource &ReadWriteResource::operator=(ReadWriteResource &&other)
{
    Resource::operator=(std::move(other));
    mWriteUse = std::move(other.mWriteUse);
    return *this;
}

angle::Result ReadWriteResource::waitForIdle(ContextVk *contextVk,
                                             const char *debugMessage,
                                             RenderPassClosureReason reason)
{
    return Resource::waitForIdle(contextVk, debugMessage, reason);
}

// SharedGarbage implementation.
SharedGarbage::SharedGarbage() = default;

SharedGarbage::SharedGarbage(SharedGarbage &&other)
{
    *this = std::move(other);
}

SharedGarbage::SharedGarbage(const ResourceUse &use, GarbageList &&garbage)
    : mLifetime(use), mGarbage(std::move(garbage))
{}

SharedGarbage::~SharedGarbage() = default;

SharedGarbage &SharedGarbage::operator=(SharedGarbage &&rhs)
{
    std::swap(mLifetime, rhs.mLifetime);
    std::swap(mGarbage, rhs.mGarbage);
    return *this;
}

bool SharedGarbage::destroyIfComplete(RendererVk *renderer)
{
    if (renderer->hasUnfinishedUse(mLifetime))
    {
        return false;
    }

    for (GarbageObject &object : mGarbage)
    {
        object.destroy(renderer);
    }

    return true;
}

bool SharedGarbage::hasUnsubmittedUse(RendererVk *renderer) const
{
    return renderer->hasUnsubmittedUse(mLifetime);
}
}  // namespace vk
}  // namespace rx
