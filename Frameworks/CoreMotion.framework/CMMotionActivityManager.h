/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface CMMotionActivityManager : NSObject
{
    struct CLConnectionClient *fLocationConnection;
    NSObject<OS_dispatch_queue> *fQueue;
    id fHandler;
    NSOperationQueue *fHandlerQueue;
}

+ (_Bool)isActivityAvailable;
- (void)_handleQueryResponse:(struct CLConnectionMessage *)arg1 onQueue:(id)arg2 withHandler:(id)arg3;
- (void)stopActivityUpdates;
- (void)startActivityUpdatesToQueue:(id)arg1 withHandler:(id)arg2;
- (void)queryActivityStartingFromDate:(id)arg1 toDate:(id)arg2 toQueue:(id)arg3 withHandler:(id)arg4;
- (void)dealloc;
- (id)init;

@end

