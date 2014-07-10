/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface _IMPingPacketData : NSObject
{
    int _sequenceNumber;
    _Bool _timedOut;
    int _error;
    struct timeval _timeSent;
    double _rtt;
}

@property(readonly, nonatomic) double rtt; // @synthesize rtt=_rtt;
@property(readonly, nonatomic) int error; // @synthesize error=_error;
@property(readonly, nonatomic) struct timeval timeSent; // @synthesize timeSent=_timeSent;
@property(readonly, nonatomic) _Bool timedOut; // @synthesize timedOut=_timedOut;
@property(readonly, nonatomic) int sequenceNumber; // @synthesize sequenceNumber=_sequenceNumber;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_returnPacketArrived;
- (void)_markPacketAsTimedOut:(double)arg1;
- (id)initWithSequeneceNumber:(int)arg1 timesent:(struct timeval *)arg2 error:(int)arg3;

@end

