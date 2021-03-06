/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSDDecorator-Protocol.h"
#import "TSDLayoutManipulatingTracker-Protocol.h"
#import "TSDRepTracker-Protocol.h"

@class CAShapeLayer, NSMutableSet, NSTimer, TSDAutoscroll, TSDHUDViewController, TSDRep, TSUPointerKeyDictionary;

// Not exported
@interface TSDRepDragTracker : NSObject <TSDLayoutManipulatingTracker, TSDDecorator, TSDRepTracker>
{
    TSDRep *mRep;
    _Bool mDidBeginDrag;
    _Bool mHaveShownHUD;
    _Bool mHaveShownSecondHUD;
    _Bool mHaveShownRuler;
    _Bool mIsInspectorDrivenTracking;
    _Bool mIsDragInsertDrivenTracking;
    struct CGPoint mInitialDragPoint;
    struct CGPoint mActualDragPoint;
    struct CGPoint mPreviousActualDragPoint;
    struct CGPoint mLogicalDragPoint;
    TSDHUDViewController *mSecondHUDController;
    struct CGPoint mUnscaledDragDelta;
    _Bool mRoundDragDelta;
    NSTimer *mRulerTimer;
    TSDAutoscroll *mAutoscroll;
    struct CGPoint mAutoscrollPoint;
    id <TSDRepDragTrackerDelegate> mDelegate;
    _Bool mInWillBeginDynamicOperation;
    _Bool mInDidEndDynamicOperation;
    TSUPointerKeyDictionary *mMapRepsToSnapOffsets;
    _Bool mShouldConstrain;
    double mSnapLevel;
    double mConstraintAngle;
    struct CGPoint mConstrainingPoint;
    _Bool mConstraintGuidesShowing;
    CAShapeLayer *mGuideLayer;
    _Bool mShouldShowGuides;
    _Bool mShouldSnapToGuides;
    _Bool mAlreadyInCommandGroup;
    NSMutableSet *mConnectedLineLayouts;
    _Bool mShowDragHUD;
    _Bool mShouldShowRuler;
    _Bool mTrackerDidBeginDragging;
}

@property(nonatomic) _Bool isInspectorDrivenTracking; // @synthesize isInspectorDrivenTracking=mIsInspectorDrivenTracking;
@property(nonatomic) _Bool alreadyInCommandGroup; // @synthesize alreadyInCommandGroup=mAlreadyInCommandGroup;
@property(nonatomic) _Bool shouldSnapToGuides; // @synthesize shouldSnapToGuides=mShouldSnapToGuides;
@property(nonatomic) _Bool shouldShowGuides; // @synthesize shouldShowGuides=mShouldShowGuides;
@property(nonatomic) _Bool shouldShowRuler; // @synthesize shouldShowRuler=mShouldShowRuler;
@property(nonatomic) _Bool showDragHUD; // @synthesize showDragHUD=mShowDragHUD;
@property(nonatomic) _Bool isDragInsertDrivenTracking; // @synthesize isDragInsertDrivenTracking=mIsDragInsertDrivenTracking;
@property(readonly, nonatomic) _Bool didBeginDrag; // @synthesize didBeginDrag=mDidBeginDrag;
@property(retain, nonatomic) TSDRep *rep; // @synthesize rep=mRep;
- (id)p_repsForInfos:(id)arg1 fromReps:(id)arg2;
- (id)p_infosFromReps:(id)arg1;
- (_Bool)p_delegateIsHandlingDrag;
- (void)p_makeSiblingRepsOfRep:(id)arg1 performBlock:(id)arg2;
- (void)p_hideGuideLayer;
- (void)p_showGuideLayer;
- (struct CGRect)p_selectedInfosRect;
- (void)p_updateGuides;
- (void)p_displayRulerAndRect;
- (void)p_hideHUD;
- (void)p_updateHUDAtPoint:(struct CGPoint)arg1;
- (void)p_updateHUDFromTimer;
- (id)actionForLayer:(id)arg1 forKey:(id)arg2;
- (id)decoratorOverlayLayers;
- (void)didChangeCurrentlyTransformingReps;
- (_Bool)operationShouldBeDynamic;
- (_Bool)supportsAlignmentGuides;
- (id)repsForGuidesWhenManipulatingReps:(id)arg1;
- (void)didEndDynamicOperationForReps:(id)arg1;
- (void)commitChangesForReps:(id)arg1;
- (_Bool)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;
- (void)changeDynamicLayoutsForReps:(id)arg1;
- (void)willBeginDynamicOperationForReps:(id)arg1;
- (_Bool)handlesCopyingObjects;
- (void)p_didBeginDrag;
- (void)setConstrainingPoint:(struct CGPoint)arg1;
- (void)setSnapLevel:(double)arg1;
- (void)setShouldConstrain:(_Bool)arg1;
- (void)setLogicalDragPoint:(struct CGPoint)arg1;
- (void)setActualDragPoint:(struct CGPoint)arg1;
- (void)addUnscaledDragDelta:(struct CGPoint)arg1 roundDeltaToViewScale:(_Bool)arg2;
- (void)endPossibleRepDragGesture;
- (void)willEndPossibleRepDragGesture;
- (void)beginShowingDragUIForInitialDragPoint:(struct CGPoint)arg1;
- (id)selectionBehaviorForReps:(id)arg1;
- (void)dealloc;
- (id)initWithRep:(id)arg1;

@end

