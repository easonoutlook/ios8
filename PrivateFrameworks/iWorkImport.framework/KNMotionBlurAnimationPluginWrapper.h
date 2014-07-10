/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class KNMotionBlurWrapper, NSArray, NSDictionary, NSObject<KNAnimationPluginAnimationRendering>;

// Not exported
@interface KNMotionBlurAnimationPluginWrapper : NSObject
{
    NSDictionary *_animationDict;
    NSDictionary *_animationCacheDict;
    id _textureDrawOptionsBlock;
    NSArray *_generatedTextures;
    _Bool _shouldDrawMotionBlur;
    _Bool _shouldGenerateNewTexturesFromLayers;
    _Bool _isSetup;
    KNMotionBlurWrapper *_motionBlurWrapper;
    NSObject<KNAnimationPluginAnimationRendering> *_animationPlugin;
    struct CGRect _drawableFrame;
    struct CGRect _animationFrame;
    struct CATransform3D _projectionTransform;
}

@property(nonatomic) _Bool isSetup; // @synthesize isSetup=_isSetup;
@property(nonatomic) NSObject<KNAnimationPluginAnimationRendering> *animationPlugin; // @synthesize animationPlugin=_animationPlugin;
@property(nonatomic) _Bool shouldGenerateNewTexturesFromLayers; // @synthesize shouldGenerateNewTexturesFromLayers=_shouldGenerateNewTexturesFromLayers;
@property(nonatomic) struct CATransform3D projectionTransform; // @synthesize projectionTransform=_projectionTransform;
@property(nonatomic) struct CGRect animationFrame; // @synthesize animationFrame=_animationFrame;
@property(nonatomic) struct CGRect drawableFrame; // @synthesize drawableFrame=_drawableFrame;
@property(readonly, nonatomic) KNMotionBlurWrapper *motionBlurWrapper; // @synthesize motionBlurWrapper=_motionBlurWrapper;
- (void)renderFrameWithContext:(id)arg1;
- (void)setupWithContext:(id)arg1 animationContext:(id)arg2 orthographicProjection:(_Bool)arg3;
- (struct CATransform3D)p_projectionTransformWithType:(long long)arg1 customProjectionTransform:(struct CATransform3D)arg2 context:(id)arg3 animationContext:(id)arg4;
- (void)setupWithContext:(id)arg1 animationContext:(id)arg2 animationDict:(id)arg3 textures:(id)arg4 projectionTransformType:(long long)arg5 customProjectionTransform:(struct CATransform3D)arg6;
- (id)p_generatedTexturesFromLayersInAnimationDict:(id)arg1 context:(id)arg2 animationContext:(id)arg3 textures:(id)arg4;
- (void)p_setupAnimationDictionariesWithAnimationDict:(id)arg1 context:(id)arg2;
@property(nonatomic) _Bool shouldDrawMotionBlur;
- (void)dealloc;
- (void)teardown;
- (id)initWithAnimationPlugin:(id)arg1 drawableFrame:(struct CGRect)arg2 animationFrame:(struct CGRect)arg3;

@end

