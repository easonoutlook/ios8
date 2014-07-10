/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCaptureDeviceFormatInternal, NSArray, NSString;

@interface AVCaptureDeviceFormat : NSObject
{
    AVCaptureDeviceFormatInternal *_internal;
}

+ (void)initialize;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxExposureDuration;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minExposureDuration;
@property(readonly, nonatomic) float maxISO;
@property(readonly, nonatomic) float minISO;
- (id)figCaptureSourceFormat;
- (id)AVCaptureSessionPresets;
- (CDStruct_79c71658)previewDimensions;
- (CDStruct_79c71658)sensorDimensions;
- (id)vtScalingMode;
- (_Bool)isDefaultActiveFormat;
- (CDStruct_1b6d18a9)defaultActiveMaxFrameDuration;
- (CDStruct_1b6d18a9)defaultActiveMinFrameDuration;
- (int)visCompanionSupportedFormatsArrayIndex;
- (int)supportedFormatsArrayIndex;
- (_Bool)usesPreviewSizedThumbnail;
- (_Bool)needsPhotoPreviewDPCC;
- (_Bool)supportsHighProfileH264;
- (_Bool)isHighResPhotoFormat;
- (_Bool)isPhotoFormat;
- (id)videoZoomSupportedUpscaleStages;
- (id)videoZoomSupportedDownscaleStages;
- (_Bool)isExperimental;
- (int)rawBitDepth;
- (_Bool)isSISSupported;
- (_Bool)supportsDynamicCrop;
- (_Bool)supportsLowLightBoost;
- (int)supportedStabilizationMethod;
@property(readonly, nonatomic, getter=isVideoStabilizationSupported) _Bool videoStabilizationSupported;
@property(readonly, nonatomic) double videoZoomFactorUpscaleThreshold;
@property(readonly, nonatomic) double videoMaxZoomFactor;
@property(readonly, nonatomic) float videoFieldOfView;
@property(readonly, nonatomic, getter=isVideoBinned) _Bool videoBinned;
- (CDStruct_1b6d18a9)highestSupportedVideoFrameDuration;
- (CDStruct_1b6d18a9)lowestSupportedVideoFrameDuration;
@property(readonly, nonatomic) NSArray *videoSupportedFrameRateRanges;
@property(readonly, nonatomic) struct opaqueCMFormatDescription *formatDescription;
@property(readonly, nonatomic) NSString *mediaType;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (id)initWithFigCaptureSourceFormat:(id)arg1;
- (id)description;
- (id)_stringForFormatDescription:(struct opaqueCMFormatDescription *)arg1 frameRateRanges:(id)arg2;

@end

