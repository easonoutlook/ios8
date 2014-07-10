/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AccessibilityUtilities/AXServer.h>

@class AXAccessQueue, NSMutableArray;

@interface AXSpringBoardServer : AXServer
{
    AXAccessQueue *_accessQueue;
    id _currentAlertHandler;
    NSMutableArray *_gestureOverrides;
    NSMutableArray *_actionHandlers;
}

+ (id)server;
@property(retain, nonatomic) NSMutableArray *actionHandlers; // @synthesize actionHandlers=_actionHandlers;
@property(retain, nonatomic) NSMutableArray *gestureOverrides; // @synthesize gestureOverrides=_gestureOverrides;
@property(copy, nonatomic) id currentAlertHandler; // @synthesize currentAlertHandler=_currentAlertHandler;
@property(retain, nonatomic) AXAccessQueue *accessQueue; // @synthesize accessQueue=_accessQueue;
- (void)copyStringToPasteboard:(id)arg1;
- (long long)activeInterfaceOrientation;
- (int)activeApplicationOrientation;
- (int)pid;
- (_Bool)isPointInsideAccessibilityInspector:(id)arg1;
- (void)registerOverrideIntentForGesture:(unsigned long long)arg1 withHandler:(id)arg2 withIdentifierCallback:(void)arg3;
- (void)setCancelGestureActivation:(unsigned long long)arg1 cancelEnabled:(_Bool)arg2;
- (void)removeOverrideIntent:(id)arg1;
- (void)registerSpringBoardActionHandler:(id)arg1 withIdentifierCallback:(void)arg2;
- (void)removeActionHandler:(id)arg1;
- (void)setShowSpeechPlaybackControls:(_Bool)arg1;
- (void)showAlert:(long long)arg1 withHandler:(id)arg2 withData:(void)arg3;
- (void)showAlert:(long long)arg1 withHandler:(id)arg2;
- (void)hideAlert;
- (void)cleanupAlertHandler;
- (double)volumeLevel;
- (_Bool)isRingerMuted;
- (_Bool)isSideSwitchUsedForOrientation;
- (void)resetDimTimer;
- (_Bool)isOrientationLocked;
- (int)topEventPidOverride;
- (void)startHearingAidServer;
- (void)toggleHearingControl;
- (void)setVolume:(double)arg1;
- (void)openSCATCommonTasks;
- (void)openSCATCustomGestureCreation;
- (void)openAssistiveTouchCustomGestureCreation;
- (void)takeScreenshot;
- (void)_didConnectToClient;
- (void)_wasDisconnectedFromClient;
- (void)_willClearServer;
- (void)_didConnectToServer;
- (_Bool)_shouldValidateEntitlements;
- (id)_handleActionResult:(id)arg1;
- (id)_handleGestureOverrideResult:(id)arg1;
- (id)_handleReplyResult:(id)arg1;
- (id)_serviceName;
- (void)dealloc;
- (id)init;
- (_Bool)isSettingsAppFrontmost;
- (_Bool)isPurpleBuddyAppFrontmost;
- (_Bool)isSystemAppFrontmost;
- (id)runningAppPIDs;
- (id)focusedAppPID;
- (id)frontmostAppPID;
- (_Bool)isSystemAppShowingAnAlert;
- (id)systemAppInfoWithQuery:(unsigned long long)arg1;
- (_Bool)isSpeakThisTemporarilyDisabled;
- (_Bool)isGuidedAccessActive;
- (_Bool)isVoiceControlRunning;
- (void)openVoiceControl;
- (void)setSiriIsTalking:(_Bool)arg1;
- (_Bool)isSiriTalkingOrListening;
- (_Bool)isSiriVisible;
- (void)dismissSiri;
- (void)openSiri;
- (void)dismissAppSwitcher;
- (void)openAppSwitcher;
- (_Bool)isAppSwitcherVisible;
- (void)showControlCenter:(_Bool)arg1;
- (_Bool)showNotificationCenter:(_Bool)arg1;
- (_Bool)isControlCenterVisible;
- (void)hideNotificationCenter;
- (void)showNotificationCenter;
- (void)toggleNotificationCenter;
- (_Bool)isNotificationCenterVisible;
- (_Bool)isMakingEmergencyCall;
- (_Bool)hasActiveCall;
- (void)resumeMedia;
- (void)pauseMedia;
- (_Bool)isMediaPlaying;
- (void)unlockDevice;
- (id)installedApps;
- (_Bool)areSystemGesturesDisabledByAccessibility;
- (_Bool)areSystemGesturesDisabledNatively;
- (_Bool)isSyncingRestoringResettingOrUpdating;
- (_Bool)isSystemSleeping;
- (_Bool)isScreenLockedWithPasscode:(_Bool *)arg1;
- (id)runningAppProcesses;
- (id)focusedAppProcess;
- (id)frontmostAppProcess;
- (id)applicationWithIdentifier:(id)arg1;
- (_Bool)_shouldDispatchLocally;
- (id)_axSpringBoardServerInstanceDelegate;
- (id)_axSpringBoardServerInstanceIfExists;
- (id)_axSpringBoardServerInstance;

@end
