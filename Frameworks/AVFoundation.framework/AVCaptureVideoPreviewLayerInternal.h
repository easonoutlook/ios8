/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCaptureConnection, AVCaptureSession, AVWeakReference, CALayer, NSString;

@interface AVCaptureVideoPreviewLayerInternal : NSObject
{
    NSString *sinkID;
    AVCaptureSession *session;
    AVCaptureConnection *connection;
    struct OpaqueFigCaptureSession *figCaptureSession;
    CALayer *sublayer;
    struct CGSize sensorSize;
    NSString *sensorToPreviewVTScalingMode;
    struct CGSize previewSize;
    double previewRotationDegrees;
    NSString *gravity;
    _Bool disableActions;
    AVWeakReference *weakReference;
    long long orientation;
    _Bool automaticallyAdjustsMirroring;
    _Bool mirrored;
    _Bool isPresentationLayer;
    _Bool visible;
    _Bool isPaused;
    _Bool chromaNoiseReductionEnabled;
    int changeSeed;
    struct CGAffineTransform captureDeviceTransform;
    double rollAdjustment;
}

@end

