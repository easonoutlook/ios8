/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RTCReporting/RTCReportingBackend.h>

@class AWDStats, TimingCollection;

@interface AWDBackend : RTCReportingBackend
{
    AWDStats *_awdstat;
    TimingCollection *_videoQualityTimers;
    _Bool _callStarted;
    _Bool _RTStatsReceived;
}

@property(retain) TimingCollection *videoQualityTimers; // @synthesize videoQualityTimers=_videoQualityTimers;
@property _Bool RTStatsReceived; // @synthesize RTStatsReceived=_RTStatsReceived;
@property _Bool callStarted; // @synthesize callStarted=_callStarted;
@property(retain) AWDStats *awdstat; // @synthesize awdstat=_awdstat;
- (void)parseVideoProperty:(unsigned short)arg1 dict:(id)arg2;
- (void)parseCellTechChange:(unsigned short)arg1 dict:(id)arg2;
- (void)parseAWDEvent:(unsigned short)arg1 dict:(id)arg2;
- (void)parseVideoDegraded:(id)arg1 direction:(unsigned short)arg2;
- (void)parseConnectivityTimings:(id)arg1;
- (void)parseVideoStats:(unsigned short)arg1 dict:(id)arg2;
- (void)parseRTStats:(id)arg1;
- (void)parseAudioTierChange:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1 profile:(id)arg2 productFamily:(id)arg3;
- (id)sendMsgOfType:(int)arg1 timestamp:(const struct timeval *)arg2 method:(unsigned short)arg3 respCode:(unsigned short)arg4 eventID:(unsigned short)arg5 dict:(id)arg6;

@end

