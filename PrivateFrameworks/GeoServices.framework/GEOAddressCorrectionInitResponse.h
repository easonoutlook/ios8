/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOLocation, NSString;

@interface GEOAddressCorrectionInitResponse : PBCodable <NSCopying>
{
    NSString *_addressID;
    GEOLocation *_addressLocation;
    unsigned int _numberOfVisitsBucketSize;
    int _statusCode;
    struct {
        unsigned int numberOfVisitsBucketSize:1;
        unsigned int statusCode:1;
    } _has;
}

@property(retain, nonatomic) NSString *addressID; // @synthesize addressID=_addressID;
@property(retain, nonatomic) GEOLocation *addressLocation; // @synthesize addressLocation=_addressLocation;
@property(nonatomic) int statusCode; // @synthesize statusCode=_statusCode;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasNumberOfVisitsBucketSize;
@property(nonatomic) unsigned int numberOfVisitsBucketSize; // @synthesize numberOfVisitsBucketSize=_numberOfVisitsBucketSize;
@property(readonly, nonatomic) _Bool hasAddressID;
@property(readonly, nonatomic) _Bool hasAddressLocation;
@property(nonatomic) _Bool hasStatusCode;
- (void)dealloc;

@end

