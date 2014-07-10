/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DChartBasicElementProperties.h>

// Not exported
@interface TSCH3DChartContinuousElementProperties : TSCH3DChartBasicElementProperties
{
    float mDepthGapFactor;
    float mDepthLimitFactor;
    float mShadowCameraDepthLimitAdjustmentFactor;
    unsigned long long mMaxLimitingSeries;
}

@property(readonly, nonatomic) float shadowCameraDepthLimitAdjustmentFactor; // @synthesize shadowCameraDepthLimitAdjustmentFactor=mShadowCameraDepthLimitAdjustmentFactor;
@property(readonly, nonatomic) float depthLimitFactor; // @synthesize depthLimitFactor=mDepthLimitFactor;
@property(readonly, nonatomic) float p_sageInterSetDepthGapProperty; // @synthesize p_sageInterSetDepthGapProperty=mDepthGapFactor;
- (_Bool)applyElementTransform:(struct ObjectTransforms *)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor *)arg4;
- (float)depthForScene:(id)arg1;
- (float)chartMinZForScene:(id)arg1;
- (void)reset;
- (void)resetWithEnumerator:(id)arg1 layoutSettings:(CDStruct_9aa9521f)arg2;
- (void)updateLabels;
- (tvec2_3b141483)seriesSize;
@property(readonly, nonatomic) long long seriesCount;
- (float)p_depthLimitedChartInitialDepthOffset;
- (float)p_interSetDepthGapProperty;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

