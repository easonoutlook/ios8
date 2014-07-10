/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BRCFileCoordinationWriting-Protocol.h"
#import "BRCModule-Protocol.h"

@class BRCAccountSession, NSObject<OS_dispatch_queue>;

@interface BRCFSWriter : NSObject <BRCModule, BRCFileCoordinationWriting>
{
    BRCAccountSession *_session;
    // Error parsing type: Ai, name: _suspendCount
    NSObject<OS_dispatch_queue> *_serialQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void).cxx_destruct;
- (void)resume;
- (void)suspend;
- (void)close;
- (id)initWithAccountSession:(id)arg1;
- (void)fixupItemsAtStartup;
- (void)writeUnderCoordinationFromURL:(id)arg1 toURL:(id)arg2 canDelete:(_Bool)arg3;
- (void)applyAdditionsForItemID:(id)arg1 inContainer:(id)arg2;
- (void)applyChangesForItem:(id)arg1 rank:(unsigned long long)arg2 inContainer:(id)arg3;
- (void)_applyChangesForAliasWithRank:(unsigned long long)arg1 container:(id)arg2 li:(id)arg3 si:(id)arg4 diffs:(unsigned long long)arg5;
- (void)stageCreationOfFault:(id)arg1 serverItem:(id)arg2 forCreation:(_Bool)arg3;
- (void)_stageCreationOfDirectory:(id)arg1;

@end

