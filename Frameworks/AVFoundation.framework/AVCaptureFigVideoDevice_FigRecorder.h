/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVCaptureDevice_FigRecorder.h>

#import "MCProfileConnectionObserver-Protocol.h"

@class AVCaptureDeviceFormat_FigRecorder, AVWeakReference, NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

@interface AVCaptureFigVideoDevice_FigRecorder : AVCaptureDevice_FigRecorder <MCProfileConnectionObserver>
{
    NSDictionary *_deviceProperties;
    NSDictionary *_sensorProperties;
    AVCaptureDeviceFormat_FigRecorder *_activeFormat;
    CDStruct_1b6d18a9 _activeMinFrameDuration;
    _Bool _activeMinFrameDurationSetByClient;
    CDStruct_1b6d18a9 _activeMaxFrameDuration;
    _Bool _activeMaxFrameDurationSetByClient;
    long long _focusMode;
    struct CGPoint _focusPointOfInterest;
    float _focusPosition;
    _Bool _manualFocusSupportEnabled;
    int _focusInFlightCount;
    _Bool _adjustingFocus;
    long long _autoFocusRangeRestriction;
    _Bool _smoothAutoFocusEnabled;
    long long _exposureMode;
    CDStruct_1b6d18a9 _exposureDuration;
    float _exposureGain;
    _Bool _manualExposureSupportEnabled;
    float _autoExposureBias;
    struct CGPoint _exposurePointOfInterest;
    _Bool _adjustingExposure;
    long long _wbMode;
    float _whiteBalanceTemperature;
    _Bool _adjustingWB;
    _Bool _automaticallyAdjustsImageControlMode;
    long long _imageControlMode;
    long long _pendingImageControlMode;
    long long _flashMode;
    _Bool _flashActive;
    _Bool _flashAvailable;
    long long _torchMode;
    _Bool _torchActive;
    float _torchLevel;
    _Bool _torchAvailable;
    NSObject<OS_dispatch_queue> *_torchAppsSerialQueue;
    NSObject<OS_dispatch_source> *_torchAppsKillTimer;
    struct OpaqueCMBaseObject *_recorderForTorchApps;
    _Bool _isConnected;
    _Bool _subjectMonitoringEnabled;
    _Bool _faceDetectionDrivenImageProcessingEnabled;
    struct CGRect _faceRectangle;
    int _faceRectangleAngle;
    _Bool _faceDetectionMetadataEnabled;
    _Bool _automaticallyEnablesLowLightBoostWhenAvailable;
    _Bool _lowLightBoostEnabled;
    _Bool _highDynamicRangeSceneDetectionEnabled;
    _Bool _sceneIsHighDynamicRange;
    float _saturation;
    float _contrast;
    long long _videoZoomDownscaleStageHint;
    long long _videoZoomUpscaleStageHint;
    float _videoZoomFactor;
    float _videoZoomRampTarget;
    int _videoZoomRampCounter;
    float _videoZoomRampAcceleration;
    _Bool _videoZoomDrawOverlay;
    NSArray *_formats;
    struct OpaqueCMClock *_deviceClock;
    AVWeakReference *_weakReference;
}

