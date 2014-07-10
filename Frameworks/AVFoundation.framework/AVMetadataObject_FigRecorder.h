/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVMetadataObjectInternal_FigRecorder, NSString;

@interface AVMetadataObject_FigRecorder : NSObject
{
    AVMetadataObjectInternal_FigRecorder *_objectInternal;
}

+ (id)derivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;
- (id)originalMetadataObject;
- (id)input;
@property(readonly) NSString *type;
@property(readonly) struct CGRect bounds;
@property(readonly) CDStruct_1b6d18a9 duration;
@property(readonly) CDStruct_1b6d18a9 time;
- (void)dealloc;
- (id)initDerivedMetadataObjectFromMetadataObject:(id)arg1 withTransform:(struct CGAffineTransform)arg2 isVideoMirrored:(_Bool)arg3 rollAdjustment:(double)arg4;
- (id)init;

@end

