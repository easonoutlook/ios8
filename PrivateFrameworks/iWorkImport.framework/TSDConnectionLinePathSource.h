/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDBezierPathSource.h>

#import "TSDSmartPathSource-Protocol.h"

// Not exported
@interface TSDConnectionLinePathSource : TSDBezierPathSource <TSDSmartPathSource>
{
    int mType;
    double mOutsetFrom;
    double mOutsetTo;
}

+ (id)pathSourceAtAngleOfSize:(struct CGSize)arg1 forType:(int)arg2;
+ (id)pathSourceOfLength:(double)arg1;
@property(nonatomic) double outsetTo; // @synthesize outsetTo=mOutsetTo;
@property(nonatomic) double outsetFrom; // @synthesize outsetFrom=mOutsetFrom;
@property(nonatomic) int type; // @synthesize type=mType;
- (id)description;
- (void)p_setBezierPath:(id)arg1;
- (_Bool)isLineSegment;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;
- (struct CGPoint)fixedPointForControlKnobChange;
- (id)bezierPath;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
- (long long)pathElementIndexForKnobTag:(unsigned long long)arg1;
@property(readonly) unsigned long long numberOfControlKnobs;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)bend;
- (id)initWithBezierPath:(id)arg1;
- (void)saveToArchive:(struct PathSourceArchive *)arg1;
- (id)initWithArchive:(const struct PathSourceArchive *)arg1;

@end

