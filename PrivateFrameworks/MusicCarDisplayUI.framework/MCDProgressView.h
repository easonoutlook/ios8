/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UILabel;

@interface MCDProgressView : UIView
{
    _Bool _progressActive;
    UILabel *_timeLabel;
    UILabel *_timeRemainingLabel;
    UIView *_progressView;
    UIView *_trackView;
    UIView *_indicatorView;
    float _progress;
    _Bool _isLive;
}

- (void).cxx_destruct;
- (void)setPlaybackTime:(double)arg1 duration:(double)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

