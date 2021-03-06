/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CPLDaemonLibraryManagerMinimalProtocol-Protocol.h"

@protocol CPLDaemonLibraryManagerProtocol <CPLDaemonLibraryManagerMinimalProtocol>
- (void)deleteResourcesIfSafe:(id)arg1 completionHandler:(id)arg2;
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(id)arg2;
- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(id)arg2;
- (void)getChangeBatchWithCompletionHandler:(id)arg1;
- (void)finalizeSessionWithCompletionHandler:(id)arg1;
- (void)beginPullSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
- (void)beginPushSessionWithKnownLibraryVersion:(id)arg1 completionHandler:(id)arg2;
@end

