/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDTransformGradient.h>

#import "TSDGradientStopContainer-Protocol.h"

@class NSArray, TSUColor;

// Not exported
@interface TSDMutableTransformGradient : TSDTransformGradient <TSDGradientStopContainer>
{
}

- (void)setGradientAngleInDegrees:(double)arg1;
- (void)upgradeIfNecessaryWithBaseNaturalSize:(struct CGSize)arg1;
- (void)setEndPoint:(struct CGPoint)arg1 inShapeWithNaturalSize:(struct CGSize)arg2;
- (void)setStartPoint:(struct CGPoint)arg1 inShapeWithNaturalSize:(struct CGSize)arg2;
@property(retain, nonatomic) TSUColor *lastColor;
@property(retain, nonatomic) TSUColor *firstColor;
- (void)setInflectionOfStopAtIndex:(unsigned long long)arg1 toInflection:(double)arg2;
- (void)setColorOfStopAtIndex:(unsigned long long)arg1 toColor:(id)arg2;
- (void)swapStopAtIndex:(unsigned long long)arg1 withStopAtIndex:(unsigned long long)arg2;
- (void)moveStopAtIndex:(unsigned long long)arg1 toFraction:(double)arg2;
@property(nonatomic) unsigned long long gradientType; // @dynamic gradientType;
- (void)evenlyDistributeStops;
- (void)reverseStopOrder;
- (id)insertStopAtFraction:(double)arg1 withColor:(id)arg2;
- (id)insertStopAtFraction:(double)arg1;
- (id)removeStopAtIndex:(unsigned long long)arg1;
- (void)removeStop:(id)arg1;
- (void)insertGradientStop:(id)arg1;
@property(retain, nonatomic) NSArray *gradientStops; // @dynamic gradientStops;

// Remaining properties
@property(nonatomic) struct CGSize baseNaturalSize; // @dynamic baseNaturalSize;
@property(nonatomic) struct CGPoint endPoint; // @dynamic endPoint;
@property(nonatomic) _Bool isAdvancedGradient; // @dynamic isAdvancedGradient;
@property(nonatomic) double opacity; // @dynamic opacity;
@property(nonatomic) struct CGPoint startPoint; // @dynamic startPoint;

@end

