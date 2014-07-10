/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCaptureConnectionInternal_FigRecorder, AVCaptureOutput_FigRecorder, AVCaptureVideoPreviewLayer_FigRecorder, NSArray;

@interface AVCaptureConnection_FigRecorder : NSObject
{
    AVCaptureConnectionInternal_FigRecorder *_internal;
}

+ (id)connectionWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
+ (id)connectionWithInputPorts:(id)arg1 output:(id)arg2;
+ (void)initialize;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (_Bool)sourcesFromFrontFacingCamera;
- (id)sourceDevice;
- (void)setVideoRetainedBufferCountHint:(int)arg1;
- (int)videoRetainedBufferCountHint;
- (_Bool)isVideoRetainedBufferCountHintSupported;
@property(nonatomic) _Bool enablesVideoStabilizationWhenAvailable;
@property(readonly, nonatomic, getter=isVideoStabilizationEnabled) _Bool videoStabilizationEnabled;
@property(readonly, nonatomic, getter=isVideoStabilizationSupported) _Bool supportsVideoStabilization;
@property(nonatomic) double videoScaleAndCropFactor;
@property(readonly, nonatomic) double videoMaxScaleAndCropFactor;
@property(nonatomic) CDStruct_1b6d18a9 videoMaxFrameDuration;
- (CDStruct_1b6d18a9)_videoMaxFrameDuration;
- (_Bool)isVideoMaxFrameDurationSet;
@property(readonly, nonatomic, getter=isVideoMaxFrameDurationSupported) _Bool supportsVideoMaxFrameDuration;
@property(nonatomic) CDStruct_1b6d18a9 videoMinFrameDuration;
- (void)_setVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)_videoMinFrameDuration;
- (_Bool)isVideoMinFrameDurationSet;
@property(readonly, nonatomic, getter=isVideoMinFrameDurationSupported) _Bool supportsVideoMinFrameDuration;
@property(nonatomic) long long videoOrientation;
@property(readonly, nonatomic, getter=isVideoOrientationSupported) _Bool supportsVideoOrientation;
@property(nonatomic) _Bool automaticallyAdjustsVideoMirroring;
- (void)_setVideoMirrored:(_Bool)arg1;
@property(nonatomic, getter=isVideoMirrored) _Bool videoMirrored;
@property(readonly, nonatomic, getter=isVideoMirroringSupported) _Bool supportsVideoMirroring;
- (void)updateAudioChannelsArray;
- (float)getPeakAudioLevelForChannel:(id)arg1;
- (float)getAvgAudioLevelForChannel:(id)arg1;
@property(readonly, nonatomic) NSArray *audioChannels;
- (id)mediaType;
- (_Bool)isLive;
@property(nonatomic, getter=isEnabled) _Bool enabled;
- (void)setActive:(_Bool)arg1;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) NSArray *inputPorts;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer_FigRecorder *videoPreviewLayer;
@property(readonly, nonatomic) AVCaptureOutput_FigRecorder *output;
- (void)invalidate;
- (id)session;
- (void)inputPortFormatDescriptionChanged:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithInputPort:(id)arg1 videoPreviewLayer:(id)arg2;
- (id)initWithInputPorts:(id)arg1 output:(id)arg2;
- (void)initCommonStorage;
- (_Bool)isKindOfClass:(Class)arg1;

@end

