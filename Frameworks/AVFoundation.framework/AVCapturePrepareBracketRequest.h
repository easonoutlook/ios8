/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class FigCaptureStillImageSettings;

@interface AVCapturePrepareBracketRequest : NSObject
{
    id _completionBlock;
    FigCaptureStillImageSettings *_settings;
}

+ (id)prepareBracketRequestWithCompletionBlock:(id)arg1 settings:(void)arg2;
@property(readonly) FigCaptureStillImageSettings *settings; // @synthesize settings=_settings;
@property(readonly) id completionBlock; // @synthesize completionBlock=_completionBlock;
- (void)dealloc;
- (id)_initWithCompletionBlock:(id)arg1 settings:(void)arg2;

@end

