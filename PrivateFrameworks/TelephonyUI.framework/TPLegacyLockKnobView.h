/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIImageView.h"

@class TPLegacyBottomLockBar, UIAlphaAnimation;

@interface TPLegacyLockKnobView : UIImageView
{
    TPLegacyBottomLockBar *_track;
    UIAlphaAnimation *_animation;
    double _centerDelta;
    _Bool _tracking;
}

- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)beginTracking:(id)arg1;
- (_Bool)shouldBeginTracking:(id)arg1;
- (_Bool)isTracking;
- (void)dealloc;
- (void)setLockView:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithImage:(id)arg1;

@end

