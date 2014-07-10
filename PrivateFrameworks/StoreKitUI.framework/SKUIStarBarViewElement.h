/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIViewElement.h>

@interface SKUIStarBarViewElement : SKUIViewElement
{
    long long _numberOfRatings;
    long long _numberOfStars;
    float _value;
}

@property(readonly, nonatomic) float value; // @synthesize value=_value;
@property(readonly, nonatomic) long long numberOfStars; // @synthesize numberOfStars=_numberOfStars;
@property(readonly, nonatomic) long long numberOfRatings; // @synthesize numberOfRatings=_numberOfRatings;
- (id)applyUpdatesWithElement:(id)arg1;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;

@end

