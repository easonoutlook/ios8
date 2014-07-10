/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVAssetImageGenerator, TSDMovieRep;

// Not exported
@interface TSDMovieTimePropertyTracker : NSObject
{
    TSDMovieRep *mMovieRep;
    int mTimeProperty;
    double mRequestedTime;
    double mTolerance;
    double mPreciseTime;
    unsigned long long mPendingTimeChangeRequestCount;
    id mCommitCompletionHandler;
    AVAssetImageGenerator *mMovieAssetImageGenerator;
    _Bool mChangesPosterTime;
    _Bool mDynamicVisibleTimeChangeDidBegin;
    _Bool mDidCancel;
}

@property(readonly, nonatomic) double preciseTime; // @synthesize preciseTime=mPreciseTime;
@property(nonatomic) double tolerance; // @synthesize tolerance=mTolerance;
@property(nonatomic) double requestedTime; // @synthesize requestedTime=mRequestedTime;
@property(readonly, nonatomic) _Bool changesPosterTime; // @synthesize changesPosterTime=mChangesPosterTime;
- (void)p_stopPreviewingTimeChanges;
- (void)p_startPreviewingTimeChangesIfNeeded;
- (void)cancel;
- (id)p_commandForCommittingTimeProperty:(int)arg1;
- (void)p_completeChangesWithImageData:(id)arg1 commandForCommittingTime:(id)arg2 error:(id)arg3;
- (void)p_commitChanges;
- (void)commitChangesWithCompletionHandler:(id)arg1;
- (void)p_updatePreciseTime;
- (void)dealloc;
- (id)init;
- (id)initWithMovieRep:(id)arg1 timeProperty:(int)arg2;

@end

