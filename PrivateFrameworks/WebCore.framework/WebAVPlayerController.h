/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVPlayerViewControllerDelegate-Protocol.h"

@class AVPlayerController, AVValueTiming, NSArray, WebAVMediaSelectionOption;

// Not exported
@interface WebAVPlayerController : NSObject <AVPlayerViewControllerDelegate>
{
    WebAVMediaSelectionOption *_currentAudioMediaSelectionOption;
    WebAVMediaSelectionOption *_currentLegibleMediaSelectionOption;
    _Bool _canPlay;
    _Bool _canPause;
    _Bool _canTogglePlayback;
    _Bool _canSeek;
    _Bool _hasEnabledAudio;
    _Bool _hasEnabledVideo;
    AVPlayerController *_playerControllerProxy;
    struct WebVideoFullscreenModel *_delegate;
    double _rate;
    double _contentDuration;
    double _minTime;
    double _maxTime;
    double _contentDurationWithinEndTimes;
    NSArray *_loadedTimeRanges;
    long long _status;
    AVValueTiming *_timing;
    NSArray *_seekableTimeRanges;
    NSArray *_audioMediaSelectionOptions;
    NSArray *_legibleMediaSelectionOptions;
    struct CGSize _contentDimensions;
}

+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanScanBackward;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingPlaying;
@property(retain) NSArray *legibleMediaSelectionOptions; // @synthesize legibleMediaSelectionOptions=_legibleMediaSelectionOptions;
@property(retain) NSArray *audioMediaSelectionOptions; // @synthesize audioMediaSelectionOptions=_audioMediaSelectionOptions;
@property(retain) NSArray *seekableTimeRanges; // @synthesize seekableTimeRanges=_seekableTimeRanges;
@property(retain) AVValueTiming *timing; // @synthesize timing=_timing;
@property long long status; // @synthesize status=_status;
@property(retain) NSArray *loadedTimeRanges; // @synthesize loadedTimeRanges=_loadedTimeRanges;
@property double contentDurationWithinEndTimes; // @synthesize contentDurationWithinEndTimes=_contentDurationWithinEndTimes;
@property double maxTime; // @synthesize maxTime=_maxTime;
@property double minTime; // @synthesize minTime=_minTime;
@property _Bool hasEnabledVideo; // @synthesize hasEnabledVideo=_hasEnabledVideo;
@property _Bool hasEnabledAudio; // @synthesize hasEnabledAudio=_hasEnabledAudio;
@property struct CGSize contentDimensions; // @synthesize contentDimensions=_contentDimensions;
@property double contentDuration; // @synthesize contentDuration=_contentDuration;
@property _Bool canSeek; // @synthesize canSeek=_canSeek;
@property double rate; // @synthesize rate=_rate;
@property _Bool canTogglePlayback; // @synthesize canTogglePlayback=_canTogglePlayback;
@property _Bool canPause; // @synthesize canPause=_canPause;
@property _Bool canPlay; // @synthesize canPlay=_canPlay;
@property struct WebVideoFullscreenModel *delegate; // @synthesize delegate=_delegate;
@property(retain) AVPlayerController *playerControllerProxy; // @synthesize playerControllerProxy=_playerControllerProxy;
- (id).cxx_construct;
@property(retain) WebAVMediaSelectionOption *currentLegibleMediaSelectionOption;
@property(retain) WebAVMediaSelectionOption *currentAudioMediaSelectionOption;
@property(readonly) _Bool hasLegibleMediaSelectionOptions;
@property(readonly) _Bool hasAudioMediaSelectionOptions;
@property(readonly) _Bool hasMediaSelectionOptions;
- (void)seekToEnd:(id)arg1;
@property(readonly) _Bool canSeekToEnd;
- (void)seekToBeginning:(id)arg1;
@property(readonly) _Bool canSeekToBeginning;
- (void)endScanningBackward:(id)arg1;
- (void)beginScanningBackward:(id)arg1;
@property(readonly) _Bool canScanBackward;
- (void)endScanningForward:(id)arg1;
- (void)beginScanningForward:(id)arg1;
@property(readonly) _Bool canScanForward;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (_Bool)hasLiveStreamingContent;
- (void)seekToTime:(double)arg1;
- (void)endScrubbing:(id)arg1;
- (void)beginScrubbing:(id)arg1;
@property(getter=isPlaying) _Bool playing;
- (void)togglePlayback:(id)arg1;
- (void)pause:(id)arg1;
- (void)play:(id)arg1;
- (_Bool)playerViewController:(id)arg1 shouldExitFullScreenWithReason:(long long)arg2;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)dealloc;
- (id)init;

@end
