/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionViewLayoutAttributes.h"

@class CKChatItem;

@interface CKTranscriptCollectionViewLayoutAttributes : UICollectionViewLayoutAttributes
{
    struct CGRect _targetFrame;
    struct CGRect _currentFrame;
    double _easing;
    double _targetEasing;
    BOOL _orientation;
    CKChatItem *_chatItem;
}

@property(retain, nonatomic) CKChatItem *chatItem; // @synthesize chatItem=_chatItem;
@property(nonatomic) double targetEasing; // @synthesize targetEasing=_targetEasing;
@property(nonatomic) double easing; // @synthesize easing=_easing;
@property(nonatomic) struct CGRect currentFrame; // @synthesize currentFrame=_currentFrame;
@property(nonatomic) struct CGRect targetFrame; // @synthesize targetFrame=_targetFrame;
- (void)dealloc;

@end

