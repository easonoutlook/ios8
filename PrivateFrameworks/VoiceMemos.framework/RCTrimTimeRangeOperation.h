/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class NSError;

@interface RCTrimTimeRangeOperation : NSOperation
{
    _Bool _canSimulateTrimmingProgress;
    float _simulatedProgress;
    _Bool _trimMode;
    id _progressUpdateBlock;
    CDStruct_73a5d3ca _timeRange;
}

@property(copy, nonatomic) id progressUpdateBlock; // @synthesize progressUpdateBlock=_progressUpdateBlock;
@property(readonly, nonatomic) _Bool trimMode; // @synthesize trimMode=_trimMode;
@property(readonly, nonatomic) CDStruct_73a5d3ca timeRange; // @synthesize timeRange=_timeRange;
- (void).cxx_destruct;
- (void)_postFinalProgressUpdateNotification;
- (float)_progress;
- (void)simulateTrimmingProgress;
- (void)setCanSimulateTrimmingProgress:(_Bool)arg1;
- (void)updateExportSessionProgressWithInterval:(double)arg1;
@property(readonly, nonatomic) _Bool progressShouldContinueUpdating;
@property(readonly, nonatomic) double progress;
- (void)main;
- (void)start;
- (id)initWithTimeRange:(CDStruct_73a5d3ca)arg1 trimMode:(long long)arg2;

// Remaining properties
@property(readonly, nonatomic) NSError *error; // @dynamic error;
@property(readonly, nonatomic) double exportedDuration; // @dynamic exportedDuration;
@property(readonly, nonatomic) _Bool success; // @dynamic success;

@end

