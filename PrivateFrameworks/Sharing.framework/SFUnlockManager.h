/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SFUnlockManager : NSObject
{
}

+ (id)unlockManager;
- (void)removeUnlockerDevice:(id)arg1;
- (void)addUnlockerDevice:(id)arg1 withPasscode:(id)arg2 completionHandler:(id)arg3;
- (void)addUnlockerDevice:(id)arg1 withCompletionHandler:(id)arg2;

@end

