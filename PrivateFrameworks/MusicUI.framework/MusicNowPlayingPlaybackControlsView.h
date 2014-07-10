/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "RUNowPlayingPlaybackControlsView.h"

@class UIView;

@interface MusicNowPlayingPlaybackControlsView : RUNowPlayingPlaybackControlsView
{
}

+ (unsigned long long)defaultVisibleParts;
- (void)_shuffleTypeChangedNotification:(id)arg1;
- (void)_repeatTypeChangedNotification:(id)arg1;
- (void)_cloudControllerIsJaliscoGeniusEnabledDidChangeNotification:(id)arg1;
- (void)_applyShuffleSettingsToButton:(id)arg1;
- (void)_applyRepeatSettingsToButton:(id)arg1;
@property(readonly, nonatomic) UIView *viewForPresentingRepeat;
- (void)_updateForItemDidChangeAnimated:(_Bool)arg1;
- (Class)_transportControlsClass;
- (id)_titleForCreateAction:(long long)arg1;
- (id)_availableCreateActionsForItem:(id)arg1;
- (void)unregisterForPlayerNotifications;
- (void)reloadView;
- (void)registerForPlayerNotifications;
- (id)playbackSpeedTitleForPlaybackSpeed:(unsigned long long)arg1;
- (id)playbackSpeedButtonImageForPlaybackSpeed:(unsigned long long)arg1;
- (id)newButtonForPart:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

