/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <FrontBoard/FBWorkspaceServer.h>

@interface FBUIApplicationWorkspaceServer : FBWorkspaceServer
{
}

- (_Bool)_queue_handleMessage:(id)arg1 withType:(long long)arg2;
- (void)sendProcessAssertionExpirationImminent;
- (void)sendExitEventWithCompletion:(id)arg1;
- (void)sendLaunchEvent:(id)arg1 withCompletion:(id)arg2;

@end

