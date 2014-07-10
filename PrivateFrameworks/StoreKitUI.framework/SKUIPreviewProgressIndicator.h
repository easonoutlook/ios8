/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class SKUIShapeView, UIImageView;

@interface SKUIPreviewProgressIndicator : UIView
{
    SKUIShapeView *_backgroundView;
    UIImageView *_cancelImageView;
    SKUIShapeView *_foregroundView;
    _Bool _isIndeterminate;
    float _progress;
}

@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic, getter=isIndeterminate) _Bool indeterminate; // @synthesize indeterminate=_isIndeterminate;
- (void).cxx_destruct;
- (id)_newShapeViewWithBounds:(struct CGRect)arg1 lineWidth:(double)arg2;
- (void)_beginIndeterminateAnimation;
- (void)tintColorDidChange;
- (void)setBackgroundColor:(id)arg1;
- (void)setProgress:(float)arg1 animated:(_Bool)arg2;
- (void)reloadWithPlayerStatus:(id)arg1 animated:(_Bool)arg2;
- (void)endIndeterminateAnimation;
- (void)beginIndeterminateAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end

