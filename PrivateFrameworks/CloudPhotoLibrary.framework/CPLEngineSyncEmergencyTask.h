/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

#import "NSCoding-Protocol.h"

@class CPLEngineLibrary, NSString;

@interface CPLEngineSyncEmergencyTask : CPLEngineSyncTask <NSCoding>
{
    CPLEngineLibrary *_readwriteEngineLibrary;
    NSString *_taskIdentifier;
}

+ (_Bool)shouldCoalesceTasks;
+ (id)taskIdentifier;
+ (id)taskWithEngineLibrary:(id)arg1;
- (void).cxx_destruct;
- (_Bool)shouldStopSyncSession;
- (_Bool)shouldDiscardOnError;
@property(readonly, nonatomic) unsigned long long priority;
- (id)taskIdentifier;
@property(retain, nonatomic) CPLEngineLibrary *engineLibrary;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(retain) id <CPLEngineSyncEmergencyTaskDelegate> delegate;

@end
