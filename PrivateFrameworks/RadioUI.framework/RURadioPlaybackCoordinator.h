/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MPAVRoutingControllerDelegate-Protocol.h"

@class MPAVRoute, MPAVRoutingController, MPUReportingController, MPUserNotification, NSDate, NSObject<OS_dispatch_source>, RUPlaybackTimeoutInfoController, RURadioAVPlayer, RadioStation;

@interface RURadioPlaybackCoordinator : NSObject <MPAVRoutingControllerDelegate>
{
    MPAVRoutingController *_routingController;
    MPAVRoute *_pickedRoute;
    _Bool _deviceIsDocked;
    _Bool _deviceIsLocked;
    _Bool _didPresentNotificationForCurrentItem;
    int _lockStateNotifyToken;
    _Bool _lockStateNotifyTokenIsValid;
    void *_mediaRemoteCommandObserver;
    NSObject<OS_dispatch_source> *_pauseTimeoutTimerSource;
    RadioStation *_playbackNotificationStation;
    _Bool _playbackIsPaused;
    NSDate *_playbackTimeoutBeginDate;
    double _playbackTimeoutDuration;
    RUPlaybackTimeoutInfoController *_playbackTimeoutInfoController;
    MPUserNotification *_playbackTimeoutNotification;
    _Bool _playbackTimeoutNotificationDidExpire;
    NSObject<OS_dispatch_source> *_playbackTimeoutNotificationExpirationTimerSource;
    NSObject<OS_dispatch_source> *_presentPlaybackTimeoutTimerSource;
    _Bool _wasUsingBackgroundNetwork;
    RURadioAVPlayer *_player;
    RadioStation *_currentStation;
    MPUReportingController *_reportingController;
}

@property(retain, nonatomic) MPUReportingController *reportingController; // @synthesize reportingController=_reportingController;
@property(retain, nonatomic) RadioStation *currentStation; // @synthesize currentStation=_currentStation;
@property(readonly, nonatomic) RURadioAVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)_updatePlaybackTimerForDeviceStateChange;
- (void)_schedulePlaybackTimeoutNotificationExpirationTimerIfNeeded;
- (void)_resetPlaybackTimeoutInformation;
- (void)_receivedUserNotificationResponseForUserNotification:(struct __CFUserNotification *)arg1 withResponseFlags:(unsigned long long)arg2;
- (void)_presentPlaybackTimeoutNotificationForCurrentItemIfNeeded;
- (_Bool)_isRadioRelevantItem:(id)arg1;
- (_Bool)_isPauseTimeoutActive;
- (void)_dismissExpiredPlaybackTimeoutNotificationForced:(_Bool)arg1;
- (void)_cancelPresentPlaybackTimeoutTimer;
- (void)_cancelPlaybackTimeoutNotificationExpirationTimer;
- (void)_cancelPlaybackTimeoutNotification;
- (void)_cancelPauseTimeoutTimer;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_playbackContentsDidChangeNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_itemIsLikedDidChangeNotification:(id)arg1;
- (void)_itemIsInWishListDidChangeNotification:(id)arg1;
- (void)_itemIsBannedDidChangeNotification:(id)arg1;
- (void)_itemDurationDidBecomeAvailableNotification:(id)arg1;
- (void)_fullMuteDidChangeNotification:(id)arg1;
- (void)_effectiveVolumeDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_setupPlayerWithRadioPlaybackContext:(id)arg1;
- (void)setupPlaybackQueueWithPlaybackContext:(id)arg1 completionHandler:(id)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)dealloc;
- (id)initWithPlayer:(id)arg1;
- (id)init;

@end
