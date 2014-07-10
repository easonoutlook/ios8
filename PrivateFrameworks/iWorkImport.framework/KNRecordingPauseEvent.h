/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/KNRecordingEvent.h>

// Not exported
@interface KNRecordingPauseEvent : KNRecordingEvent
{
    long long mPauseEventType;
}

@property(readonly, nonatomic) long long pauseEventType; // @synthesize pauseEventType=mPauseEventType;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStartTime:(double)arg1;
- (id)initWithStartTime:(double)arg1 pauseEventType:(long long)arg2;
- (void)saveToArchive:(struct RecordingEventArchive *)arg1 archiver:(id)arg2;
- (id)initWithContext:(id)arg1 archive:(const struct RecordingEventArchive *)arg2 unarchiver:(id)arg3;

@end

