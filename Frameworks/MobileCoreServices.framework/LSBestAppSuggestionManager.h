/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSXPCConnection;

@interface LSBestAppSuggestionManager : NSObject
{
    id <LSBestAppSuggestionManagerDelegate> _delegate;
    _Bool _listeningForBestAppSuggestions;
    NSXPCConnection *_connection;
}

@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void)launchAppWithBestAppSuggestion:(id)arg1;
- (void)launchAppWithBundleIdentifier:(id)arg1 userActivityUniqueIdentifier:(id)arg2 userActivityTypeIdentifier:(id)arg3;
- (void)launchAppWithBundleIdentifier:(id)arg1 taskContinuationIdentifier:(id)arg2;
- (void)notifyBestAppChanged:(id)arg1 type:(unsigned long long)arg2 options:(id)arg3 bundleIdentifier:(id)arg4 activityType:(id)arg5 when:(id)arg6 confidence:(double)arg7 deviceName:(id)arg8 deviceIdentifier:(id)arg9;
- (void)queueFetchOfPayloadForBestAppSuggestion:(id)arg1;
- (id)bestAppSuggestions:(long long)arg1;
- (_Bool)determineBestAppWithDelay:(double)arg1 withBlock:(id)arg2;
- (id)bestAppSuggestion;
- (void)stopListeningForBestAppSuggestions;
- (void)startListeningForBestAppSuggestions;
- (void)removeBestApp:(id)arg1 options:(id)arg2;
@property __weak id <LSBestAppSuggestionManagerDelegate> delegate; // @dynamic delegate;
- (void)dealloc;
- (id)init;

@end

