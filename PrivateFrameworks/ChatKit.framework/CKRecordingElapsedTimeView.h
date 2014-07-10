/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSDate, NSTimer, UIImageView, UILabel;

@interface CKRecordingElapsedTimeView : UIView
{
    UILabel *__timeLabel;
    UIImageView *__recordingImageView;
    NSTimer *__updateTimer;
    NSDate *__startTime;
}

@property(readonly, nonatomic) NSDate *_startTime; // @synthesize _startTime=__startTime;
@property(readonly, nonatomic) NSTimer *_updateTimer; // @synthesize _updateTimer=__updateTimer;
@property(readonly, nonatomic) UIImageView *_recordingImageView; // @synthesize _recordingImageView=__recordingImageView;
@property(readonly, nonatomic) UILabel *_timeLabel; // @synthesize _timeLabel=__timeLabel;
- (void)_endRecordingAnimation;
- (void)_beginRecordingAnimation;
- (void)resetTimer;
- (void)endTimer;
- (void)startTimer;
- (void)_update:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonCAMElapsedTimeViewInitialization;

@end

