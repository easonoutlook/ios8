/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"
#import "TSDMixing-Protocol.h"
#import "TSDPathPainter-Protocol.h"
#import "TSSThemeAsset-Protocol.h"

@class TSDStrokePattern, TSUColor;

// Not exported
@interface TSDStroke : NSObject <TSSThemeAsset, TSDPathPainter, TSDMixing, NSCopying, NSMutableCopying>
{
    TSUColor *mColor;
    double mWidth;
    double mActualWidth;
    int mCap;
    int mJoin;
    TSDStrokePattern *mPattern;
    double mMiterLimit;
}

+ (_Bool)canMixWithNilObjects;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
+ (id)strokeWithColor:(id)arg1 width:(double)arg2;
+ (id)emptyStroke;
+ (id)stroke;
+ (id)p_newEmptyStroke;
+ (id)p_newStroke;
+ (Class)mutableClass;
+ (id)instanceWithArchive:(const struct StrokeArchive *)arg1 unarchiver:(id)arg2;
@property(nonatomic) double actualWidth; // @synthesize actualWidth=mActualWidth;
@property(retain, nonatomic) TSDStrokePattern *pattern; // @synthesize pattern=mPattern;
@property(nonatomic) double miterLimit; // @synthesize miterLimit=mMiterLimit;
@property(nonatomic) int join; // @synthesize join=mJoin;
@property(nonatomic) int cap; // @synthesize cap=mCap;
@property(nonatomic) double width; // @synthesize width=mWidth;
@property(retain, nonatomic) TSUColor *color; // @synthesize color=mColor;
- (id)strokeByTransformingByTransform:(struct CGAffineTransform)arg1;
- (SEL)mapThemeAssetSelector;
- (_Bool)isThemeEquivalent:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (_Bool)shouldAntialiasDefeat;
- (_Bool)drawsInOneStep;
- (void)applyToCAShapeLayer:(id)arg1 insideStroke:(_Bool)arg2 withScale:(double)arg3;
- (void)applyToCAShapeLayer:(id)arg1 withScale:(double)arg2;
- (_Bool)prefersToApplyToCAShapeLayerDuringManipulation;
- (_Bool)canApplyToCAShapeLayer;
- (void)applyToRepCALayer:(id)arg1 withScale:(double)arg2;
- (_Bool)canApplyDirectlyToRepCALayer;
@property(readonly, nonatomic) _Bool isNearlyWhite;
@property(readonly, nonatomic) _Bool isFrame;
@property(readonly, nonatomic) double suggestedMinimumLineWidth;
@property(readonly, nonatomic) _Bool supportsLineOptions;
@property(readonly, nonatomic) _Bool supportsColor;
@property(readonly, nonatomic) _Bool supportsWidth;
@property(readonly, nonatomic) _Bool supportsPattern;
- (void)drawSwatchInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)pathForLineEnd:(id)arg1 wrapPath:(_Bool)arg2 atPoint:(struct CGPoint)arg3 atAngle:(double)arg4 withScale:(double)arg5;
- (struct CGRect)boundsForLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 transform:(struct CGAffineTransform)arg5;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5 useFastDrawing:(_Bool)arg6;
- (void)paintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5;
- (void)paintPathWithNormalClip:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3 useFastDrawing:(_Bool)arg4;
- (void)paintPath:(struct CGPath *)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 wantsInteriorStroke:(_Bool)arg2 inContext:(struct CGContext *)arg3;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)colorForCGContext:(struct CGContext *)arg1;
- (id)strokeLineEnd:(id)arg1;
- (double)lineEndInsetAdjustment;
@property(readonly, nonatomic) _Bool shouldRender;
@property(readonly, nonatomic) _Bool isNullStroke;
- (void)applyInteriorWrapPropertiesToContext:(struct CGContext *)arg1 insideStroke:(_Bool)arg2;
- (void)applyToContext:(struct CGContext *)arg1 insideStroke:(_Bool)arg2;
- (void)applyToContext:(struct CGContext *)arg1;
- (void)p_setPatternPropertiesFromStroke:(id)arg1;
- (void)p_setPropertiesFromStroke:(id)arg1;
@property(readonly, nonatomic) struct _TSDStrokeOutsets outsets;
- (struct CGRect)boundsForPath:(id)arg1;
- (_Bool)needsToExtendJoinsForBoundsCalculation;
@property(readonly, nonatomic) _Bool drawsOutsideStrokeBounds;
@property(readonly, nonatomic) _Bool isRoundDash;
@property(readonly, nonatomic) _Bool isDash;
@property(readonly, nonatomic) double dashSpacing;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5;
- (id)init;
- (id)initWithColor:(id)arg1 width:(double)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(double)arg6;
- (void)aaDefeatedPaintLineEnd:(id)arg1 atPoint:(struct CGPoint)arg2 atAngle:(double)arg3 withScale:(double)arg4 inContext:(struct CGContext *)arg5;
- (void)saveToArchive:(struct StrokeArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct StrokeArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) double effectiveWidth;
- (_Bool)isEqualToStroke:(id)arg1;
@property(readonly, nonatomic) _Bool solid;
@property(readonly, nonatomic) _Bool empty;
@property(readonly, nonatomic) _Bool dontClearBackground;

@end

