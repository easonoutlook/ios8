/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreImage/CIFilter.h>

#import "_CIFilterProperties-Protocol.h"

@class CIImage, NSNumber;

// Not exported
@interface CIVibrance : CIFilter <_CIFilterProperties>
{
    CIImage *inputImage;
    NSNumber *inputAmount;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;
- (id)_outputProperties;
- (id)outputImage;
- (id)_kernelPos;
- (id)_kernelNeg;
- (_Bool)_isIdentity;
- (void)setDefaults;

@end

