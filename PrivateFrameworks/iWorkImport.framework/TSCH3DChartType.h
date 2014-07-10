/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH2DChartType.h>

// Not exported
@interface TSCH3DChartType : TSCH2DChartType
{
}

+ (id)allAnimationFilters;
+ (tvec3_17f03ce0)adjustedScaleForInfoChartScale:(const tvec3_17f03ce0 *)arg1 chartType:(id)arg2 barShape:(int)arg3;
- (_Bool)supportsIncrementalResize;
- (_Bool)needsRefinementForInwardLayout;
- (unsigned long long)depthRatioDimension;
- (double)sageMaxDepthRatio;
- (double)maxDepthRatio;
- (double)minDepthRatio;
- (struct CGSize)minimumChartBodySize;
- (id)columnShapeUIName;
- (_Bool)supportsInterSetDepthGap;
- (_Bool)supportsColumnShape;
- (_Bool)supportsGroupedShadows;
- (_Bool)supportsShadowOffset;
- (_Bool)supportsBevels;
- (_Bool)isHomogeneous;
- (id)renderers;
- (id)animationFiltersWithDefaultFilters:(id)arg1;
- (id)sceneWithChartInfo:(id)arg1 layoutSettings:(CDStruct_9aa9521f)arg2;
- (Class)stageClass;
- (id)categoryLabelPositioner;
- (id)valueLabelPositioner;
- (int)labelOrientation;
- (id)animationDeliveryStylesForFilter:(id)arg1;
- (id)animationFilters;
- (_Bool)supportsBubbleOptions;
- (_Bool)supportsConnectingLines;
- (_Bool)supportsSeriesStroke;
- (_Bool)supportsSeriesFill;
- (_Bool)supportsSeriesShadow;
- (_Bool)supportsErrorBars;
- (_Bool)supportsTrendLines;
- (_Bool)supportsCategoryAxisMinorTickmarks;
- (_Bool)supportsTickmarks;
- (_Bool)supportsAxisLine;
- (_Bool)supportsAxisLabelsOrientation;
- (_Bool)supportsValueAxisLabelsPosition;
- (_Bool)supportsMinorGridlines;
- (_Bool)supportsBorderFrame;
- (_Bool)supportsBackgroundFill;
- (_Bool)approximatesTitleAccommodationUsingLegendSize;
- (int)chartBodyBoundsDefinition;
- (Class)presetImagerClass;
- (Class)sageGeometeryHelperClass;
- (Class)repClass;
- (Class)layoutClass;
- (Class)chartLayoutClass;
- (Class)chartLayoutItemClass;
- (unsigned long long)presentationDimension;
- (tvec3_17f03ce0)adjustedScaleForInfoChartScale:(const tvec3_17f03ce0 *)arg1 barShape:(int)arg2;
- (struct CGRect)adjustChartFrame:(struct CGRect)arg1 forPresetImageTarget:(int)arg2;
- (void)setupPresetImageChart:(id)arg1;
- (id)drawableChartInfoForIconWithPreset:(id)arg1 target:(int)arg2 inFrame:(struct CGRect)arg3 offset:(struct CGPoint)arg4;
- (void)p_layoutInwardForSwatchFrame:(struct CGRect)arg1 chart:(id)arg2 offset:(struct CGPoint)arg3;
- (id)p_activateLayoutCacheForTarget:(int)arg1;
- (int)p_layoutCachePlatform;
- (_Bool)p_isIPhone;
- (id)p_layoutCacheForCacheType:(struct TSCH3DPrecalculatedLayoutCacheType)arg1;
- (void)didRenderIconForInfo:(id)arg1;
- (int)deprecated3DShadowSpecificProperty;
- (int)deprecated3DBevelEdgesSpecificProperty;

@end

