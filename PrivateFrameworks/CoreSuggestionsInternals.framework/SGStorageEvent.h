/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSData, NSSet, NSString, SGDuplicateKey, SGRecordId, SGSimpleTimeRange;

@interface SGStorageEvent : NSObject
{
    _Bool _curated;
    unsigned int _state;
    SGRecordId *_recordId;
    SGDuplicateKey *_duplicateKey;
    NSString *_sourceKey;
    NSString *_content;
    NSString *_title;
    double _creationTimestamp;
    double _lastModifiedTimestamp;
    NSArray *_participants;
    SGSimpleTimeRange *_when;
    NSArray *_locations;
    NSSet *_tags;
    NSData *_structuredData;
}

+ (id)storageEventFromEntity:(id)arg1 usingStore:(id)arg2;
@property(readonly, nonatomic) _Bool curated; // @synthesize curated=_curated;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(readonly, nonatomic) NSData *structuredData; // @synthesize structuredData=_structuredData;
@property(readonly, nonatomic) NSSet *tags; // @synthesize tags=_tags;
@property(readonly, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(readonly, nonatomic) SGSimpleTimeRange *when; // @synthesize when=_when;
@property(readonly, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, nonatomic) double lastModifiedTimestamp; // @synthesize lastModifiedTimestamp=_lastModifiedTimestamp;
@property(readonly, nonatomic) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *content; // @synthesize content=_content;
@property(readonly, nonatomic) NSString *sourceKey; // @synthesize sourceKey=_sourceKey;
@property(readonly, nonatomic) SGDuplicateKey *duplicateKey; // @synthesize duplicateKey=_duplicateKey;
@property(readonly, nonatomic) SGRecordId *recordId; // @synthesize recordId=_recordId;
- (void).cxx_destruct;
- (id)fieldsToSaveOnConfirmation;
- (id)extraKeyTag;
- (_Bool)isAllDay;
- (_Bool)isCancelled;
- (_Bool)isFromSuggestions;
- (_Bool)isFromDataDetectors;
- (id)initWithRecordId:(id)arg1 duplicateKey:(id)arg2 sourceKey:(id)arg3 content:(id)arg4 title:(id)arg5 creationTimestamp:(double)arg6 lastModifiedTimestamp:(double)arg7 tags:(id)arg8 when:(id)arg9 locations:(id)arg10 structuredData:(id)arg11 state:(unsigned int)arg12 participants:(id)arg13 curated:(_Bool)arg14;
- (id)convertToEvent:(id)arg1;

@end
