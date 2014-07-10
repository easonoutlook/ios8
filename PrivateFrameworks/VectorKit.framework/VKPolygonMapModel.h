/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKVectorMapModel.h>

#import "VKStyleManagerObserver-Protocol.h"

@class VKStyleManager;

// Not exported
@interface VKPolygonMapModel : VKVectorMapModel <VKStyleManagerObserver>
{
    _Bool _drawShapes;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonStroke::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonStroke::Shader::Setup>>> _strokeShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonAnimatableStroke::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonAnimatableStroke::Shader::Setup>>> _animatableStrokeShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonFill::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonFill::Shader::Setup>>> _fillShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonAnimatableFill::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonAnimatableFill::Shader::Setup>>> _animatableFillShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::PolygonShadowedStroke::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::PolygonShadowedStroke::Shader::Setup>>> _coastlineShaderSetupPool;
    struct unique_ptr<ggl::FragmentedPool<ggl::Glow::Shader::Setup>, std::__1::default_delete<ggl::FragmentedPool<ggl::Glow::Shader::Setup>>> _glowShaderSetupPool;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _strokeRenderStateNoStencil;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _strokeRenderStateGreater;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _strokeRenderStateNotEqual;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _fillRenderStateNoStencil;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _fillRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _fillRenderStateBlendNoStencil;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _fillRenderStateBlend;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _coastlineRenderStateNoStencil;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _coastlineRenderState;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _coastlineGlowRenderState;
    struct unique_ptr<ggl::FragmentedPool<ggl::RenderItem>, std::__1::default_delete<ggl::FragmentedPool<ggl::RenderItem>>> _coastlineRenderItemPool;
    struct shared_ptr<ggl::AnimatableTexture::VariantUniformData> _variantData;
    shared_ptr_1fee3c91 _groundCoverViewUniformData;
    struct shared_ptr<ggl::PolygonFill::FillUniformData> _groundCoverPolygonUniformData;
    shared_ptr_78ff922b _groundCoverMesh;
    struct unique_ptr<ggl::PolygonFill::Shader::Setup, std::__1::default_delete<ggl::PolygonFill::Shader::Setup>> _groundCoverShaderSetup;
    struct unique_ptr<ggl::RenderState, std::__1::default_delete<ggl::RenderState>> _groundCoverRenderState;
    struct unique_ptr<ggl::RenderItem, std::__1::default_delete<ggl::RenderItem>> _groundCoverRenderItem;
    shared_ptr_6e6219d6 _groundCoverStyle;
    struct RenderItemBatcher _batcher;
}

@property(nonatomic) _Bool drawShapes; // @synthesize drawShapes=_drawShapes;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateStylesInTiles:(id)arg1 updateTextures:(_Bool)arg2;
- (void)willStartDrawingTiles:(id)arg1;
- (void)stylesheetDoneChanging;
- (void)stylesheetDidChange;
- (void)stylesheetWillChange;
- (_Bool)wantsCategorizedSourceTiles;
- (void)generateCoastlineRenderItemsWithContext:(id)arg1 commandBuffer:(struct CommandBuffer *)arg2;
- (void)generateRenderItemsForTransparentPolygonsInScene:(id)arg1 context:(id)arg2 commandBuffer:(struct CommandBuffer *)arg3;
- (void)generateRenderItemsForOpaquePolygonsInScene:(id)arg1 context:(id)arg2 commandBuffer:(struct CommandBuffer *)arg3;
- (void)generateGroundCoverRenderItemsForScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)generateRenderItemsForScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)gglLayoutScene:(id)arg1 withContext:(id)arg2 renderQueue:(struct RenderQueue *)arg3;
- (void)resetPools;
- (void)flushPools;
- (void)didReceiveMemoryWarning;
@property(readonly, nonatomic) _Bool shouldEverShowVegetation;
- (void)updateGroundCoverStyle;
- (unsigned long long)textureSize;
- (unsigned long long)mapLayerPosition;
- (void)reset;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) VKStyleManager *styleManager;

@end

