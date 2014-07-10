/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MPChangePlaybackRateCommand, MPChangeRepeatModeCommand, MPChangeShuffleModeCommand, MPFeedbackCommand, MPPurchaseCommand, MPRatingCommand, MPRemoteCommand, MPSkipIntervalCommand, NSArray;

@interface MPRemoteCommandCenter : NSObject
{
    NSArray *_commandsArray;
    void *_mediaRemoteCommandHandler;
    _Bool _scheduledSupportedCommandsChangedNotification;
    _Bool _canBeNowPlayingApplication;
    MPRemoteCommand *_changePlaybackPositionCommand;
    MPChangeRepeatModeCommand *_changeRepeatModeCommand;
    MPChangeShuffleModeCommand *_changeShuffleModeCommand;
    MPRemoteCommand *_specialSeekForwardCommand;
    MPRemoteCommand *_specialSeekBackwardCommand;
    MPPurchaseCommand *_buyTrackCommand;
    MPPurchaseCommand *_buyAlbumCommand;
    MPPurchaseCommand *_preOrderAlbumCommand;
    MPRemoteCommand *_advanceShuffleModeCommand;
    MPRemoteCommand *_advanceRepeatModeCommand;
    MPRemoteCommand *_createRadioStationCommand;
    MPRemoteCommand *_setPlaybackQueueCommand;
    MPRemoteCommand *_pauseCommand;
    MPRemoteCommand *_playCommand;
    MPRemoteCommand *_stopCommand;
    MPRemoteCommand *_togglePlayPauseCommand;
    MPRemoteCommand *_nextTrackCommand;
    MPRemoteCommand *_previousTrackCommand;
    MPSkipIntervalCommand *_skipForwardCommand;
    MPSkipIntervalCommand *_skipBackwardCommand;
    MPRemoteCommand *_seekForwardCommand;
    MPRemoteCommand *_seekBackwardCommand;
    MPRatingCommand *_ratingCommand;
    MPChangePlaybackRateCommand *_changePlaybackRateCommand;
    MPFeedbackCommand *_likeCommand;
    MPFeedbackCommand *_dislikeCommand;
    MPFeedbackCommand *_bookmarkCommand;
}

+ (id)sharedCommandCenter;
@property(readonly, nonatomic) MPFeedbackCommand *bookmarkCommand; // @synthesize bookmarkCommand=_bookmarkCommand;
@property(readonly, nonatomic) MPFeedbackCommand *dislikeCommand; // @synthesize dislikeCommand=_dislikeCommand;
@property(readonly, nonatomic) MPFeedbackCommand *likeCommand; // @synthesize likeCommand=_likeCommand;
@property(readonly, nonatomic) MPChangePlaybackRateCommand *changePlaybackRateCommand; // @synthesize changePlaybackRateCommand=_changePlaybackRateCommand;
@property(readonly, nonatomic) MPRatingCommand *ratingCommand; // @synthesize ratingCommand=_ratingCommand;
@property(readonly, nonatomic) MPRemoteCommand *seekBackwardCommand; // @synthesize seekBackwardCommand=_seekBackwardCommand;
@property(readonly, nonatomic) MPRemoteCommand *seekForwardCommand; // @synthesize seekForwardCommand=_seekForwardCommand;
@property(readonly, nonatomic) MPSkipIntervalCommand *skipBackwardCommand; // @synthesize skipBackwardCommand=_skipBackwardCommand;
@property(readonly, nonatomic) MPSkipIntervalCommand *skipForwardCommand; // @synthesize skipForwardCommand=_skipForwardCommand;
@property(readonly, nonatomic) MPRemoteCommand *previousTrackCommand; // @synthesize previousTrackCommand=_previousTrackCommand;
@property(readonly, nonatomic) MPRemoteCommand *nextTrackCommand; // @synthesize nextTrackCommand=_nextTrackCommand;
@property(readonly, nonatomic) MPRemoteCommand *togglePlayPauseCommand; // @synthesize togglePlayPauseCommand=_togglePlayPauseCommand;
@property(readonly, nonatomic) MPRemoteCommand *stopCommand; // @synthesize stopCommand=_stopCommand;
@property(readonly, nonatomic) MPRemoteCommand *playCommand; // @synthesize playCommand=_playCommand;
@property(readonly, nonatomic) MPRemoteCommand *pauseCommand; // @synthesize pauseCommand=_pauseCommand;
- (void).cxx_destruct;
- (void)_commandTargetsDidChangeNotification:(id)arg1;
- (void)_scheduleSupportedCommandsChangedNotify;
- (void)_teardownNotifications;
- (void)_setupNotifications;
- (void)_teardownMediaRemoteControlClient;
- (void)_setupMediaRemoteControlClient;
- (void)_teardownCommandConfigurationObservers;
- (void)_setupCommandConfigurationObservers;
- (void)_teardownMediaRemoteCommandHandler;
- (void)_setupMediaRemoteCommandHandler;
- (id)setPlaybackQueueCommand;
- (id)createRadioStationCommand;
- (id)advanceRepeatModeCommand;
- (id)advanceShuffleModeCommand;
- (id)preOrderAlbumCommand;
- (id)buyAlbumCommand;
- (id)buyTrackCommand;
- (id)specialSeekBackwardCommand;
- (id)specialSeekForwardCommand;
- (id)changeShuffleModeCommand;
- (id)changeRepeatModeCommand;
- (id)changePlaybackPositionCommand;
- (id)_pushMediaRemoteCommand:(unsigned int)arg1 withOptions:(struct __CFDictionary *)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)init;

@end

