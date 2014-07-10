/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class NSDictionary, NSString;

@interface FigCaptureStillImageSettings : NSObject <NSCoding>
{
    long long _settingsID;
    int _payloadType;
    unsigned int _outputFormat;
    unsigned int _outputWidth;
    unsigned int _outputHeight;
    _Bool _outputMirroring;
    int _outputOrientation;
    _Bool _thumbnailEnabled;
    unsigned int _thumbnailFormat;
    unsigned int _thumbnailWidth;
    unsigned int _thumbnailHeight;
    _Bool _thumbnailMirroring;
    int _thumbnailOrientation;
    _Bool _noiseReductionEnabled;
    float _scaleFactor;
    unsigned int _shutterSound;
    int _flashMode;
    int _HDRMode;
    _Bool _providesEV0Image;
    int _SISMode;
    NSString *_colorPrimaries;
    NSString *_transferFunction;
    NSString *_yCbCrMatrix;
    NSDictionary *_vtCompressionProperties;
    int _bracketType;
    unsigned int _bracketImageCount;
    CDStruct_1b6d18a9 *_exposureDurations;
    float *_ISOs;
    float *_exposureTargetBiases;
}

@property(readonly, nonatomic) float *exposureTargetBiases; // @synthesize exposureTargetBiases=_exposureTargetBiases;
@property(readonly, nonatomic) float *ISOs; // @synthesize ISOs=_ISOs;
@property(readonly, nonatomic) CDStruct_1b6d18a9 *exposureDurations; // @synthesize exposureDurations=_exposureDurations;
@property(readonly, nonatomic) unsigned int bracketImageCount; // @synthesize bracketImageCount=_bracketImageCount;
@property(readonly, nonatomic) int bracketType; // @synthesize bracketType=_bracketType;
@property(copy, nonatomic) NSDictionary *vtCompressionProperties; // @synthesize vtCompressionProperties=_vtCompressionProperties;
@property(copy, nonatomic) NSString *yCbCrMatrix; // @synthesize yCbCrMatrix=_yCbCrMatrix;
@property(copy, nonatomic) NSString *transferFunction; // @synthesize transferFunction=_transferFunction;
@property(copy, nonatomic) NSString *colorPrimaries; // @synthesize colorPrimaries=_colorPrimaries;
@property(nonatomic) int SISMode; // @synthesize SISMode=_SISMode;
@property(nonatomic) _Bool providesEV0Image; // @synthesize providesEV0Image=_providesEV0Image;
@property(nonatomic) int HDRMode; // @synthesize HDRMode=_HDRMode;
@property(nonatomic) int flashMode; // @synthesize flashMode=_flashMode;
@property(nonatomic) unsigned int shutterSound; // @synthesize shutterSound=_shutterSound;
@property(nonatomic) float scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property(nonatomic) _Bool noiseReductionEnabled; // @synthesize noiseReductionEnabled=_noiseReductionEnabled;
@property(nonatomic) int thumbnailOrientation; // @synthesize thumbnailOrientation=_thumbnailOrientation;
@property(nonatomic) _Bool thumbnailMirroring; // @synthesize thumbnailMirroring=_thumbnailMirroring;
@property(nonatomic) unsigned int thumbnailHeight; // @synthesize thumbnailHeight=_thumbnailHeight;
@property(nonatomic) unsigned int thumbnailWidth; // @synthesize thumbnailWidth=_thumbnailWidth;
@property(nonatomic) unsigned int thumbnailFormat; // @synthesize thumbnailFormat=_thumbnailFormat;
@property(nonatomic) _Bool thumbnailEnabled; // @synthesize thumbnailEnabled=_thumbnailEnabled;
@property(nonatomic) int outputOrientation; // @synthesize outputOrientation=_outputOrientation;
@property(nonatomic) _Bool outputMirroring; // @synthesize outputMirroring=_outputMirroring;
@property(nonatomic) unsigned int outputHeight; // @synthesize outputHeight=_outputHeight;
@property(nonatomic) unsigned int outputWidth; // @synthesize outputWidth=_outputWidth;
@property(nonatomic) unsigned int outputFormat; // @synthesize outputFormat=_outputFormat;
@property(nonatomic) int payloadType; // @synthesize payloadType=_payloadType;
@property(nonatomic) long long settingsID; // @synthesize settingsID=_settingsID;
- (void)_teardownBracketStorage;
- (void)setBracketType:(int)arg1 imageCount:(unsigned int)arg2;
@property(readonly, nonatomic) NSDictionary *thumbnailPixelBufferAttributes;
@property(readonly, nonatomic) NSDictionary *outputPixelBufferAttributes;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

