// GENERATED FILE - DO NOT EDIT.
// Generated by gen_features.py using data from *_features.json.
//
// Copyright 2022 The ANGLE Project Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.
//
// angle_features_autogen.h: List of ANGLE features to help enable/disable them in tests.

#ifndef ANGLE_SRC_TESTS_TEST_UTIL_AUTOGEN_ANGLE_FEATURES_AUTOGEN_H_
#define ANGLE_SRC_TESTS_TEST_UTIL_AUTOGEN_ANGLE_FEATURES_AUTOGEN_H_

#include "../util_export.h"

namespace angle
{
enum class Feature
{
    AddAndTrueToLoopCondition,
    AddMockTextureNoRenderTarget,
    AdjustClearColorPrecision,
    AdjustSrcDstRegionForBlitFramebuffer,
    AllocateNonZeroMemory,
    AllowAstcFormats,
    AllowBufferReadWrite,
    AllowClearForRobustResourceInit,
    AllowCompressedFormats,
    AllowES3OnFL100,
    AllowETCFormats,
    AllowGenerateMipmapWithCompute,
    AllowGenMultipleMipsPerPass,
    AllowHostImageCopyDespiteNonIdenticalLayout,
    AllowInlineConstVertexData,
    AllowMultisampledRenderToTextureEmulation,
    AllowMultisampleStoreAndResolve,
    AllowRenderpassWithoutAttachment,
    AllowRuntimeSamplerCompareMode,
    AllowSamplerCompareGradient,
    AllowSamplerCompareLod,
    AllowSeparateDepthStencilBuffers,
    AllowTranslateUniformBlockToStructuredBuffer,
    AlwaysCallUseProgramAfterLink,
    AlwaysPreferStagedTextureUploads,
    AlwaysResolveMultisampleRenderBuffers,
    AlwaysRunLinkSubJobsThreaded,
    AlwaysUnbindFramebufferTexture2D,
    AlwaysUseManagedStorageModeForBuffers,
    AlwaysUseSharedStorageModeForBuffers,
    AlwaysUseStagedBufferUpdates,
    AppendAliasedMemoryDecorations,
    AsyncCommandBufferReset,
    AsyncCommandQueue,
    Avoid1BitAlphaTextureFormats,
    AvoidOpSelectWithMismatchingRelaxedPrecision,
    AvoidStencilTextureSwizzle,
    BindCompleteFramebufferForTimerQueries,
    BindTransformFeedbackBufferBeforeBindBufferRange,
    BorderColorSrgb,
    BottomLeftOriginPresentRegionRectangles,
    BresenhamLineRasterization,
    CacheCompiledShader,
    CallClearTwice,
    ClampArrayAccess,
    ClampFragDepth,
    ClampMscRate,
    ClampPointSize,
    ClDumpVkSpirv,
    ClearsWithGapsNeedFlush,
    ClearToZeroOrOneBroken,
    ClipSrcRegionForBlitFramebuffer,
    CompileJobIsThreadSafe,
    CompileMetalShaders,
    CompressVertexData,
    CopyIOSurfaceToNonIOSurfaceForReadOptimization,
    CopyTextureToBufferForReadOptimization,
    CorruptProgramBinaryForTesting,
    DecodeEncodeSRGBForGenerateMipmap,
    DeferFlushUntilEndRenderPass,
    DepthStencilBlitExtraCopy,
    DisableAnisotropicFiltering,
    DisableB5G6R5Support,
    DisableBaseInstanceVertex,
    DisableBlendFuncExtended,
    DisableClipControl,
    DisableDepthStencilResolveThroughAttachment,
    DisableDrawBuffersIndexed,
    DisableFlippingBlitWithCommand,
    DisableGPUSwitchingSupport,
    DisableMetalOnNvidia,
    DisableMultisampledRenderToTexture,
    DisableNativeParallelCompile,
    DisablePipelineCacheLoadForTesting,
    DisableProgramBinary,
    DisableProgramCaching,
    DisableProgramCachingForTransformFeedback,
    DisableProgrammableBlending,
    DisableRasterizerOrderViews,
    DisableRasterOrderGroups,
    DisableRenderSnorm,
    DisableRWTextureTier2Support,
    DisableSemaphoreFd,
    DisableSeparateShaderObjects,
    DisableStagedInitializationOfPackedTextureFormats,
    DisableSyncControlSupport,
    DisableTextureClampToBorder,
    DisableTextureMirrorClampToEdge,
    DisableTimestampQueries,
    DisallowMixedDepthStencilLoadOpNoneAndLoad,
    DoesSRGBClearsOnLinearFramebufferAttachments,
    DontInitializeUninitializedLocals,
    DontUseLoopsToInitializeVariables,
    DoubleDepthBiasConstantFactor,
    DoWhileGLSLCausesGPUHang,
    DumpShaderSource,
    DumpTranslatedShaders,
    EglColorspaceAttributePassthrough,
    EmulateAbsIntFunction,
    EmulateAdvancedBlendEquations,
    EmulateAlphaToCoverage,
    EmulateAtan2Float,
    EmulateClipDistanceState,
    EmulateClipOrigin,
    EmulateCopyTexImage2D,
    EmulateCopyTexImage2DFromRenderbuffers,
    EmulateDithering,
    EmulatedPrerotation180,
    EmulatedPrerotation270,
    EmulatedPrerotation90,
    EmulateImmutableCompressedTexture3D,
    EmulateIsnanFloat,
    EmulateMaxVertexAttribStride,
    EmulatePackSkipRowsAndPackSkipPixels,
    EmulatePixelLocalStorage,
    EmulatePrimitiveRestartFixedIndex,
    EmulateR32fImageAtomicExchange,
    EmulateRGB10,
    EmulateTinyStencilTextures,
    EmulateTransformFeedback,
    EnableAdditionalBlendFactorsForDithering,
    EnableAsyncPipelineCacheCompression,
    EnableCaptureLimits,
    EnableInMemoryMtlLibraryCache,
    EnableMergeClientAttribBuffer,
    EnableMultisampledRenderToTexture,
    EnableParallelCompileAndLink,
    EnableParallelMtlLibraryCompilation,
    EnablePipelineCacheDataCompression,
    EnablePortabilityEnumeration,
    EnablePrecisionQualifiers,
    EnablePreRotateSurfaces,
    EnableProgramBinaryForCapture,
    EnableShaderSubstitution,
    EnableTimestampQueries,
    EnableTranslatedShaderSubstitution,
    EnsureNonEmptyBufferIsBoundForDraw,
    ExpandIntegerPowExpressions,
    ExplicitFragmentLocations,
    ExplicitlyCastMediumpFloatTo16Bit,
    ExplicitlyEnablePerSampleShading,
    ExposeNonConformantExtensionsAndVersions,
    FinishDoesNotCauseQueriesToBeAvailable,
    FlushAfterEndingTransformFeedback,
    FlushAfterStreamVertexData,
    FlushBeforeDeleteTextureIfCopiedTo,
    FlushOnFramebufferChange,
    ForceAtomicValueResolution,
    ForceBufferGPUStorage,
    ForceContinuousRefreshOnSharedPresent,
    ForceD16TexFilter,
    ForceD24S8AsUnsupported,
    ForceDepthAttachmentInitOnClear,
    ForceDisableFullScreenExclusive,
    ForceFallbackFormat,
    ForceFragmentShaderPrecisionHighpToMediump,
    ForceGlErrorChecking,
    ForceInitShaderVariables,
    ForceMaxUniformBufferSize16KB,
    ForceMinimumMaxVertexAttributes,
    ForceNearestFiltering,
    ForceNearestMipFiltering,
    ForceNonCSBaseMipmapGeneration,
    ForceRobustResourceInit,
    ForceSampleUsageForAhbBackedImages,
    ForceSubmitImmutableTextureUpdates,
    ForceTextureLodOffset1,
    ForceTextureLodOffset2,
    ForceTextureLodOffset3,
    ForceTextureLodOffset4,
    ForceWaitForSubmissionToCompleteForQueryResult,
    GenerateShareableShaders,
    GetDimensionsIgnoresBaseLevel,
    HasBaseVertexInstancedDraw,
    HasCheapRenderPass,
    HasDepthAutoResolve,
    HasEffectivePipelineCacheSerialization,
    HasEvents,
    HasExplicitMemBarrier,
    HasNonUniformDispatch,
    HasShaderStencilOutput,
    HasStencilAutoResolve,
    HasTextureSwizzle,
    InitFragmentOutputVariables,
    InitializeCurrentVertexAttributes,
    InjectAsmStatementIntoLoopBodies,
    IntelDisableFastMath,
    IntelExplicitBoolCastWorkaround,
    KeepBufferShadowCopy,
    LimitMax3dArrayTextureSizeTo1024,
    LimitMaxColorTargetBitsForTesting,
    LimitMaxDrawBuffersForTesting,
    LimitMaxMSAASamplesTo4,
    LimitSampleCountTo2,
    LimitWebglMaxTextureSizeTo4096,
    LimitWebglMaxTextureSizeTo8192,
    LinkJobIsThreadSafe,
    LoadMetalShadersFromBlobCache,
    LogMemoryReportCallbacks,
    LogMemoryReportStats,
    LoseContextOnOutOfMemory,
    MapUnspecifiedColorSpaceToPassThrough,
    MergeProgramPipelineCachesToGlobalCache,
    MrtPerfWorkaround,
    MultisampleColorFormatShaderReadWorkaround,
    MutableMipmapTextureUpload,
    OverrideSurfaceFormatRGB8ToRGBA8,
    PackLastRowSeparatelyForPaddingInclusion,
    PackOverlappingRowsSeparatelyPackBuffer,
    PadBuffersToMaxVertexAttribStride,
    PassHighpToPackUnormSnormBuiltins,
    PerFrameWindowSizeQuery,
    PermanentlySwitchToFramebufferFetchMode,
    PersistentlyMappedBuffers,
    PreAddTexelFetchOffsets,
    PreemptivelyStartProvokingVertexCommandBuffer,
    PreferAggregateBarrierCalls,
    PreferCpuForBuffersubdata,
    PreferCPUForBufferSubData,
    PreferDeviceLocalMemoryHostVisible,
    PreferDrawClearOverVkCmdClearAttachments,
    PreferDriverUniformOverSpecConst,
    PreferHostCachedForNonStaticBufferUsage,
    PreferLinearFilterForYUV,
    PreferMonolithicPipelinesOverLibraries,
    PreferMSRTSSFlagByDefault,
    PreferSkippingInvalidateForEmulatedFormats,
    PreferSubmitAtFBOBoundary,
    PreferSubmitOnAnySamplesPassedQueryEnd,
    PreTransformTextureCubeGradDerivatives,
    PrintMetalShaders,
    PromotePackedFormatsTo8BitPerChannel,
    ProvokingVertex,
    QueryCounterBitsGeneratesErrors,
    ReadPixelsUsingImplementationColorReadFormatForNorm16,
    ReapplyUBOBindingsAfterUsingBinaryProgram,
    RegenerateStructNames,
    RemoveDynamicIndexingOfSwizzledVector,
    RemoveInvariantAndCentroidForESSL3,
    RequireCachedBitForStagingBuffer,
    RequireGpuFamily2,
    RequireMsl21,
    RescopeGlobalVariables,
    ResetTexImage2DBaseLevel,
    ResyncDepthRangeOnClipControl,
    RetainSPIRVDebugInfo,
    RewriteFloatUnaryMinusOperator,
    RewriteRepeatedAssignToSwizzled,
    RewriteRowMajorMatrices,
    RewriteUnaryMinusOperator,
    RGBA4IsNotSupportedForColorRendering,
    RGBDXT1TexturesSampleZeroAlpha,
    RoundOutputAfterDithering,
    SanitizeAMDGPURendererString,
    ScalarizeVecAndMatConstructorArgs,
    SelectViewInGeometryShader,
    SetDataFasterThanImageUpload,
    SetPrimitiveRestartFixedIndexForDrawArrays,
    SetZeroLevelBeforeGenerateMipmap,
    ShiftInstancedArrayDataWithOffset,
    SingleThreadedTextureDecompression,
    SkipVSConstantRegisterZero,
    SlowAsyncCommandQueueForTesting,
    SlowDownMonolithicPipelineCreationForTesting,
    SupportsAndroidHardwareBuffer,
    SupportsAndroidNativeFenceSync,
    SupportsBindMemory2,
    SupportsBlendOperationAdvanced,
    SupportsColorWriteEnable,
    SupportsComputeTranscodeEtcToBc,
    SupportsCustomBorderColor,
    SupportsDepthClampZeroOne,
    SupportsDepthClipControl,
    SupportsDepthStencilIndependentResolveNone,
    SupportsDepthStencilResolve,
    SupportsExtendedDynamicState,
    SupportsExtendedDynamicState2,
    SupportsExternalFenceCapabilities,
    SupportsExternalFenceFd,
    SupportsExternalFormatResolve,
    SupportsExternalMemoryDmaBufAndModifiers,
    SupportsExternalMemoryFd,
    SupportsExternalMemoryFuchsia,
    SupportsExternalMemoryHost,
    SupportsExternalSemaphoreCapabilities,
    SupportsExternalSemaphoreFd,
    SupportsExternalSemaphoreFuchsia,
    SupportsFormatFeatureFlags2,
    SupportsFoveatedRendering,
    SupportsFragmentShaderInterlockARB,
    SupportsFragmentShaderInterlockNV,
    SupportsFragmentShaderOrderingINTEL,
    SupportsFragmentShaderPixelInterlock,
    SupportsFragmentShadingRate,
    SupportsFullScreenExclusive,
    SupportsGeometryStreamsCapability,
    SupportsGetMemoryRequirements2,
    SupportsGGPFrameToken,
    SupportsGraphicsPipelineLibrary,
    SupportsHostImageCopy,
    SupportsHostQueryReset,
    SupportsImage2dViewOf3d,
    SupportsImageCubeArray,
    SupportsImageFormatList,
    SupportsImagelessFramebuffer,
    SupportsIncrementalPresent,
    SupportsIndexTypeUint8,
    SupportsLegacyDithering,
    SupportsLockSurfaceExtension,
    SupportsLogicOpDynamicState,
    SupportsMemoryBudget,
    SupportsMixedReadWriteDepthStencilLayouts,
    SupportsMultiDrawIndirect,
    SupportsMultisampledRenderToSingleSampled,
    SupportsMultisampledRenderToSingleSampledGOOGLEX,
    SupportsMultiview,
    SupportsNonConstantLoopIndexing,
    SupportsPipelineCreationFeedback,
    SupportsPipelineProtectedAccess,
    SupportsPipelineRobustness,
    SupportsPipelineStatisticsQuery,
    SupportsPortabilityEnumeration,
    SupportsPresentation,
    SupportsPrimitivesGeneratedQuery,
    SupportsPrimitiveTopologyListRestart,
    SupportsProtectedMemory,
    SupportsRasterizationOrderAttachmentAccess,
    SupportsRenderpass2,
    SupportsRenderPassLoadStoreOpNone,
    SupportsRenderPassStoreOpNone,
    SupportsSampler2dViewOf3d,
    SupportsSamplerMirrorClampToEdge,
    SupportsShaderFloat16,
    SupportsShaderFramebufferFetch,
    SupportsShaderFramebufferFetchEXT,
    SupportsShaderFramebufferFetchNonCoherent,
    SupportsShaderFramebufferFetchNonCoherentEXT,
    SupportsShaderNonSemanticInfo,
    SupportsShaderPixelLocalStorageEXT,
    SupportsShaderStencilExport,
    SupportsSharedPresentableImageExtension,
    SupportsSurfaceCapabilities2Extension,
    SupportsSurfacelessQueryExtension,
    SupportsSurfaceProtectedCapabilitiesExtension,
    SupportsSurfaceProtectedSwapchains,
    SupportsSwapchainMaintenance1,
    SupportsTimelineSemaphore,
    SupportsTimestampSurfaceAttribute,
    SupportsTransformFeedbackExtension,
    SupportsVertexInputDynamicState,
    SupportsYUVSamplerConversion,
    SupportsYuvTarget,
    SwapbuffersOnFlushOrFinishWithSingleBuffer,
    SyncMonolithicPipelinesToBlobCache,
    SyncVertexArraysToDefault,
    UnbindFBOBeforeSwitchingContext,
    UncurrentEglSurfaceUponSurfaceDestroy,
    UnfoldShortCircuits,
    UnpackLastRowSeparatelyForPaddingInclusion,
    UnpackOverlappingRowsSeparatelyUnpackBuffer,
    UnsizedSRGBReadPixelsDoesntTransform,
    UploadDataToIosurfacesWithStagingBuffers,
    UploadTextureDataInChunks,
    UseCullModeDynamicState,
    UseDepthBiasEnableDynamicState,
    UseDepthCompareOpDynamicState,
    UseDepthTestEnableDynamicState,
    UseDepthWriteEnableDynamicState,
    UseFrontFaceDynamicState,
    UseInstancedPointSpriteEmulation,
    UseIntermediateTextureForGenerateMipmap,
    UseMultipleDescriptorsForExternalFormats,
    UseNonZeroStencilWriteMaskStaticState,
    UsePrimitiveRestartEnableDynamicState,
    UseRasterizerDiscardEnableDynamicState,
    UseResetCommandBufferBitForSecondaryPools,
    UseShadowBuffersWhenAppropriate,
    UseStencilOpDynamicState,
    UseStencilTestEnableDynamicState,
    UseSystemMemoryForConstantBuffers,
    UseUnusedBlocksWithStandardOrSharedLayout,
    UseVertexInputBindingStrideDynamicState,
    UseVmaForImageSuballocation,
    VaryingsRequireMatchingPrecisionInSpirv,
    VertexIDDoesNotIncludeBaseVertex,
    WaitIdleBeforeSwapchainRecreation,
    WarmUpPipelineCacheAtLink,
    WriteHelperSampleMask,
    ZeroMaxLodWorkaround,

    InvalidEnum,
    EnumCount = InvalidEnum,
};

ANGLE_UTIL_EXPORT extern const char *GetFeatureName(Feature feature);

}  // namespace angle

#endif  // ANGLE_SRC_TESTS_TEST_UTIL_AUTOGEN_ANGLE_FEATURES_AUTOGEN_H_
