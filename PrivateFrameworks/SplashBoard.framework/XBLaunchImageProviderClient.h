/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BSBaseXPCClient.h"

@interface XBLaunchImageProviderClient : BSBaseXPCClient
{
}

- (void)_sendMessageType:(long long)arg1 withMessage:(id)arg2 withReplyHandler:(void)arg3 waitForReply:(id)arg4;
- (void)killService;
- (void)launchImageForApplicationWithBundleID:(id)arg1 bundlePath:(id)arg2 launchNibName:(id)arg3 storyboardName:(id)arg4 sceneID:(id)arg5 screen:(id)arg6 interfaceOrientation:(long long)arg7 includeStatusBar:(_Bool)arg8 includeBanner:(_Bool)arg9 screenBounds:(struct CGRect)arg10 snapshotFrame:(struct CGRect)arg11 completionHandler:(id)arg12;
- (id)_connectionInstanceUUID;
- (id)initWithEndpoint:(id)arg1;
- (id)init;

@end

