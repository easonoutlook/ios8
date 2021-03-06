/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CMPedometerProxy;

@interface CMPedometer : NSObject
{
    CMPedometerProxy *_pedometerProxy;
}

+ (_Bool)isFloorCountingAvailable;
+ (_Bool)isStairCountingAvailable;
+ (_Bool)isDistanceAvailable;
+ (_Bool)isStepCountingAvailable;
@property(readonly, nonatomic) CMPedometerProxy *pedometerProxy; // @synthesize pedometerProxy=_pedometerProxy;
- (void)queryPedometerDataSinceRecord:(long long)arg1 withHandler:(id)arg2;
- (void)stopPedometerUpdates;
- (void)startPedometerUpdatesFromDate:(id)arg1 withHandler:(id)arg2;
- (void)startPedometerUpdatesStartingFromDate:(id)arg1 withHandler:(id)arg2;
- (void)queryPedometerDataFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id)arg3;
- (void)queryPedometerDataStartingFromDate:(id)arg1 toDate:(id)arg2 withHandler:(id)arg3;
- (void)dealloc;
- (id)init;

@end

