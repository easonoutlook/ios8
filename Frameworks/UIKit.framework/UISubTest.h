/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSNumber, NSString;

// Not exported
@interface UISubTest : NSObject
{
    NSNumber *_startTime;
    NSNumber *_startFrame;
    NSMutableArray *_time;
    NSMutableArray *_fps;
    NSString *_testName;
    _Bool _showTime;
    _Bool _showFps;
}

- (void).cxx_destruct;
- (id)outputData;
- (void)stopWithFrameCount:(id)arg1;
- (void)startWithFrameCount:(id)arg1;
- (id)initWithName:(id)arg1 metrics:(id)arg2;

@end

