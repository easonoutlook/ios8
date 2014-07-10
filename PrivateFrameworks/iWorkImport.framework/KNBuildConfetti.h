/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/KNAnimationEffect.h>

#import "KNAnimationPluginArchiving-Protocol.h"
#import "KNFrameBuildAnimator-Protocol.h"

@class KNBuildConfettiSystem, TSDGLDataBuffer, TSDGLShader;

// Not exported
@interface KNBuildConfetti : KNAnimationEffect <KNFrameBuildAnimator, KNAnimationPluginArchiving>
{
    TSDGLShader *mShader;
    KNBuildConfettiSystem *mParticleSystem;
    struct CATransform3D mBaseTransform;
    TSDGLDataBuffer *mQuadDataBuffer;
    TSDGLShader *mQuadShader;
    struct CGRect mFrameRect;
    struct CGRect mDrawableFrame;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)customAttributes;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (_Bool)requiresSingleTexturePerStage;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)p_setupParticleSystemWithImage:(id)arg1 build:(id)arg2;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (void)dealloc;
- (id)initWithAnimationContext:(id)arg1;

@end

