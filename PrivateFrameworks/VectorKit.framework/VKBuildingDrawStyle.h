/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKRenderStyle.h>

// Not exported
@interface VKBuildingDrawStyle : VKRenderStyle
{
}

+ (int)renderStyleID;
- (float)strokeWidth3DAtZoom:(float)arg1;
- (Matrix_5173352a)strokeColor3DAtZoom:(float)arg1;
- (_Bool)hasStrokeWidth3D;
- (_Bool)hasStrokeColor3D;
- (float)footprintStrokeWidthAtZoom:(float)arg1;
- (Matrix_5173352a)footprintStrokeColorAtZoom:(float)arg1;
- (int)roofStyle;
- (_Bool)visibleAtZoom:(float)arg1;
- (_Bool)outlineAtZoom:(float)arg1;
- (Matrix_5173352a)flatColorAtZoom:(float)arg1;
- (Matrix_5173352a)landmarkColorAtZoom:(float)arg1;
- (Matrix_5173352a)outlineColorAtZoom:(float)arg1;
- (Matrix_5173352a)facadeColorAtZoom:(float)arg1;
- (Matrix_5173352a)topColorAtZoom:(float)arg1;

@end

