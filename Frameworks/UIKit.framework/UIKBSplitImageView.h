/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIView.h>

@class NSString, UIImageView;

// Not exported
@interface UIKBSplitImageView : UIView
{
    UIImageView *_fullView;
    UIImageView *_splitLeft;
    UIImageView *_splitRight;
    NSString *_currentFilterType;
}

@property(nonatomic) NSString *filterType; // @synthesize filterType=_currentFilterType;
- (void)setImage:(id)arg1 cachedWidth:(double)arg2 keyplane:(id)arg3;
- (void)setImage:(id)arg1 splitLeft:(id)arg2 splitRight:(id)arg3 keyplane:(id)arg4;
- (void)insertSubviewAtBottom:(id)arg1;
- (_Bool)_shouldInheritScreenScaleAsContentScaleFactor;
- (void)setAlpha:(double)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

