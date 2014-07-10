/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class UIColor, UIImage, UIImageView;

// Not exported
@interface _UISiriTrackingItem : NSObject
{
    _Bool _deleted;
    _Bool _isAReplacement;
    _Bool _isAnIntroduction;
    UIImageView *_animatedView;
    UIColor *_textColor;
    double _offscreenXLocation;
    id _animationCompletionHandler;
    UIImage *_capturedGlyphImage;
    struct _NSRange _textRange;
    struct _NSRange _glyphRange;
    struct CGRect _targetFrame;
}

@property(retain, nonatomic) UIImage *capturedGlyphImage; // @synthesize capturedGlyphImage=_capturedGlyphImage;
@property(nonatomic) _Bool isAnIntroduction; // @synthesize isAnIntroduction=_isAnIntroduction;
@property(nonatomic) _Bool isAReplacement; // @synthesize isAReplacement=_isAReplacement;
@property(copy, nonatomic) id animationCompletionHandler; // @synthesize animationCompletionHandler=_animationCompletionHandler;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
@property(nonatomic) double offscreenXLocation; // @synthesize offscreenXLocation=_offscreenXLocation;
@property(nonatomic) struct _NSRange glyphRange; // @synthesize glyphRange=_glyphRange;
@property(nonatomic) struct _NSRange textRange; // @synthesize textRange=_textRange;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIImageView *animatedView; // @synthesize animatedView=_animatedView;
- (id)description;
- (void)captureGlyphsInRect:(struct CGRect)arg1 containerOrigin:(struct CGPoint)arg2 fromLayoutManager:(id)arg3;
- (void)animateOut;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

