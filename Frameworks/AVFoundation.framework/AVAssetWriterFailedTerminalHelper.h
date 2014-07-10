/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetWriterTerminalHelper.h>

@class NSError;

@interface AVAssetWriterFailedTerminalHelper : AVAssetWriterTerminalHelper
{
    NSError *_terminalError;
}

- (void)finishWritingWithCompletionHandler:(id)arg1;
- (void)finishWriting;
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;
- (id)error;
- (long long)status;
- (void)dealloc;
- (id)initWithConfigurationState:(id)arg1 terminalError:(id)arg2;
- (id)initWithConfigurationState:(id)arg1;

@end

