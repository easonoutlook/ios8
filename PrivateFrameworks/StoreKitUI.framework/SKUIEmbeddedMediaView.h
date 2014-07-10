/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

@class MPMoviePlayerController, NSString, UIImage, UIImageView;

@interface SKUIEmbeddedMediaView : UIControl
{
    id <SKUIEmbeddedMediaViewDelegate> _delegate;
    long long _mediaType;
    NSString *_mediaURLString;
    MPMoviePlayerController *_moviePlayer;
    UIImageView *_playerDecorationView;
    UIImageView *_thumbnailReflectionView;
    UIImageView *_thumbnailView;
    _Bool _usingInlinePlayback;
}

@property(copy, nonatomic) NSString *mediaURLString; // @synthesize mediaURLString=_mediaURLString;
@property(nonatomic) long long mediaType; // @synthesize mediaType=_mediaType;
@property(nonatomic) __weak id <SKUIEmbeddedMediaViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_thumbnailView;
- (void)_tearDownMoviePlayer;
- (struct CGSize)_sizeToFitImageSize:(struct CGSize)arg1 bounds:(struct CGRect)arg2;
- (void)_sendPlaybackStateChanged;
- (id)_newMoviePlayerControllerWithURL:(id)arg1;
- (void)_playbackStateChanged:(id)arg1;
- (void)_didFinishPlayback:(id)arg1;
- (void)_didExitFullscreen:(id)arg1;
- (void)didMoveToWindow;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIImage *thumbnailImage;
@property(nonatomic) long long thumbnailContentMode;
@property(nonatomic) _Bool showsThumbnailReflection;
@property(readonly, nonatomic) long long playbackState;
- (void)endPlaybackAnimated:(_Bool)arg1;
- (void)beginPlaybackAnimated:(_Bool)arg1;
- (void)beginInlinePlaybackWithURL:(id)arg1;
- (void)dealloc;

@end

