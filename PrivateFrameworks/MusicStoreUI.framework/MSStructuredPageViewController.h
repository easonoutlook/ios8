/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SUStructuredPageGroupedViewController.h"

@class NSIndexPath, SUAudioPlayer, SUPlayerStatus, SUSegmentedControl;

@interface MSStructuredPageViewController : SUStructuredPageGroupedViewController
{
    SUSegmentedControl *_inlineSegmentedControl;
    NSIndexPath *_previewIndexPath;
    SUAudioPlayer *_previewPlayer;
    SUPlayerStatus *_previewStatus;
}

- (void)_stopPreviewPlayback;
- (void)_setPreviewStatus:(id)arg1 forIndexPath:(id)arg2 animated:(_Bool)arg3;
- (_Bool)_handlePreviewForIndexPath:(id)arg1;
- (_Bool)_handleMediaPreviewForIndexPath:(id)arg1;
- (_Bool)_handleInlinePreviewForIndexPath:(id)arg1;
- (void)_playerStatusChangeNotification:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)setLoading:(_Bool)arg1;
- (id)setDisplayedSectionGroup:(id)arg1;
- (void)reloadWithStorePage:(id)arg1 forURL:(id)arg2;
- (_Bool)purchaseItemAtIndexPath:(id)arg1;
- (_Bool)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2;
- (_Bool)canSelectRowAtIndexPath:(id)arg1;
- (_Bool)canDisplaySectionGroup:(id)arg1;
- (void)applicationDidEnterBackground;
- (void)dealloc;
- (id)init;

@end

