/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AVCaptureInput_FigRecorder, AVMetadataObject_FigRecorder, NSString;

@interface AVMetadataObjectInternal_FigRecorder : NSObject
{
    NSString *type;
    AVCaptureInput_FigRecorder *input;
    AVMetadataObject_FigRecorder *originalMetadataObject;
    CDStruct_1b6d18a9 time;
    CDStruct_1b6d18a9 duration;
    struct CGRect bounds;
}

@property(retain) AVMetadataObject_FigRecorder *originalMetadataObject; // @synthesize originalMetadataObject;
@property(retain) AVCaptureInput_FigRecorder *input; // @synthesize input;
@property(retain) NSString *type; // @synthesize type;
@property struct CGRect bounds; // @synthesize bounds;
@property CDStruct_1b6d18a9 duration; // @synthesize duration;
@property CDStruct_1b6d18a9 time; // @synthesize time;
- (void)dealloc;
- (id)init;

@end
