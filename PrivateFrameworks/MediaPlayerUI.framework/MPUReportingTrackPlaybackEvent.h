/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayerUI/MPUReportingEvent.h>

@class MPUReportingRadioStationMetadata, MPUReportingTrackMetadata, NSDate;

@interface MPUReportingTrackPlaybackEvent : MPUReportingEvent
{
    NSDate *_date;
    MPUReportingRadioStationMetadata *_radioStationMetadata;
    MPUReportingTrackMetadata *_trackMetadata;
    struct _MPUReportingTimeRange _trackTimeRange;
}

@property(nonatomic) struct _MPUReportingTimeRange trackTimeRange; // @synthesize trackTimeRange=_trackTimeRange;
@property(retain, nonatomic) MPUReportingTrackMetadata *trackMetadata; // @synthesize trackMetadata=_trackMetadata;
@property(retain, nonatomic) MPUReportingRadioStationMetadata *radioStationMetadata; // @synthesize radioStationMetadata=_radioStationMetadata;
@property(retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (_Bool)isValid;

@end

