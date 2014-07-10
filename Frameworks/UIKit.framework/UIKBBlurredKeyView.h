/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIKBKeyView.h>

@class UIKBBackdropView;

// Not exported
@interface UIKBBlurredKeyView : UIKBKeyView
{
    UIKBKeyView *_keyView;
    UIKBBackdropView *_backdropView;
}

- (void)setRenderConfig:(id)arg1;
- (id)renderConfig;
- (void)setDrawFrame:(struct CGRect)arg1;
- (struct CGRect)drawFrame;
- (id)key;
- (id)keyplane;
- (void)dimKeyCaps:(double)arg1 duration:(double)arg2;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)setNeedsDisplay;
- (void)displayLayer:(id)arg1;
- (_Bool)requiresSublayers;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 keyplane:(id)arg2 key:(id)arg3;

@end

