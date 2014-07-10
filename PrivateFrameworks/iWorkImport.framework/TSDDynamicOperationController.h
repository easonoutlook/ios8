/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSSet, TSDAutoscroll, TSDInteractiveCanvasController;

// Not exported
@interface TSDDynamicOperationController : NSObject
{
    TSDInteractiveCanvasController *mICC;
    _Bool mOperationIsDynamic;
    _Bool mResetGuides;
    _Bool mSupportsAlignmentGuides;
    _Bool mPossibleDynamicOperation;
    NSMutableSet *mReps;
    NSMutableSet *mAllTransformedReps;
    TSDAutoscroll *mAutoscroll;
}

@property(readonly, nonatomic) NSSet *allTransformedReps; // @synthesize allTransformedReps=mAllTransformedReps;
@property(readonly, nonatomic) NSSet *currentlyTransformingReps; // @synthesize currentlyTransformingReps=mReps;
- (void)p_resetGuidesForCleanup:(_Bool)arg1;
- (void)invalidateGuides;
- (void)handleTrackerManipulator:(id)arg1;
- (void)p_controllingTMDidResetInOperation:(id)arg1;
- (void)handleGestureRecognizer:(id)arg1;
- (void)stopTransformingReps:(id)arg1;
- (void)startTransformingReps:(id)arg1;
- (void)p_cleanupOperation;
- (void)cancelOperation;
- (_Bool)isOperationDynamic;
- (_Bool)isInPossibleDynamicOperation;
- (_Bool)isInOperation;
- (void)endOperation;
- (void)p_beginDynamicOperationForReps:(id)arg1;
- (void)beginOperation;
- (void)beginPossibleDynamicOperation;
- (void)dealloc;
- (id)initWithInteractiveCanvasController:(id)arg1;

@end

