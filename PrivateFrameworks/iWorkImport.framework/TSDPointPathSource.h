/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDPathSource.h>

#import "TSDMixing-Protocol.h"
#import "TSDSmartPathSource-Protocol.h"

// Not exported
@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>
{
    int mType;
    struct CGPoint mPoint;
    struct CGSize mNaturalSize;
}

+ (id)pathSourceWithType:(int)arg1 point:(struct CGPoint)arg2 naturalSize:(struct CGSize)arg3;
+ (id)plusWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)starWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)doubleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)leftSingleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
+ (id)rightSingleArrowWithPoint:(struct CGPoint)arg1 naturalSize:(struct CGSize)arg2;
@property struct CGSize naturalSize; // @synthesize naturalSize=mNaturalSize;
@property struct CGPoint point; // @synthesize point=mPoint;
@property int type; // @synthesize type=mType;
- (_Bool)p_isFlippedDoubleArrow;
- (_Bool)p_isRightFacingArrow;
- (struct CGPoint)p_getControlKnobPointForPlus;
- (void)p_setControlKnobPointForPlus:(struct CGPoint)arg1;
- (struct CGPoint)p_getControlKnobPointForStarInnerRadius;
- (void)p_setControlKnobPointForStarInnerRadius:(struct CGPoint)arg1;
- (struct CGPoint)p_getControlKnobPointForStarPoints;
- (void)p_setControlKnobPointForStarPoints:(struct CGPoint)arg1;
- (struct CGPoint)p_getControlKnobPointForArrow;
- (void)p_setControlKnobPointForArrow:(struct CGPoint)arg1;
- (struct CGPath *)p_newPlusPath;
- (struct CGPath *)p_newStarPath;
- (struct CGPath *)p_newArrowPath;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (struct CGSize)scaleFactorForInscribedRectangle;
- (_Bool)isCircular;
- (_Bool)isRectangular;
- (id)bezierPathWithoutFlips;
- (id)valueForSetSelector:(SEL)arg1;
- (struct CGPath *)newFeedbackPathForKnob:(unsigned long long)arg1;
- (id)getFeedbackStringForKnob:(unsigned long long)arg1;
- (void)setControlKnobPosition:(unsigned long long)arg1 toPoint:(struct CGPoint)arg2;
- (struct CGPoint)getControlKnobPosition:(unsigned long long)arg1;
@property(readonly) unsigned long long numberOfControlKnobs;
- (void)setPointValue:(id)arg1;
- (void)scaleToNaturalSize:(struct CGSize)arg1;
- (struct CGPoint)maxPointValue;
- (struct CGPoint)minPointValue;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithType:(int)arg1 point:(struct CGPoint)arg2 naturalSize:(struct CGSize)arg3;
- (void)saveToArchive:(struct PathSourceArchive *)arg1;
- (id)initWithArchive:(const struct PathSourceArchive *)arg1;

@end

