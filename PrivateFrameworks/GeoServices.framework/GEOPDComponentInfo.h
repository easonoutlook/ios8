/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOPDComponentFilter;

@interface GEOPDComponentInfo : PBCodable <NSCopying>
{
    unsigned int _count;
    GEOPDComponentFilter *_filter;
    unsigned int _startIndex;
    int _type;
    int _urgency;
    _Bool _includeSource;
    struct {
        unsigned int count:1;
        unsigned int startIndex:1;
        unsigned int type:1;
        unsigned int urgency:1;
        unsigned int includeSource:1;
    } _has;
}

@property(nonatomic) int urgency; // @synthesize urgency=_urgency;
@property(nonatomic) _Bool includeSource; // @synthesize includeSource=_includeSource;
@property(retain, nonatomic) GEOPDComponentFilter *filter; // @synthesize filter=_filter;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(nonatomic) unsigned int startIndex; // @synthesize startIndex=_startIndex;
@property(nonatomic) int type; // @synthesize type=_type;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasUrgency;
@property(nonatomic) _Bool hasIncludeSource;
@property(readonly, nonatomic) _Bool hasFilter;
@property(nonatomic) _Bool hasCount;
@property(nonatomic) _Bool hasStartIndex;
@property(nonatomic) _Bool hasType;
- (void)dealloc;
- (id)initWithType:(int)arg1 count:(unsigned int)arg2;

@end

