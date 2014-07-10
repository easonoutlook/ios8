/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TUAppender-Protocol.h"

@class NSMutableArray, NSString;

@interface TUInMemoryAppender : NSObject <TUAppender>
{
    unsigned long long _currentCapacity;
    unsigned long long _maxCapacity;
    NSMutableArray *_buffer;
    _Bool _shouldLogDyldInfo;
    _Bool _shouldLogSystemInfo;
    NSString *_cachedPrettyNameForPid;
}

@property _Bool shouldLogSystemInfo; // @synthesize shouldLogSystemInfo=_shouldLogSystemInfo;
@property _Bool shouldLogDyldInfo; // @synthesize shouldLogDyldInfo=_shouldLogDyldInfo;
- (void)setAppenderDelegate:(id)arg1;
- (void)reset;
- (void)logWithIdentifier:(id)arg1 pid:(int)arg2 date:(id)arg3 level:(int)arg4 topic:(id)arg5 text:(id)arg6 backtrace:(id)arg7;
- (void)flush;
- (void)dumpLogsToFilePath:(id)arg1;
- (void)dealloc;
- (id)initWithMaxCapacity:(unsigned long long)arg1;

@end

