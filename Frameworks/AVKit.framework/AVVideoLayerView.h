/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class AVPlayerController, CALayer<AVVideoLayer>;

@interface AVVideoLayerView : UIView
{
    CALayer<AVVideoLayer> *_videoLayer;
    AVPlayerController *_playerController;
}

+ (id)keyPathsForValuesAffectingVideoScaled;
+ (id)keyPathsForValuesAffectingVideoRect;
+ (id)keyPathsForValuesAffectingReadyForDisplay;
+ (id)keyPathsForValuesAffectingVideoGravity;
- (void).cxx_destruct;
- (_Bool)_isPlayingOnSecondScreen;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)didMoveToWindow;
@property(nonatomic, getter=isVideoScaled) _Bool videoScaled;
@property(readonly, nonatomic) struct CGRect videoRect;
@property(readonly, nonatomic, getter=isReadyForDisplay) _Bool readyForDisplay;
@property(nonatomic) long long videoLayerGravity;
@property(retain, nonatomic) AVPlayerController *playerController;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 videoLayer:(id)arg2;

@end

