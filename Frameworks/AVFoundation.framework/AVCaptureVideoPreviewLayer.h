/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CALayer.h"

@class AVCaptureConnection, AVCaptureSession, AVCaptureVideoPreviewLayerInternal, NSString;

@interface AVCaptureVideoPreviewLayer : CALayer
{
    AVCaptureVideoPreviewLayerInternal *_internal;
}

+ (id)layerWithSession:(id)arg1;
+ (id)alloc;
+ (void)initialize;
- (void)_handleNotification:(id)arg1 payload:(id)arg2;
- (void)_updateCaptureDeviceTransform;
- (struct CGRect)rectForMetadataOutputRectOfInterest:(struct CGRect)arg1;
- (struct CGRect)metadataOutputRectOfInterestForRect:(struct CGRect)arg1;
- (id)transformedMetadataObjectForMetadataObject:(id)arg1;
- (id)_input;
- (struct CGRect)rectForMetadataObject:(id)arg1;
- (struct CGRect)rectForCaptureDeviceFaceRect:(struct CGRect)arg1;
- (struct CGPoint)pointForCaptureDevicePointOfInterest:(struct CGPoint)arg1;
- (struct CGPoint)captureDevicePointOfInterestForPoint:(struct CGPoint)arg1;
- (id)liveConnections;
- (void)setSinkID:(id)arg1;
- (id)sinkID;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)bumpChangeSeed;
- (int)changeSeed;
- (_Bool)canAddConnectionForMediaType:(id)arg1;
- (void)removeConnection:(id)arg1;
- (id)addConnection:(id)arg1 error:(id *)arg2;
- (id)connectionMediaTypes;
- (id)connections;
- (id)activeConnections;
- (void)layerDidBecomeVisible:(_Bool)arg1;
- (void)setChromaNoiseReductionEnabled:(_Bool)arg1;
- (_Bool)isChromaNoiseReductionEnabled;
- (_Bool)isChromaNoiseReductionSupported;
- (void)setPaused:(_Bool)arg1;
- (_Bool)isPaused;
@property(nonatomic, getter=isMirrored) _Bool mirrored;
- (_Bool)_isMirrored;
@property(nonatomic) _Bool automaticallyAdjustsMirroring;
- (_Bool)_automaticallyAdjustsMirroring;
@property(readonly, nonatomic, getter=isMirroringSupported) _Bool mirroringSupported;
@property(nonatomic) long long orientation;
- (long long)_orientation;
@property(readonly, nonatomic, getter=isOrientationSupported) _Bool orientationSupported;
@property(copy) NSString *videoGravity;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)layoutSublayers;
- (void)setBounds:(struct CGRect)arg1;
@property(retain, nonatomic) AVCaptureSession *session;
@property(readonly, nonatomic) AVCaptureConnection *connection;
- (void)dealloc;
- (id)initWithLayer:(id)arg1;
- (double)previewRotationDegrees;
- (id)initWithSession:(id)arg1;
- (id)init;
- (void)centerSublayer:(long long)arg1;

@end

