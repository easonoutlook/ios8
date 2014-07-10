/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <EventKit/EKTravelAdvice-Protocol.h>

@class NSDate;

// Not exported
@interface EKTravelAdvice : NSObject <EKTravelAdvice>
{
    NSDate *_predictedDepartureTime;
    unsigned long long _trafficLevel;
    unsigned long long _accidentState;
    unsigned long long _travelState;
    double _travelStateScore;
}

@property(readonly, nonatomic) double travelStateScore; // @synthesize travelStateScore=_travelStateScore;
@property(readonly, nonatomic) unsigned long long travelState; // @synthesize travelState=_travelState;
@property(readonly, nonatomic) unsigned long long accidentState; // @synthesize accidentState=_accidentState;
@property(readonly, nonatomic) unsigned long long trafficLevel; // @synthesize trafficLevel=_trafficLevel;
@property(readonly, nonatomic) NSDate *predictedDepartureTime; // @synthesize predictedDepartureTime=_predictedDepartureTime;
- (void)dealloc;
- (id)initWithTrafficLevel:(unsigned long long)arg1 accidentState:(unsigned long long)arg2 travelState:(unsigned long long)arg3 travelStateScore:(double)arg4 predictedDepartureTime:(id)arg5;

@end

