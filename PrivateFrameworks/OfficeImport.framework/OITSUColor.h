/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

// Not exported
@interface OITSUColor : NSObject <NSCopying>
{
    struct CGColor *mCGColor;
}

+ (id)brownColor;
+ (id)purpleColor;
+ (id)orangeColor;
+ (id)magentaColor;
+ (id)yellowColor;
+ (id)cyanColor;
+ (id)blueColor;
+ (id)greenColor;
+ (id)redColor;
+ (id)lightGrayColor;
+ (id)grayColor;
+ (id)whiteColor;
+ (id)blackColor;
+ (id)clearColor;
+ (id)randomColor;
+ (id)colorWithUIColor:(id)arg1;
+ (id)colorWithPatternImage:(id)arg1;
+ (id)colorWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithWhite:(double)arg1 alpha:(double)arg2;
+ (id)colorWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCGColor:(struct CGColor *)arg1;
+ (id)stringForColor:(id)arg1;
+ (id)stringForSystemColorID:(int)arg1;
+ (id)colorWithSystemColorID:(int)arg1;
+ (id)colorWithBGR:(unsigned int)arg1;
+ (id)colorWithCalibratedHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
+ (id)colorWithCalibratedRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3 alpha:(int)arg4;
+ (id)colorWithBinaryRed:(int)arg1 green:(int)arg2 blue:(int)arg3;
+ (id)colorWithEshColor:(const struct EshColor *)arg1;
+ (id)colorWithCsColour:(const struct CsColour *)arg1;
+ (id)colorWithRGBBytes:(unsigned char)arg1:(unsigned char)arg2:(unsigned char)arg3;
+ (id)colorWithRGBValue:(long long)arg1;
+ (id)colorWithBGRValue:(long long)arg1;
@property(readonly) struct CGColor *CGColor; // @synthesize CGColor=mCGColor;
- (void)paintPath:(struct CGPath *)arg1 inContext:(struct CGContext *)arg2;
- (void)paintRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)newBlendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (id)blendedColorWithFraction:(double)arg1 ofColor:(id)arg2;
- (_Bool)isNearlyWhite;
- (_Bool)isOpaque;
- (double)luminance;
- (id)colorWithAlphaComponent:(double)arg1;
- (id)invertedColor;
- (id)grayscaleColor;
- (id)UIColor;
- (void)getRGBAComponents:(double *)arg1;
- (double)alphaComponent;
- (double)blueComponent;
- (double)greenComponent;
- (double)redComponent;
- (double)p_rgbComponentWithIndex:(unsigned char)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isAlmostEqualToColor:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initWithUIColor:(id)arg1;
- (id)initWithPatternImage:(id)arg1;
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;
- (id)initWithWhite:(double)arg1 alpha:(double)arg2;
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
- (id)initWithCGColor:(struct CGColor *)arg1;
- (_Bool)isBlack;
- (void)set;
- (id)colorWithShadeValue:(double)arg1;
- (id)colorWithTintValue:(double)arg1;
- (unsigned int)toBGR;
- (id)copy;
- (id)solidColoredPngImage;
- (id)newSolidColoredBitmap:(struct CGSize)arg1;
- (CDStruct_a06f635e)ttColor;
- (struct EshColor)eshColor;
- (struct CsColour)csColour;
- (void)getRGBBytes:(char *)arg1:(char *)arg2:(char *)arg3;

@end

