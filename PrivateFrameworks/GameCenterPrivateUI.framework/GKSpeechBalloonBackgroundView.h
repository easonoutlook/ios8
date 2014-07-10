/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class _GKCustomDrawnSpeechBalloonBackgroundView, _GKImageSpeechBalloonBackgroundView;

@interface GKSpeechBalloonBackgroundView : UIView
{
    unsigned char _drawStyle;
    unsigned char _tipDirection;
    _GKCustomDrawnSpeechBalloonBackgroundView *_customDrawnView;
    _GKImageSpeechBalloonBackgroundView *_strokedImageView;
}

@property(retain, nonatomic) _GKImageSpeechBalloonBackgroundView *strokedImageView; // @synthesize strokedImageView=_strokedImageView;
@property(retain, nonatomic) _GKCustomDrawnSpeechBalloonBackgroundView *customDrawnView; // @synthesize customDrawnView=_customDrawnView;
@property(nonatomic) unsigned char tipDirection; // @synthesize tipDirection=_tipDirection;
@property(nonatomic) unsigned char drawStyle; // @synthesize drawStyle=_drawStyle;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

