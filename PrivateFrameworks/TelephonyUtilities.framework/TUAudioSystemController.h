/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <TelephonyUtilities/TUAudioController.h>

@class NSArray, NSNumber, NSObject<OS_dispatch_queue>;

@interface TUAudioSystemController : TUAudioController
{
    NSObject<OS_dispatch_queue> *_uplinkMutedQueue;
    NSObject<OS_dispatch_queue> *_downlinkMutedQueue;
    NSObject<OS_dispatch_queue> *_ttyQueue;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
    NSNumber *_isUplinkMutedCached;
    NSNumber *_isDownlinkMutedCached;
    NSNumber *_isTTYCached;
    NSArray *_pickableRoutesForTTY;
    NSArray *_pickableRoutesForNonTTY;
    _Bool _isRequestingUplinkMuted;
    _Bool _isRequestingDownlinkMuted;
    _Bool _isRequestingTTY;
    _Bool _isRequestingPickableRoutesForTTY;
    _Bool _isRequestingPickableRoutesForNonTTY;
    unsigned long long _lastUplinkMutedRequestScheduleTime;
    unsigned long long _lastDownlinkMutedRequestScheduleTime;
    unsigned long long _lastTTYRequestScheduleTime;
    unsigned long long _lastTTYPickableRoutesScheduleTime;
    unsigned long long _lastNonTTYPickableRoutesScheduleTime;
}

+ (id)sharedAudioSystemController;
+ (id)sharedSystemController;
- (id)pickableRoutesForNonTTY;
- (id)_pickableRoutesForNonTTYWithForceNewRequest:(_Bool)arg1;
- (id)pickableRoutesForTTY;
- (id)_pickableRoutesForTTYWithForceNewRequest:(_Bool)arg1;
- (id)pickableRoutes;
- (_Bool)setDownlinkMuted:(_Bool)arg1;
- (_Bool)isDownlinkMuted;
- (_Bool)setUplinkMuted:(_Bool)arg1;
- (_Bool)isTTY;
- (_Bool)isUplinkMuted;
- (void)_handleCallStatusChanged;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (void)_handleDownlinkMuteDidChangeNotification:(id)arg1;
- (void)_handleUplinkMuteDidChangeNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

