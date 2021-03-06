/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BiometricKit, NSCountedSet, NSHashTable;

@interface SBUIBiometricEventMonitor : NSObject
{
    BiometricKit *_biometricKit;
    id <SBUIBiometricEventMonitorDelegate> _delegate;
    NSHashTable *_observers;
    unsigned long long _lastEvent;
    NSCountedSet *_matchingDisabledRequesters;
    NSCountedSet *_activePasscodeViews;
    _Bool _matchingEnabled;
    _Bool _screenIsOff;
    _Bool _deviceLocked;
    _Bool _lockScreenTopmost;
    _Bool _shouldSendFingerOffNotification;
}

+ (id)sharedInstance;
@property(nonatomic) id <SBUIBiometricEventMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_profileSettingsChanged:(id)arg1;
- (_Bool)shouldEnableReachabilityForUIKitTesting;
- (void)disableMatchingForPasscodeView:(id)arg1;
- (void)enableMatchingForPasscodeView:(id)arg1;
- (void)_updateHandlersForEvent:(unsigned long long)arg1;
- (void)noteScreenWillTurnOn;
- (void)noteScreenDidTurnOff;
- (void)noteScreenWillTurnOff;
- (void)_reevaluateMatching;
- (void)_setDeviceLocked:(_Bool)arg1;
- (void)setLockScreenTopmost:(_Bool)arg1;
- (void)_setMatchingEnabled:(_Bool)arg1;
- (void)_stopMatching;
- (void)_startMatching;
- (void)setMatchingDisabled:(_Bool)arg1 requester:(id)arg2;
- (_Bool)isMatchingEnabled;
- (id)stringForEvent:(unsigned long long)arg1;
- (_Bool)hasEnrolledIdentities;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;

@end

