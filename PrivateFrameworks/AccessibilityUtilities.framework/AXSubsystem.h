/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface AXSubsystem : NSObject
{
}

+ (void)setShouldLogToFile:(_Bool)arg1;
+ (_Bool)shouldLogToFile;
+ (_Bool)willLog;
+ (void)resetPreferredLogLevel;
+ (void)setPreferredLogLevel:(int)arg1;
+ (int)effectiveLogLevel;
+ (int)defaultLogLevel;
+ (_Bool)shouldProcessMessageForLogs;
+ (_Bool)shouldIncludeBacktraceInLogs;
+ (id)identifier;
+ (id)wrapError:(id)arg1 description:(id)arg2;
+ (id)errorWithDescription:(id)arg1;
+ (id)_errorWithMessage:(id)arg1 underlyingError:(id)arg2;
+ (id)subsystems;
+ (void)initialize;

@end

