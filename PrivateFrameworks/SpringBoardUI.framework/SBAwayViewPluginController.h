/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIView;

@interface SBAwayViewPluginController : NSObject
{
    UIView *_view;
    _Bool _viewCanBeDisplayed;
    _Bool _fullscreen;
    _Bool _alwaysFullscreen;
    long long _orientation;
    id _disableTransitionBlock;
    unsigned long long _effectivePresentationStyle;
    NSString *_enablingApplicationBundleIdentifier;
}

+ (void)disableBundleNamed:(id)arg1;
+ (void)disableBundleNamed:(id)arg1 deactivationContext:(id)arg2;
+ (void)enableBundleNamed:(id)arg1;
+ (void)enableBundleNamed:(id)arg1 activationContext:(id)arg2;
@property(copy, nonatomic) NSString *enablingApplicationBundleIdentifier; // @synthesize enablingApplicationBundleIdentifier=_enablingApplicationBundleIdentifier;
@property(nonatomic, getter=_effectivePresentationStyle, setter=_setEffectivePresentationStyle:) unsigned long long effectivePresentationStyle; // @synthesize effectivePresentationStyle=_effectivePresentationStyle;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) _Bool viewCanBeDisplayed; // @synthesize viewCanBeDisplayed=_viewCanBeDisplayed;
- (id)legibilitySettings;
- (unsigned long long)overlayStyle;
- (void)lockScreenMediaControlsShown:(_Bool)arg1;
- (_Bool)wantsMesaAutoUnlock;
- (_Bool)wantsSwipeGestureRecognizer;
- (_Bool)wantsAutomaticFullscreenTimer;
- (_Bool)handleHeadsetButtonPressed:(_Bool)arg1;
- (_Bool)handleVolumeDownButtonPressed;
- (_Bool)handleVolumeUpButtonPressed;
- (_Bool)handleLockButtonPressed;
- (_Bool)handleGesture:(int)arg1 fingerCount:(unsigned long long)arg2;
- (_Bool)handleMenuButtonHeld;
- (_Bool)wantsMenuButtonHeldEvent;
- (_Bool)handleMenuButtonDoubleTap;
- (_Bool)handleMenuButtonTap;
- (id)slideToUnlockText;
- (_Bool)showsDuringCall;
- (_Bool)wantsUserWallpaper;
- (_Bool)wantsHardwareEventsWhenScreenDimmed;
- (_Bool)wantsToOpenURLsWhilePasscodeLocked;
- (_Bool)allowsSiri;
- (_Bool)allowsPhotoSlideshow;
- (_Bool)allowsLockScreenMediaControls;
- (_Bool)allowsLockScreenCamera;
- (_Bool)canScreenDim;
- (id)customHeaderView;
- (_Bool)showHeaderView;
- (_Bool)showStatusBar;
- (id)customSubtitleColor;
- (id)customSubtitleText;
- (_Bool)hasCustomSubtitle;
- (_Bool)showDate;
- (_Bool)showBatteryChargingText;
- (_Bool)showDateView;
- (_Bool)disablesAwayItemsCompletely;
- (_Bool)showAwayItems;
- (unsigned long long)unlockAnimationStyleForDestinationApp:(id)arg1;
- (id)bundleIDForUnlock;
- (_Bool)animateResumingToApplicationWithIdentifier:(id)arg1;
- (long long)pluginPriority;
- (_Bool)retainsPriorityWhileInactive;
- (void)deviceLockViewDidHide;
- (void)deviceLockViewWillShow;
- (void)alwaysFullscreenValueHasChanged;
- (_Bool)canBeAlwaysFullscreen;
@property(nonatomic, getter=isAlwaysFullscreen) _Bool alwaysFullscreen;
- (double)transitionDuration;
- (double)viewFadeInDuration;
- (_Bool)allowsLockScreenHint;
- (_Bool)allowsTimer;
- (_Bool)allowsControlCenter;
- (_Bool)allowsNotificationCenter;
- (_Bool)shouldAutoHideNotifications;
- (_Bool)shouldShowLockStatusBarTime;
- (_Bool)shouldDisableOnUnlock;
- (_Bool)shouldDisableOnRelock;
- (_Bool)viewWantsOverlayLayout;
- (unsigned long long)notificationBehavior;
- (unsigned long long)presentationStyle;
- (_Bool)viewWantsFullscreenLayout;
- (void)setFullscreen:(_Bool)arg1 duration:(double)arg2;
- (void)setFullscreen:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isFullscreen;
- (id)enableTransitionBlock;
- (id)_disableTransitionBlock;
- (void)_setDisableTransitionBlock:(id)arg1;
- (void)disableWithTransitionBlock:(id)arg1;
- (void)disable;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setDeactivationContext:(id)arg1;
- (void)setActivationContext:(id)arg1;
- (void)purgeView;
- (void)loadView;
- (id)backgroundView;
@property(retain, nonatomic) UIView *view;
- (void)dealloc;
- (id)init;

@end

