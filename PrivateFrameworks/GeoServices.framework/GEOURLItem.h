/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOPlace;

@interface GEOURLItem : PBCodable <NSCopying>
{
    GEOPlace *_place;
    _Bool _currentLocation;
    struct {
        unsigned int currentLocation:1;
    } _has;
}

@property(nonatomic) _Bool currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) GEOPlace *place; // @synthesize place=_place;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasCurrentLocation;
@property(readonly, nonatomic) _Bool hasPlace;
- (void)dealloc;

@end

