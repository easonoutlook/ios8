/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOPlaceSearchRequest, GEOPlaceSearchResponse, NSString;

@interface GEORPCorrectedSearch : PBCodable <NSCopying>
{
    unsigned int _correctedSearchResultIndex;
    unsigned int _originalSearchResultIndex;
    GEOPlaceSearchRequest *_placeSearchRequest;
    GEOPlaceSearchResponse *_placeSearchResponse;
    NSString *_preferredSearchDisplayLocation;
    struct {
        unsigned int correctedSearchResultIndex:1;
        unsigned int originalSearchResultIndex:1;
    } _has;
}

@property(retain, nonatomic) NSString *preferredSearchDisplayLocation; // @synthesize preferredSearchDisplayLocation=_preferredSearchDisplayLocation;
@property(nonatomic) unsigned int correctedSearchResultIndex; // @synthesize correctedSearchResultIndex=_correctedSearchResultIndex;
@property(nonatomic) unsigned int originalSearchResultIndex; // @synthesize originalSearchResultIndex=_originalSearchResultIndex;
@property(retain, nonatomic) GEOPlaceSearchResponse *placeSearchResponse; // @synthesize placeSearchResponse=_placeSearchResponse;
@property(retain, nonatomic) GEOPlaceSearchRequest *placeSearchRequest; // @synthesize placeSearchRequest=_placeSearchRequest;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasPreferredSearchDisplayLocation;
@property(nonatomic) _Bool hasCorrectedSearchResultIndex;
@property(nonatomic) _Bool hasOriginalSearchResultIndex;
@property(readonly, nonatomic) _Bool hasPlaceSearchResponse;
@property(readonly, nonatomic) _Bool hasPlaceSearchRequest;
- (void)dealloc;

@end

