/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSLayoutConstraint, RCAVState, RCLayoutMetrics, RCRecorderStateButton, UIAlertView, UIButton, UIColor;

@interface RCControlsView : UIView
{
    _Bool _showsBottomSeparatorLine;
    _Bool _canEnableCaptureButton;
    _Bool _canEnablePreviewButton;
    _Bool _canEnableDoneButton;
    _Bool _canRecord;
    id <RCControlsViewDelegate> _delegate;
    long long _controlsConfiguration;
    RCAVState *_AVState;
    RCLayoutMetrics *_layoutMetrics;
    double _topPadding;
    NSLayoutConstraint *_topPaddingCn;
    UIButton *_leftPlayStateButton;
    UIButton *_doneButton;
    RCRecorderStateButton *_recordingStateButton;
    UIAlertView *_noMicAlertView;
    UIColor *_bottomSeparatorLineColor;
}

@property(nonatomic) _Bool canRecord; // @synthesize canRecord=_canRecord;
@property(readonly, nonatomic) UIColor *bottomSeparatorLineColor; // @synthesize bottomSeparatorLineColor=_bottomSeparatorLineColor;
@property(readonly, nonatomic) UIAlertView *noMicAlertView; // @synthesize noMicAlertView=_noMicAlertView;
@property(readonly, nonatomic) RCRecorderStateButton *recordingStateButton; // @synthesize recordingStateButton=_recordingStateButton;
@property(readonly, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(readonly, nonatomic) UIButton *leftPlayStateButton; // @synthesize leftPlayStateButton=_leftPlayStateButton;
@property(readonly, nonatomic) NSLayoutConstraint *topPaddingCn; // @synthesize topPaddingCn=_topPaddingCn;
@property(nonatomic) _Bool canEnableDoneButton; // @synthesize canEnableDoneButton=_canEnableDoneButton;
@property(nonatomic) _Bool canEnablePreviewButton; // @synthesize canEnablePreviewButton=_canEnablePreviewButton;
@property(nonatomic) _Bool canEnableCaptureButton; // @synthesize canEnableCaptureButton=_canEnableCaptureButton;
@property(nonatomic) _Bool showsBottomSeparatorLine; // @synthesize showsBottomSeparatorLine=_showsBottomSeparatorLine;
@property(nonatomic) double topPadding; // @synthesize topPadding=_topPadding;
@property(retain, nonatomic) RCLayoutMetrics *layoutMetrics; // @synthesize layoutMetrics=_layoutMetrics;
@property(copy, nonatomic) RCAVState *AVState; // @synthesize AVState=_AVState;
@property(nonatomic) long long controlsConfiguration; // @synthesize controlsConfiguration=_controlsConfiguration;
@property(nonatomic) __weak id <RCControlsViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_inputAvailabilityDidChangeNotification:(id)arg1;
- (void)_doneButtonPressed:(id)arg1;
- (void)_playStateButtonPressed:(id)arg1;
- (void)_recordingStateButtonPressed:(id)arg1;
- (id)_leftPlayStateImageForAVPreviewState:(long long)arg1;
- (void)_updateButtonsAnimated:(_Bool)arg1;
- (_Bool)_isRecordingOrPausedRecording;
- (_Bool)_isCaptureButtonEnabled;
- (_Bool)_isPreviewButtonEnabled;
- (long long)_AVPreviewState;
- (long long)_AVCaptureState;
- (void)performFailedToStartRecordingActions;
- (void)performRecordButtonPress;
- (id)_recordButton;
- (void)setControlsConfiguration:(long long)arg1 animate:(_Bool)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

