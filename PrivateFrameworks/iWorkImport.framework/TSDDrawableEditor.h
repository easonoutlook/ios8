/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSDEditor-Protocol.h"
#import "TSDStrokeEditor-Protocol.h"

@class NSArray, NSSet, NSString, TSDDrawableInfo, TSDInteractiveCanvasController, TSDMultiPaneController, TSDStroke, TSKSelection, TSUColor;

// Not exported
@interface TSDDrawableEditor : NSObject <TSDEditor, TSDStrokeEditor>
{
    TSDInteractiveCanvasController *mICC;
    NSSet *mInfos;
    TSDMultiPaneController *mGraphicInspector;
}

+ (id)keyPathsForValuesAffectingLayouts;
+ (_Bool)shouldSuppressMultiselection;
+ (id)keyPathsForValuesAffectingFirstInfo;
+ (id)keyPathsForValuesAffectingInfo;
@property(retain, nonatomic) NSSet *infos; // @synthesize infos=mInfos;
@property(readonly, nonatomic) TSDInteractiveCanvasController *interactiveCanvasController; // @synthesize interactiveCanvasController=mICC;
- (void)p_flipInOrientation:(int)arg1;
- (void)flipVertically:(id)arg1;
- (void)flipHorizontally:(id)arg1;
- (_Bool)canAddOrShowComment;
- (void)addOrShowComment:(id)arg1;
- (double)pictureFrameAssetScaleForNormalizedWidth:(double)arg1;
- (double)strokeWidthForNormalizedWidth:(double)arg1;
@property(readonly, nonatomic) NSString *strokeColorPickerTitle;
@property(readonly, nonatomic) NSArray *strokeSwatches;
- (void)endChangingStrokeWidth:(id)arg1;
- (void)didChangeStrokeWidth:(id)arg1;
- (void)beginChangingStrokeWidth:(id)arg1;
@property(retain, nonatomic) TSUColor *strokeColor;
- (void)takePatternFromStroke:(id)arg1 withDefaultStroke:(id)arg2;
@property(copy, nonatomic) TSDStroke *stroke;
- (void)applyStylePresetWithIndex:(id)arg1;
- (void)setStyleValue:(id)arg1 forStyleProperty:(int)arg2;
- (id)selectedLayoutsSupportingInspectorPositioning;
- (id)selectedLayoutsSupportingFlipping;
- (id)selectedLayoutsSupportingRotation;
- (id)topLevelInspectorAutosaveName;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingSmartShapeAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingConnectionLineAttributes;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShrinkTextToFit;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingTextInset;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingResize;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingEndpoints;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingFill;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingOpacity;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingReflection;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingShadow;
@property(readonly, nonatomic) NSSet *selectedObjectsSupportingStroke;
- (id)documentRoot;
- (int)canPerformEditorAction:(SEL)arg1 withSender:(id)arg2;
- (int)canPerformAction:(SEL)arg1;
@property(readonly, nonatomic) NSSet *layouts;
@property(readonly, nonatomic) TSDDrawableInfo *firstInfo;
- (id)infosOfClass:(Class)arg1;
@property(readonly, retain, nonatomic) TSDDrawableInfo *info;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;

// Remaining properties
@property(retain, nonatomic) TSKSelection *selection;

@end

