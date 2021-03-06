/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UIButton, UIButton<MPUTransportButton>;

@interface MPUTransportControlsView : UIView
{
    UIButton<MPUTransportButton> *_leftButton;
    UIButton<MPUTransportButton> *_middleButton;
    UIButton<MPUTransportButton> *_rightButton;
    UIButton *_shuffleButton;
    UIButton *_repeatButton;
    long long _substyle;
    struct UIEdgeInsets _insetsForExpandingButtons;
    _Bool _alwaysLive;
    _Bool _showAccessoryButtons;
    _Bool _showIsPlaying;
    long long _style;
    long long _availableControls;
    long long _disabledControls;
    long long _highlightedControls;
    long long _controlsAcceptingTapsWhenDisabled;
    long long _controlsAcceptingLongPress;
    double _displayedSkipForwardInterval;
    double _displayedSkipBackwardInterval;
    unsigned long long _repeatType;
    unsigned long long _shuffleType;
    id <MPUTransportControlsViewDelegate> _delegate;
}

+ (id)_skipIntervalButtonImageForInterval:(double)arg1 baseImage:(id)arg2 font:(id)arg3 scale:(double)arg4;
+ (id)_stringForDisplayedSkipInterval:(double)arg1;
@property(nonatomic) __weak id <MPUTransportControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool showIsPlaying; // @synthesize showIsPlaying=_showIsPlaying;
@property(nonatomic) unsigned long long shuffleType; // @synthesize shuffleType=_shuffleType;
@property(nonatomic) unsigned long long repeatType; // @synthesize repeatType=_repeatType;
@property(nonatomic) _Bool showAccessoryButtons; // @synthesize showAccessoryButtons=_showAccessoryButtons;
@property(nonatomic) double displayedSkipBackwardInterval; // @synthesize displayedSkipBackwardInterval=_displayedSkipBackwardInterval;
@property(nonatomic) double displayedSkipForwardInterval; // @synthesize displayedSkipForwardInterval=_displayedSkipForwardInterval;
@property(nonatomic, getter=isAlwaysLive) _Bool alwaysLive; // @synthesize alwaysLive=_alwaysLive;
@property(nonatomic) long long controlsAcceptingLongPress; // @synthesize controlsAcceptingLongPress=_controlsAcceptingLongPress;
@property(nonatomic) long long controlsAcceptingTapsWhenDisabled; // @synthesize controlsAcceptingTapsWhenDisabled=_controlsAcceptingTapsWhenDisabled;
@property(nonatomic) long long highlightedControls; // @synthesize highlightedControls=_highlightedControls;
@property(nonatomic) long long disabledControls; // @synthesize disabledControls=_disabledControls;
@property(nonatomic) long long availableControls; // @synthesize availableControls=_availableControls;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)_skipIntervalButtonImageForInterval:(double)arg1;
- (id)_accessoryButtonEmphasizedTextAttributes;
- (id)_accessoryButtonTextAttributes;
- (struct CGPath *)_createGlowPathForButton:(id)arg1;
- (id)_classBundleImageNamed:(id)arg1;
- (struct CGSize)_transportControlButtonSize;
- (void)_setImage:(id)arg1 forButton:(id)arg2;
- (void)_animateFadeGlowForButton:(id)arg1;
- (void)_addGlowToButton:(id)arg1;
- (void)_accessoryControlTap:(id)arg1;
- (void)_transportControlLongPressEnd:(id)arg1;
- (void)_transportControlLongPressBegin:(id)arg1;
- (void)_transportControlTap:(id)arg1;
- (void)_updateTransportControlLongPressTargetActions;
- (void)_updateTransportControlTapPolicyWhenDisabled;
- (void)_updateTransportControlHighlightedStates;
- (void)_updateTransportControlDisabledStates;
- (void)_updateTransportControlButtons;
- (id)_createAccessoryButtonWithStyle:(long long)arg1;
- (id)_createTransportButtonWithStyle:(long long)arg1;
- (void)_setInsetsForExpandingButtons:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)_insetsForExpandingButtons;
- (void)_setSubstyle:(long long)arg1;
- (long long)_substyle;
- (id)_repeatButton;
- (id)_shuffleButton;
- (id)_rightButton;
- (id)_middleButton;
- (id)_leftButton;
- (void)_updateMiddleButtonProperties;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_layoutButton:(id)arg1 withNewFrame:(struct CGRect)arg2 inExpandedTouchRect:(struct CGRect)arg3;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

