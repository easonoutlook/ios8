/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionViewLayout.h"

@class CADisplayLink, NSArray;

@interface CKTranscriptCollectionViewLayout : UICollectionViewLayout
{
    _Bool _holdingBoundsInvalidation;
    _Bool _useInitialLayoutAttributesForRotation;
    _Bool _isResting;
    _Bool _easingUp;
    _Bool _shouldDisplayLinkInvalidateLayout;
    double _anchorYPosition;
    NSArray *_layoutAttributes;
    CADisplayLink *_displayLink;
    double _prevTimestamp;
    struct CGPoint _targetContentOffset;
    struct CGSize _contentSize;
    struct CGRect _visibleBounds;
}

+ (Class)layoutAttributesClass;
@property(nonatomic) _Bool shouldDisplayLinkInvalidateLayout; // @synthesize shouldDisplayLinkInvalidateLayout=_shouldDisplayLinkInvalidateLayout;
@property(nonatomic) _Bool easingUp; // @synthesize easingUp=_easingUp;
@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) double prevTimestamp; // @synthesize prevTimestamp=_prevTimestamp;
@property(nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
@property(retain, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property(copy, nonatomic) NSArray *layoutAttributes; // @synthesize layoutAttributes=_layoutAttributes;
@property(nonatomic) _Bool isResting; // @synthesize isResting=_isResting;
@property(nonatomic, getter=isUsingInitialLayoutAttributesForRotation) _Bool useInitialLayoutAttributesForRotation; // @synthesize useInitialLayoutAttributesForRotation=_useInitialLayoutAttributesForRotation;
@property(nonatomic, getter=isHoldingBoundsInvalidation) _Bool holdingBoundsInvalidation; // @synthesize holdingBoundsInvalidation=_holdingBoundsInvalidation;
@property(nonatomic) struct CGPoint targetContentOffset; // @synthesize targetContentOffset=_targetContentOffset;
@property(nonatomic) double anchorYPosition; // @synthesize anchorYPosition=_anchorYPosition;
- (void)updateFrames;
- (void)displayLinkFired:(id)arg1;
- (double)bezierPointForPercentage:(double)arg1 anchor1:(double)arg2 anchor2:(double)arg3 control1:(double)arg4 control2:(double)arg5;
- (void)updateContentSize;
- (void)invalidateDisplayLink;
- (void)reloadData;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (id)layoutAttributesForDecorationViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (void)prepareLayout;
- (void)dealloc;
- (id)init;

@end