+ (_Bool)_cameraAccessIsEnabled;
+ (id)_devices;
+ (void)initialize;
- (struct OpaqueCMClock *)deviceClock;
- (void)handleNotification:(id)arg1 payload:(id)arg2;
- (_Bool)doesHandleNotification:(id)arg1;
- (void)setAutomaticallyEnablesLowLightBoostWhenAvailable:(_Bool)arg1;
- (_Bool)automaticallyEnablesLowLightBoostWhenAvailable;
- (void)_setAutomaticallyEnablesLowLightBoostWhenAvailable:(_Bool)arg1;
- (_Bool)isLowLightBoostEnabled;
- (_Bool)isLowLightBoostSupported;
- (_Bool)isSISSupported;
- (_Bool)HDRUsesPreBracketedFrameAsEV0;
- (_Bool)isHDRSupported;
- (void)setVideoZoomUpscaleStageHint:(long long)arg1;
- (long long)videoZoomUpscaleStageHint;
- (void)setVideoZoomDownscaleStageHint:(long long)arg1;
- (long long)videoZoomDownscaleStageHint;
- (void)setVideoZoomDrawOverlay:(_Bool)arg1;
- (_Bool)videoZoomDrawOverlay;
- (void)setVideoZoomRampAcceleration:(float)arg1;
- (float)videoZoomRampAcceleration;
- (void)_restoreColorProperties;
- (void)setContrast:(float)arg1;
- (_Bool)_setContrast:(float)arg1;
- (float)contrast;
- (void)setSaturation:(float)arg1;
- (_Bool)_setSaturation:(float)arg1;
- (float)saturation;
- (id)_numberForRecorderProperty:(struct __CFString *)arg1;
- (_Bool)_setNumber:(id)arg1 forRecorderProperty:(struct __CFString *)arg2;
- (_Bool)_setBoolValue:(_Bool)arg1 forRecorderProperty:(struct __CFString *)arg2;
- (_Bool)_setFloatValue:(float)arg1 forRecorderProperty:(struct __CFString *)arg2;
- (float)_floatValueForRecorderProperty:(struct __CFString *)arg1;
- (_Bool)isMachineReadableCodeDetectionSupported;
- (void)_applyOverridesToCaptureOptions:(id)arg1;
- (void)setHighDynamicRangeSceneDetectionEnabled:(_Bool)arg1;
- (_Bool)_setHighDynamicRangeSceneDetectionEnabled:(_Bool)arg1;
- (void)_setHighDynamicRangeScene:(_Bool)arg1;
- (_Bool)isHighDynamicRangeScene;
- (_Bool)isHighDynamicRangeSceneDetectionEnabled;
- (_Bool)isHighDynamicRangeSceneDetectionSupported;
- (_Bool)_faceDetectionDebugMetadataReportingEnabled;
- (_Bool)isFaceDetectionDebugMetadataReportingEnabled;
- (_Bool)_setFaceDetectionDebugMetadataReportingEnabled:(_Bool)arg1;
- (void)setFaceDetectionDebugMetadataReportingEnabled:(_Bool)arg1;
- (int)faceRectangleAngle;
- (struct CGRect)faceRectangle;
- (_Bool)_faceDetectionDrivenImageProcessingEnabled;
- (void)setFaceDetectionDrivenImageProcessingEnabled:(_Bool)arg1;
- (_Bool)_setFaceDetectionDrivenImageProcessingEnabled:(_Bool)arg1;
- (_Bool)isFaceDetectionDrivenImageProcessingEnabled;
- (_Bool)isFaceDetectionDuringVideoPreviewSupported;
- (_Bool)isFaceDetectionSupported;
- (void)_updateImageControlMode;
- (void)setImageControlMode:(long long)arg1;
- (_Bool)_setImageControlMode:(long long)arg1;
- (long long)imageControlMode;
- (void)setAutomaticallyAdjustsImageControlMode:(_Bool)arg1;
- (_Bool)automaticallyAdjustsImageControlMode;
- (_Bool)isImageControlModeSupported:(long long)arg1;
- (_Bool)_subjectAreaChangeMonitoringEnabled;
- (void)setSubjectAreaChangeMonitoringEnabled:(_Bool)arg1;
- (_Bool)_setSubjectAreaChangeMonitoringEnabled:(_Bool)arg1;
- (_Bool)isSubjectAreaChangeMonitoringEnabled;
- (void)_teardownFigRecorderForTorchApps;
- (struct OpaqueCMBaseObject *)_createFigRecorderForTorchApps;
- (void)_updateFlashAndTorchAvailability;
- (_Bool)setTorchModeOnWithLevel:(float)arg1 error:(id *)arg2;
- (void)setTorchMode:(long long)arg1;
- (long long)torchMode;
- (int)_setTorchMode:(long long)arg1 withLevel:(float)arg2;
- (void)_teardownTorchAppsKillTimer;
- (id)_createTorchAppsKillTimer;
- (long long)_torchMode;
- (_Bool)isTorchAvailable;
- (_Bool)isTorchModeSupported:(long long)arg1;
- (float)torchLevel;
- (void)_setTorchActive:(_Bool)arg1;
- (_Bool)isTorchActive;
- (_Bool)hasTorch;
- (void)setFlashMode:(long long)arg1;
- (_Bool)isFlashAvailable;
- (long long)flashMode;
- (_Bool)_setFlashMode:(long long)arg1;
- (long long)_flashMode;
- (void)_setFlashActive:(_Bool)arg1;
- (_Bool)isFlashModeSupported:(long long)arg1;
- (_Bool)isFlashActive;
- (_Bool)hasFlash;
- (void)setWhiteBalanceTemperature:(float)arg1;
- (_Bool)_setWhiteBalanceTemperature:(float)arg1;
- (float)whiteBalanceTemperature;
- (void)setWhiteBalanceMode:(long long)arg1;
- (long long)whiteBalanceMode;
- (_Bool)_setWhiteBalanceMode:(long long)arg1;
- (long long)_whiteBalanceMode;
- (_Bool)isWhiteBalanceModeSupported:(long long)arg1;
- (void)_setAdjustingWhiteBalance:(_Bool)arg1;
- (_Bool)isAdjustingWhiteBalance;
- (_Bool)isAdjustingExposure;
- (void)setExposurePointOfInterest:(struct CGPoint)arg1;
- (struct CGPoint)exposurePointOfInterest;
- (_Bool)isExposurePointOfInterestSupported;
- (void)setAutoExposureBias:(float)arg1;
- (_Bool)_setAutoExposureBias:(float)arg1;
- (float)autoExposureBias;
- (void)setManualExposureSupportEnabled:(_Bool)arg1;
- (_Bool)isManualExposureSupportEnabled;
- (void)setExposureGain:(float)arg1;
- (float)exposureGain;
- (void)setExposureDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)exposureDuration;
- (void)setExposureMode:(long long)arg1;
- (long long)exposureMode;
- (_Bool)_setExposureWithMode:(long long)arg1 pointOfInterest:(id)arg2;
- (_Bool)isExposureModeSupported:(long long)arg1;
- (void)_setAdjustingExposure:(_Bool)arg1;
- (void)setSmoothAutoFocusEnabled:(_Bool)arg1;
- (_Bool)isSmoothAutoFocusEnabled;
- (_Bool)isSmoothAutoFocusSupported;
- (void)setManualFocusSupportEnabled:(_Bool)arg1;
- (_Bool)isManualFocusSupportEnabled;
- (void)setFocusPosition:(float)arg1;
- (float)focusPosition;
- (void)setAutoFocusRangeRestriction:(long long)arg1;
- (long long)autoFocusRangeRestriction;
- (_Bool)isAutoFocusRangeRestrictionSupported;
- (void)_setAdjustingFocus:(_Bool)arg1;
- (_Bool)isAdjustingFocus;
- (void)setFocusPointOfInterest:(struct CGPoint)arg1;
- (struct CGPoint)focusPointOfInterest;
- (_Bool)isFocusPointOfInterestSupported;
- (void)setFocusMode:(long long)arg1;
- (long long)focusMode;
- (_Bool)_setFocusWithMode:(long long)arg1 pointOfInterest:(id)arg2;
- (_Bool)isFocusModeSupported:(long long)arg1;
- (long long)position;
- (void)finishPendingAdjustmentsKVO;
- (void)_sessionDidStart;
- (void)_sessionWillStart;
- (void)setActiveInput:(id)arg1;
- (void)_applyPendingPropertiesToRecorder;
- (id)devicePropertiesDictionary;
- (void)stopUsingDevice;
- (_Bool)startUsingDevice:(id *)arg1;
- (_Bool)isConnected;
- (_Bool)isInUseByAnotherApplication;
- (_Bool)isActiveVideoMaxFrameDurationSet;
- (_Bool)isActiveVideoMinFrameDurationSet;
- (void)setActiveVideoMaxFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)_setActiveVideoMaxFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)activeVideoMaxFrameDuration;
- (void)setActiveVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;
- (void)_setActiveVideoMinFrameDuration:(CDStruct_1b6d18a9)arg1;
- (CDStruct_1b6d18a9)activeVideoMinFrameDuration;
- (void)setActiveFormat:(id)arg1;
- (id)activeFormat;
- (void)_setActiveFormatAndFrameRatesForResolvedOptions:(id)arg1 sendingFrameRatesToFig:(_Bool)arg2;
- (id)formats;
- (_Bool)supportsAVCaptureSessionPreset:(id)arg1;
- (_Bool)hasMediaType:(id)arg1;
- (id)localizedName;
- (id)modelID;
- (id)uniqueID;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithProperties:(id)arg1 sensorProperties:(id)arg2;
- (_Bool)isKindOfClass:(Class)arg1;

@end

