/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "MPAVControllerNode-Protocol.h"
#import "MPControllerProtocol-Protocol.h"

@class MPAVController, MPAVItem, MPTransitionController, UIView;

@interface MPViewController : UIViewController <MPControllerProtocol, MPAVControllerNode>
{
    id _delegate;
    long long _interfaceOrientation;
    MPAVItem *_item;
    MPAVController *_player;
    MPViewController *_pushedViewController;
    MPTransitionController *_pushedTransitionController;
    id _popViewControllerHandler;
    unsigned int _appearing:1;
    unsigned int _observesApplicationSuspendResumeEventsOnly:1;
    unsigned int _showOverlayWhileAppearingDisabled:1;
    _Bool _registeredForPlayerNotifications;
    long long _playerLockedCount;
    _Bool _idleTimerDisabled;
}

@property(nonatomic, getter=idleTimerDisabled, setter=setIdleTimerDisabled:) _Bool idleTimerDisabled; // @synthesize idleTimerDisabled=_idleTimerDisabled;
@property(nonatomic) _Bool registeredForPlayerNotifications; // @synthesize registeredForPlayerNotifications=_registeredForPlayerNotifications;
@property(copy, nonatomic) id popViewControllerHandler; // @synthesize popViewControllerHandler=_popViewControllerHandler;
@property(nonatomic) long long orientation; // @synthesize orientation=_interfaceOrientation;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_pushTransitionEnded:(id)arg1;
- (void)_popTransitionEnded:(id)arg1;
- (_Bool)_canReloadView;
- (void)removeChildViewController:(id)arg1;
- (void)addChildViewController:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)setView:(id)arg1;
- (void)clearWeakReferencesToObject:(id)arg1;
- (void)setOrientation:(long long)arg1 animate:(_Bool)arg2;
- (void)incrementAggregateStatisticsDisplayCount;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)unlockPlayer;
- (void)lockPlayer;
- (void)setAppearing:(_Bool)arg1;
- (void)willChangeToInterfaceOrientation:(long long)arg1;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (void)pushViewController:(id)arg1 withTransition:(id)arg2;
- (void)noteIgnoredChangeTypes:(unsigned long long)arg1;
@property(nonatomic) _Bool observesApplicationSuspendResumeEventsOnly;
- (void)applicationResumed;
- (void)applicationDidResumeEventsOnly;
- (void)applicationDidSuspendEventsOnly;
- (void)stopTicking;
- (void)startTicking;
- (_Bool)isAppearing;
- (void)endIgnoringChangeTypes:(unsigned long long)arg1;
- (long long)displayableInterfaceOrientationForInterfaceOrientation:(long long)arg1;
- (void)didChangeToInterfaceOrientation:(long long)arg1;
- (void)endTransitionOverlayHidingWithTransferedOverlayView:(id)arg1;
- (void)beginTransitionOverlayHidding;
- (id)copyOverlayViewForTransitionToItem:(id)arg1;
- (_Bool)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2;
- (void)beginIgnoringChangeTypes:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, retain, nonatomic) UIView *view;

@end

