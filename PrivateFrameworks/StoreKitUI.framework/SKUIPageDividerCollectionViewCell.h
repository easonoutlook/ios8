/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionViewCell.h"

@class UIView;

@interface SKUIPageDividerCollectionViewCell : UICollectionViewCell
{
    UIView *_dividerLine;
    double _leftEdgeInset;
    double _rightEdgeInset;
    long long _verticalAlignment;
}

@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) double rightEdgeInset; // @synthesize rightEdgeInset=_rightEdgeInset;
@property(nonatomic) double leftEdgeInset; // @synthesize leftEdgeInset=_leftEdgeInset;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)applyLayoutAttributes:(id)arg1;
- (void)setColoringWithStyle:(id)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

