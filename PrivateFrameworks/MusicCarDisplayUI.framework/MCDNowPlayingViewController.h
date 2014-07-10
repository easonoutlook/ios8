/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class MCDNowPlayingView, MCDPlayModeControlView, MCDTransportControlView, UIColor, UITapGestureRecognizer, _MCDNowPlayingHostView;

@interface MCDNowPlayingViewController : UIViewController
{
    _Bool _isScrubbing;
    long long _heldAction;
    UIViewController *_transportViewController;
    UIViewController *_playModeViewController;
    _Bool _highTouchMode;
    UIColor *_navbarColor;
    _Bool _navbarHidesShadow;
    _MCDNowPlayingHostView *_viewForSelectingAFirstResponderForKnobSupport;
    MCDTransportControlView *_transportControlView;
    id <MCDNowPlayingViewControllerDelegate> _delegate;
    id <MCDNowPlayingViewControllerDataSource> _dataSource;
    MCDNowPlayingView *_nowPlayingView;
    MCDPlayModeControlView *_playModeControlView;
    UITapGestureRecognizer *_knobPressRecognizer;
    UITapGestureRecognizer *_backPressRecognizer;
}

@property(readonly, nonatomic) UITapGestureRecognizer *backPressRecognizer; // @synthesize backPressRecognizer=_backPressRecognizer;
@property(readonly, nonatomic) UITapGestureRecognizer *knobPressRecognizer; // @synthesize knobPressRecognizer=_knobPressRecognizer;
@property(readonly, nonatomic) MCDPlayModeControlView *playModeControlView; // @synthesize playModeControlView=_playModeControlView;
@property(readonly, nonatomic) MCDNowPlayingView *nowPlayingView; // @synthesize nowPlayingView=_nowPlayingView;
@property(nonatomic) __weak id <MCDNowPlayingViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) __weak id <MCDNowPlayingViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MCDTransportControlView *transportControlView; // @synthesize transportControlView=_transportControlView;
- (void).cxx_destruct;
- (void)_updateTransportControl:(id)arg1 withDefaultImage:(id)arg2 actionType:(long long)arg3;
- (void)_initializeTransportControls;
- (void)_geniusButtonTouchUp:(id)arg1;
- (void)_repeatButtonTouchUp:(id)arg1;
- (void)_shuffleButtonTouchUp:(id)arg1;
- (void)_fastForwardButtonTouchUp:(id)arg1;
- (void)_fastForwardButtonTouchDown:(id)arg1;
- (void)_leftButtonTouchUp:(id)arg1;
- (void)_leftButtonTouchDown:(id)arg1;
- (void)_sendHeldAction;
- (void)_respondToHeldAction;
- (void)_playPauseButtonTouchUp:(id)arg1;
- (void)_sendAction:(long long)arg1 withState:(long long)arg2;
- (void)attemptFirstResponderThing;
- (void)reloadData;
- (void)_updateShuffleStateWithType:(unsigned long long)arg1;
- (void)_updateRepeatStateWithType:(unsigned long long)arg1;
- (void)_updatePlayModesState;
- (void)updatePlayControls;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

