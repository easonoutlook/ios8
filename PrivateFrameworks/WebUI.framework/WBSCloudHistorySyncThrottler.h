/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface WBSCloudHistorySyncThrottler : NSObject
{
    NSMutableArray *_syncOperationsWithinMonitoredPeriod;
    NSArray *_throttlingDistribution;
    double _numberOfSecondsToMonitor;
    unsigned long long _maximumNumberOfOperationWithinMonitoredPeriod;
}

- (void).cxx_destruct;
- (unsigned long long)_test_maximumNumberOfOperationWithinMonitoredPeriod;
- (double)_test_numberOfSecondsToMonitor;
- (unsigned long long)_numberOfDevicesInSyncCircle;
- (void)_saveRecordOfPastSyncOperations;
- (void)_loadRecordOfPastSyncOperations;
- (void)_pruneExpiredSyncEntries;
- (double)_currentMinimumTimeIntervalBetweenSyncOperations;
- (void)_loadSyncDistributionConfiguration;
- (_Bool)_loadDistributionConfiguration:(id)arg1;
- (id)_distributionBucketsFromConfiguration:(id)arg1;
- (_Bool)_throttlerIsActive;
- (void)syncAttemptWithPriority:(long long)arg1 didCompleteWithResult:(long long)arg2;
- (_Bool)throttlingPolicyPermitsSyncAttemptWithPriority:(long long)arg1;
- (id)init;

@end

