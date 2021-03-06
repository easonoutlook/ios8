/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPUMiniPlayerTransportControls.h"

@class MPImageCacheRequest, UIImageView;

@interface MusicMiniPlayerTransportControls : MPUMiniPlayerTransportControls
{
    UIImageView *_artworkImageView;
    MPImageCacheRequest *_currentImageCacheRequest;
}

+ (unsigned long long)defaultVisibleParts;
- (void).cxx_destruct;
- (void)_updateItemArtwork;
- (void)_updateForItemChangeWithPreviousItem:(id)arg1 animated:(_Bool)arg2;
- (void)_avItemArtworkDidChangeNotification:(id)arg1;
- (void)_prospectivePlaybackInformationDidChangeAnimated:(_Bool)arg1;
- (void)setItem:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

