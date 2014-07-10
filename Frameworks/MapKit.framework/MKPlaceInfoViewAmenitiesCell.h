/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ABContactCell.h"

@class NSArray, NSMutableArray;

// Not exported
@interface MKPlaceInfoViewAmenitiesCell : ABContactCell
{
    NSMutableArray *_labels;
    NSMutableArray *_values;
    double _totalLabelWidth;
    double _totalValueWidth;
    double _height;
    NSArray *_keyValues;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) NSArray *keyValues; // @synthesize keyValues=_keyValues;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)refreshContent;
- (void)tintColorDidChange;
- (id)attributeValueWithString:(id)arg1;
- (id)attributeLabelWithString:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

