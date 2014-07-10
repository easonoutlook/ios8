/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMCore/IMTranscriptChatItem.h>

@class NSDate, NSString;

@interface IMMessageStatusChatItem : IMTranscriptChatItem
{
    long long _statusType;
    NSDate *_time;
    long long _expireStatusType;
    NSDate *_timeAdded;
    NSDate *_timeStale;
    unsigned long long _count;
}

@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
@property(readonly, nonatomic) long long expireStatusType; // @synthesize expireStatusType=_expireStatusType;
@property(readonly, retain, nonatomic) NSDate *time; // @synthesize time=_time;
@property(readonly, nonatomic) long long statusType; // @synthesize statusType=_statusType;
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4 expireStatusType:(long long)arg5;
- (id)_initWithItem:(id)arg1 expireStatusType:(long long)arg2 count:(unsigned long long)arg3;
- (id)_initWithItem:(id)arg1 statusType:(long long)arg2 time:(id)arg3 count:(unsigned long long)arg4;
@property(readonly, nonatomic) long long messageStatusType;
@property(readonly, retain, nonatomic) NSString *errorText;
@property(readonly, nonatomic) _Bool isFromMe;
- (void)_setTimeAdded:(id)arg1;
- (id)_timeAdded;
- (id)_timeStale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)dealloc;

@end

