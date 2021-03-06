/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSAssertionHandler.h"

// Not exported
@interface OITSUAssertionHandler : NSAssertionHandler
{
}

+ (id)currentHandler;
+ (id)performBlockIgnoringAssertions:(id)arg1;
+ (void)installAsNSHandler;
+ (void)testCaseStopped:(id)arg1;
+ (void)testCaseStarted:(id)arg1;
- (void)handleFailureWithLocation:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4 arguments:(struct __va_list_tag [1])arg5;
- (void)handleFailureInFunction:(id)arg1 file:(id)arg2 lineNumber:(long long)arg3 description:(id)arg4;
- (void)handleFailureInMethod:(SEL)arg1 object:(id)arg2 file:(id)arg3 lineNumber:(long long)arg4 description:(id)arg5;

@end

