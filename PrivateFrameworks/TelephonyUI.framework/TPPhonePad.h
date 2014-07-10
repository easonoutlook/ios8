/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

#import "TPDialerKeypadProtocol-Protocol.h"

@interface TPPhonePad : UIControl <TPDialerKeypadProtocol>
{
    long long _downKey;
    long long _highlightKey;
    id <TPDialerKeypadDelegate> _delegate;
    _Bool _playsSounds;
    _Bool _supportsHardPause;
    double _topHeight;
    double _midHeight;
    double _bottomHeight;
    double _leftWidth;
    double _midWidth;
    double _rightWidth;
    struct __CFSet *_inflightSounds;
    struct __CFDictionary *_keyToButtonMap;
    unsigned int _incompleteSounds;
    unsigned int _delegateSoundCallbacks:1;
    unsigned int _soundsActivated:1;
}

+ (void)_delayedDeactivate;
+ (_Bool)launchFieldTestIfNeeded:(id)arg1;
+ (_Bool)shouldStringAutoDial:(id)arg1 givenLastChar:(BOOL)arg2;
@property _Bool supportsHardPause; // @synthesize supportsHardPause=_supportsHardPause;
- (void)_stopAllSoundsForcingCallbacks:(_Bool)arg1;
- (void)_stopSoundForKey:(unsigned long long)arg1;
- (void)_playSoundForKey:(unsigned long long)arg1;
- (void)_notifySoundCompletionIfNecessary:(unsigned int)arg1;
- (struct CGRect)_rectForKey:(unsigned long long)arg1;
- (int)_keyForPoint:(struct CGPoint)arg1;
- (void)_handleKeyPressAndHoldForKey:(long long)arg1;
- (void)_handleKeyPressAndHoldForDownKey:(id)arg1;
- (void)_handleKeyPressAndHoldForHighlightedKey:(id)arg1;
- (void)_handleKey:(id)arg1 forUIEvent:(id)arg2;
- (_Bool)cancelTouchTracking;
- (void)setHighlighted:(_Bool)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)_imageByCroppingImage:(id)arg1 toRect:(struct CGRect)arg2;
- (struct CGRect)_updateRect:(struct CGRect)arg1 withScale:(double)arg2;
- (double)_yFudge;
- (id)_highlightedImage;
- (id)_keypadImage;
- (id)_pressedImage;
- (struct CGPoint)_keypadOrigin;
- (void)setNeedsDisplayForKey:(int)arg1;
- (id)_buttonForKeyAtIndex:(unsigned long long)arg1;
- (void)setButton:(id)arg1 forKeyAtIndex:(unsigned long long)arg2;
- (void)setPlaysSounds:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)movedToWindow:(id)arg1;
- (void)movedFromWindow:(id)arg1;
- (void)_appResumed;
- (void)_appSuspended;
- (void)removeFromSuperview;
- (void)_activateSounds:(_Bool)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (long long)indexForHighlightedKey;
- (void)highlightKeyAtIndex:(long long)arg1;
- (void)performTapActionEndForHighlightedKey;
- (void)performTapActionDownForHighlightedKey;
- (id)scriptingInfoWithChildren;

@end

