/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIControl.h"

#import "NSCopying-Protocol.h"

@class GKBubbleView;

@interface GKBubbleControl : UIControl <NSCopying>
{
    _Bool _animatingIn;
    _Bool _animateOnTouch;
    GKBubbleView *_bubbleView;
}

@property(nonatomic) _Bool animateOnTouch; // @synthesize animateOnTouch=_animateOnTouch;
@property(retain, nonatomic) GKBubbleView *bubbleView; // @synthesize bubbleView=_bubbleView;
- (void)didTouchUp;
- (void)didTouchDown;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)pathForHitTesting;
- (id)description;
- (void)setHidden:(_Bool)arg1;
@property(nonatomic) long long bubbleType;
- (id)contentsWrapperView;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (union _GLKVector3)worldPositionForScreenPosition:(struct CGPoint)arg1 andScreenSize:(struct CGSize)arg2;
- (union _GLKVector3)worldPositionForScreenFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) union _GLKVector3 worldSize;
@property(nonatomic) union _GLKVector3 worldPosition;
@property(nonatomic) struct CGRect screenFrame;
- (void)setScreenPosition:(struct CGPoint)arg1 andScreenSize:(struct CGSize)arg2;
@property(readonly, nonatomic) struct CGSize screenSize;
@property(readonly, nonatomic) struct CGPoint screenPosition;
@property(readonly, nonatomic, getter=isSharedBubble) _Bool sharedBubble;
- (void)bounceAfterDelay:(double)arg1 fromZ:(double)arg2 toZ:(double)arg3;
- (_Bool)bouncing;

@end
