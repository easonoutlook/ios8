/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "RCAVWaveformViewControllerDelegate-Protocol.h"

@class AVPlayerItem, NSURL, RCAVWaveformViewController, RCFileInputWaveformDataSource, RCPreviewController, RCUIConfiguration, UIButton, UILabel, UIView;

@interface RCAudioTrimmingModalItemViewController : UIViewController <RCAVWaveformViewControllerDelegate>
{
    UIView *_nonWaveformContentView;
    RCAVWaveformViewController *_waveformViewController;
    RCFileInputWaveformDataSource *_waveformDataSource;
    UILabel *_timeDisplayLabel;
    UIButton *_playPauseButton;
    AVPlayerItem *_playerItem;
    RCUIConfiguration *_defaultUIConfiguration;
    RCUIConfiguration *_disabledUIConfiguration;
    RCUIConfiguration *_progressUIConfiguration;
    _Bool _showsProgress;
    _Bool _enabled;
    float _progress;
    NSURL *_audioURL;
    double _maximumDuration;
    RCPreviewController *_previewController;
}

@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) float progress; // @synthesize progress=_progress;
@property(nonatomic) _Bool showsProgress; // @synthesize showsProgress=_showsProgress;
@property(readonly, nonatomic) RCPreviewController *previewController; // @synthesize previewController=_previewController;
@property(readonly, nonatomic) double maximumDuration; // @synthesize maximumDuration=_maximumDuration;
@property(readonly, copy, nonatomic) NSURL *audioURL; // @synthesize audioURL=_audioURL;
- (void).cxx_destruct;
- (id)_playStateImageForAVPreviewState:(long long)arg1;
- (void)_playPauseAction;
- (void)_pausePreviewing;
- (void)_beginOrResumePreviewing;
- (void)_updateAudioStateInterface;
- (id)_currentUIConfiguration;
- (void)audioWaveformControllerDidChangeAVState:(id)arg1;
- (void)audioWaveformControllerDidChangeAVTimes:(id)arg1;
- (void)audioWaveformControllerDidChangeWaveformDataSource:(id)arg1;
- (struct CGSize)preferredContentSize;
- (void)updateViewConstraints;
- (void)viewDidLoad;
- (void)_updateProgressView;
@property(readonly, nonatomic) CDStruct_73a5d3ca selectedTimeRange;
- (id)initWithAudioURL:(id)arg1 maximumDuration:(double)arg2;

@end

