/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKRenderStyle.h>

// Not exported
@interface VKLineDrawStyle : VKRenderStyle
{
}

+ (int)renderStyleID;
- (Matrix_5173352a)outerGlowColorAtZoom:(float)arg1;
- (float)outerGlowRadiusAtZoom:(float)arg1;
- (Matrix_5173352a)innerGlowColorAtZoom:(float)arg1;
- (float)innerGlowRadiusAtZoom:(float)arg1;
- (Matrix_5173352a)dropShadowColorAtZoom:(float)arg1;
- (Matrix_8746f91e)dropShadowOffsetAtZoom:(float)arg1;
- (_Bool)hasDropShadowAtZoom:(float)arg1;
- (float)dropShadowWidthAtZoom:(float)arg1;
- (Matrix_5173352a)insetShadowColorAtZoom:(float)arg1;
- (float)insetShadowAngleAtZoom:(float)arg1;
- (float)insetShadowHeightAtZoom:(float)arg1;
- (_Bool)hasStrokeDashAtZoom:(int)arg1;
- (_Bool)hasFillDashAtZoom:(int)arg1;
- (unsigned long long)strokeDashPatternAtZoom:(float)arg1;
- (unsigned long long)fillDashPatternAtZoom:(float)arg1;
- (_Bool)hasDashAtAnyZ;

@end

