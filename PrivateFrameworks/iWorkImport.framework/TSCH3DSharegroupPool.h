/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSCH3DSharegroupDelayCheckerParent-Protocol.h"
#import "TSUFlushable-Protocol.h"

@class NSCondition, NSMutableArray, TSCH3DSharegroupDelayChecker;

// Not exported
@interface TSCH3DSharegroupPool : NSObject <TSCH3DSharegroupDelayCheckerParent, TSUFlushable>
{
    long long mSize;
    long long mNumAlive;
    long long mDisableLevel;
    NSMutableArray *mSharegroups;
    NSCondition *mCondition;
    _Bool mBusy;
    _Bool mCanUseOpenGL;
    TSCH3DSharegroupDelayChecker *mChecker;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)_singletonAlloc;
- (void)willCheckCondition;
- (void)scheduleCheckCondition;
- (void)waitForBackgroundThreadsWithTimeout:(double)arg1;
- (void)p_conditionLockedWaitForBackgroundThreadsWithTimeout:(double)arg1;
- (_Bool)canUseOpenGL;
- (void)enable;
- (void)disable;
- (void)releaseSharegroup:(id)arg1;
- (id)obtainSharegroup;
- (id)p_obtainSharegroupFromSharegroups;
- (void)flush;
- (void)p_flushSharegroupsIfPossible;
- (void)p_removeSharegroupsFromFlushingManager;
- (void)applicationDidBecomeActive;
- (void)applicationWillResignActive;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

