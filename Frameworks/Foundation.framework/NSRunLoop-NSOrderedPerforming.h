/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSRunLoop.h"

@interface NSRunLoop (NSOrderedPerforming)
- (void)cancelPerformSelectorsWithTarget:(id)arg1;
- (void)cancelPerformSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3;
- (void)performSelector:(SEL)arg1 target:(id)arg2 argument:(id)arg3 order:(unsigned long long)arg4 modes:(id)arg5;
@end

