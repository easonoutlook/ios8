/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIStatusBarStyleAttributes.h>

@class UIColor;

// Not exported
@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes
{
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    _Bool _hasBusyBackground;
}

- (id)newForegroundStyleWithHeight:(double)arg1;
- (Class)foregroundStyleClass;
- (id)backgroundColorWithTintColor:(id)arg1;
- (_Bool)shouldUseVisualAltitude;
- (_Bool)isTransparent;
- (_Bool)isTranslucent;
- (long long)legibilityStyle;
- (void)dealloc;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3;
- (id)initWithRequest:(id)arg1 backgroundColor:(id)arg2 foregroundColor:(id)arg3 hasBusyBackground:(_Bool)arg4;

@end

