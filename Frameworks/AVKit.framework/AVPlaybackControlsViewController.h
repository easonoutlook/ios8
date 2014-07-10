/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

@class AVPlayerController, AVPlayerControllerTimeResolver, AVPlayerViewController, NSArray;

@interface AVPlaybackControlsViewController : UIViewController
{
    AVPlayerController *_playerController;
    AVPlayerControllerTimeResolver *_intervalTimeResolver;
    AVPlayerControllerTimeResolver *_resolutionTimeResolver;
    id _AVSystemControllerCurrentRouteHasVolumeControlDidChangeObserver;
    _Bool _showsDoneButton;
    _Bool _playing;
    _Bool _scrubberEnabled;
    _Bool _scanBackwardButtonEnabled;
    _Bool _playPauseButtonEnabled;
    _Bool _scanForwardButtonEnabled;
    _Bool _showsStreamingControls;
    _Bool _skipBackwardThirtySecondsButtonEnabled;
    _Bool _gotoEndOfSeekableRangesButtonEnabled;
    _Bool _showsScaleButton;
    _Bool _showsLoadingIndicator;
    _Bool _showsMediaSelectionButton;
    _Bool _showsFullScreenButton;
    _Bool _showsVolumeSlider;
    AVPlayerViewController *_playerViewController;
    double _scrubberWidth;
    NSArray *_scrubberLoadedTimeRanges;
    long long _scaleButtonType;
}

@property(nonatomic) _Bool showsVolumeSlider; // @synthesize showsVolumeSlider=_showsVolumeSlider;
@property(nonatomic) _Bool showsFullScreenButton; // @synthesize showsFullScreenButton=_showsFullScreenButton;
@property(nonatomic) _Bool showsMediaSelectionButton; // @synthesize showsMediaSelectionButton=_showsMediaSelectionButton;
@property(nonatomic) _Bool showsLoadingIndicator; // @synthesize showsLoadingIndicator=_showsLoadingIndicator;
@property(nonatomic) long long scaleButtonType; // @synthesize scaleButtonType=_scaleButtonType;
@property(nonatomic) _Bool showsScaleButton; // @synthesize showsScaleButton=_showsScaleButton;
@property(nonatomic, getter=isGotoEndOfSeekableRangesButtonEnabled) _Bool gotoEndOfSeekableRangesButtonEnabled; // @synthesize gotoEndOfSeekableRangesButtonEnabled=_gotoEndOfSeekableRangesButtonEnabled;
@property(nonatomic, getter=isSkipBackwardThirtySecondsButtonEnabled) _Bool skipBackwardThirtySecondsButtonEnabled; // @synthesize skipBackwardThirtySecondsButtonEnabled=_skipBackwardThirtySecondsButtonEnabled;
@property(nonatomic) _Bool showsStreamingControls; // @synthesize showsStreamingControls=_showsStreamingControls;
@property(nonatomic, getter=isScanForwardButtonEnabled) _Bool scanForwardButtonEnabled; // @synthesize scanForwardButtonEnabled=_scanForwardButtonEnabled;
@property(nonatomic, getter=isPlayPauseButtonEnabled) _Bool playPauseButtonEnabled; // @synthesize playPauseButtonEnabled=_playPauseButtonEnabled;
@property(nonatomic, getter=isScanBackwardButtonEnabled) _Bool scanBackwardButtonEnabled; // @synthesize scanBackwardButtonEnabled=_scanBackwardButtonEnabled;
@property(retain, nonatomic) NSArray *scrubberLoadedTimeRanges; // @synthesize scrubberLoadedTimeRanges=_scrubberLoadedTimeRanges;
@property(nonatomic, getter=isScrubberEnabled) _Bool scrubberEnabled; // @synthesize scrubberEnabled=_scrubberEnabled;
@property(nonatomic, getter=isPlaying) _Bool playing; // @synthesize playing=_playing;
@property(nonatomic) _Bool showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;
@property(readonly, nonatomic) double scrubberWidth; // @synthesize scrubberWidth=_scrubberWidth;
@property(nonatomic) __weak AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
- (void).cxx_destruct;
- (void)fullScreenButtonTapped:(id)arg1;
- (void)mediaSelectionButtonTapped:(id)arg1;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)seekChapterForward:(id)arg1;
- (void)endScanningForward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (void)endScanningBackward:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
- (void)seekChapterBackward:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (void)volumeSliderValueChanged:(id)arg1;
- (void)scaleButtonTapped:(id)arg1;
- (void)scrubberValueChanged:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)removeControlForUserInteractionObservation:(id)arg1;
- (void)addControlForUserInteractionObservation:(id)arg1;
- (void)updateVolumeSliderValue:(float)arg1;
- (void)updateRemainingTimeLabel:(id)arg1;
- (void)updateScrubberMaximumValue:(float)arg1;
- (void)updateScrubberValue:(float)arg1;
- (void)updateScrubberMinimumValue:(float)arg1;
- (void)updateElapsedTimeLabel:(id)arg1;
- (void)_userInteractionObservationControlTouchUp:(id)arg1;
- (void)_userInteractionObservationControlTouchDown:(id)arg1;
- (void)_updateFullScreenButtonVisibility;
- (void)_updateDoneButtonVisibility;
- (void)_updateVolumeSliderVisibility;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)viewDidLoad;
@property(retain, nonatomic) AVPlayerController *playerController;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

