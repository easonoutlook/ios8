/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/KNAnimationEffect.h>

#import "KNAnimationPluginArchiving-Protocol.h"
#import "KNChunkableBuildAnimator-Protocol.h"

@class KNMotionBlurAnimationPluginWrapper, NSMutableArray;

// Not exported
@interface KNBuildBlinds : KNAnimationEffect <KNChunkableBuildAnimator, KNAnimationPluginArchiving>
{
    KNMotionBlurAnimationPluginWrapper *_motionBlurWrapper;
    NSMutableArray *_layerToOldParentArray;
}

+ (void)downgradeAttributes:(id *)arg1 animationName:(id *)arg2 warning:(id *)arg3 type:(int)arg4 isToClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (void)upgradeAttributes:(id *)arg1 animationName:(id)arg2 warning:(id *)arg3 type:(int)arg4 isFromClassic:(_Bool)arg5 version:(unsigned long long)arg6;
+ (id)blindsAnimationsWithContext:(id)arg1 animationContext:(id)arg2 layerToOldParentArray:(id)arg3;
+ (id)layersFromParticles:(id)arg1 withBounds:(struct CGRect)arg2 mainLayer:(id)arg3 direction:(unsigned long long)arg4 animationContext:(id)arg5;
+ (id)generateParticles:(unsigned long long)arg1 withBounds:(struct CGRect)arg2 direction:(unsigned long long)arg3 animationContext:(id)arg4;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (_Bool)requiresSingleTexturePerStage;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)renderFrameWithContext:(id)arg1;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (id)animationsWithContext:(id)arg1;
- (void)animationDidEndWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (void)dealloc;

@end

