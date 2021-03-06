/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CIFilter.h"

@class BLPixelImageBuffer, CIImage, CIVector, NSData, NSNumber;

@interface BLBlackAndWhiteFilter : CIFilter
{
    _Bool _needsReprocess;
    float _lastAmount;
    _Bool _lastAppySepia;
    _Bool _lastApplyGrain;
    struct CGRect _lastDestinationRect;
    long long _lastVersion;
    float _lastPhototone;
    float _lastNeutralGamma;
    int _lastPreset;
    CIImage *_inputImage;
    NSNumber *_inputAmount;
    NSNumber *_inputApplySepia;
    NSNumber *_inputApplyGrain;
    CIVector *_inputDestinationRect;
    CIVector *_inputHueStrengthArray;
    NSNumber *_inputVersion;
    NSNumber *_inputPhototone;
    NSNumber *_inputNeutralGamma;
    NSNumber *_inputPreset;
    NSNumber *_inputPadding;
    CIFilter *_colorCubeFilterBW;
    CIFilter *_colorCubeFilterGrain;
    BLPixelImageBuffer *_grainImage;
    NSData *_precomputedCube;
    CIVector *_lastHueStrengthArray;
}

@property(retain, nonatomic) CIVector *lastHueStrengthArray; // @synthesize lastHueStrengthArray=_lastHueStrengthArray;
@property(retain, nonatomic) NSData *precomputedCube; // @synthesize precomputedCube=_precomputedCube;
@property(retain, nonatomic) BLPixelImageBuffer *grainImage; // @synthesize grainImage=_grainImage;
@property(retain, nonatomic) CIFilter *colorCubeFilterGrain; // @synthesize colorCubeFilterGrain=_colorCubeFilterGrain;
@property(retain, nonatomic) CIFilter *colorCubeFilterBW; // @synthesize colorCubeFilterBW=_colorCubeFilterBW;
@property(copy, nonatomic) NSNumber *inputPadding; // @synthesize inputPadding=_inputPadding;
@property(copy, nonatomic) NSNumber *inputPreset; // @synthesize inputPreset=_inputPreset;
@property(copy, nonatomic) NSNumber *inputNeutralGamma; // @synthesize inputNeutralGamma=_inputNeutralGamma;
@property(copy, nonatomic) NSNumber *inputPhototone; // @synthesize inputPhototone=_inputPhototone;
@property(copy, nonatomic) NSNumber *inputVersion; // @synthesize inputVersion=_inputVersion;
@property(copy, nonatomic) CIVector *inputHueStrengthArray; // @synthesize inputHueStrengthArray=_inputHueStrengthArray;
@property(copy, nonatomic) CIVector *inputDestinationRect; // @synthesize inputDestinationRect=_inputDestinationRect;
@property(copy, nonatomic) NSNumber *inputApplyGrain; // @synthesize inputApplyGrain=_inputApplyGrain;
@property(copy, nonatomic) NSNumber *inputApplySepia; // @synthesize inputApplySepia=_inputApplySepia;
@property(copy, nonatomic) NSNumber *inputAmount; // @synthesize inputAmount=_inputAmount;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage=_inputImage;
- (void).cxx_destruct;
- (id)outputImage;
- (id)applyGrain:(id)arg1 cube:(id)arg2 destRect:(struct CGRect)arg3 padding:(float)arg4;
- (id)loadGrain:(id)arg1 destRect:(struct CGRect)arg2 padding:(float)arg3;
- (id)generateGrain:(id)arg1 destRect:(struct CGRect)arg2;
- (void)setDefaults;
- (id)init;

@end

