/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOPDGeocodingResult, GEOPDPlaceLookupResult, GEOPDPlaceRefinementResult, GEOPDReverseGeocodingResult, GEOPDSearchResult, GEOPDSiriSearchResult;

@interface GEOPDPlaceGlobalResult : PBCodable <NSCopying>
{
    GEOPDGeocodingResult *_geocodingResult;
    GEOPDPlaceLookupResult *_placeLookupResult;
    GEOPDPlaceRefinementResult *_placeRefinementResult;
    GEOPDReverseGeocodingResult *_reverseGeocodingResult;
    GEOPDSearchResult *_searchResult;
    GEOPDSiriSearchResult *_siriSearchResult;
}

@property(retain, nonatomic) GEOPDSiriSearchResult *siriSearchResult; // @synthesize siriSearchResult=_siriSearchResult;
@property(retain, nonatomic) GEOPDPlaceRefinementResult *placeRefinementResult; // @synthesize placeRefinementResult=_placeRefinementResult;
@property(retain, nonatomic) GEOPDPlaceLookupResult *placeLookupResult; // @synthesize placeLookupResult=_placeLookupResult;
@property(retain, nonatomic) GEOPDReverseGeocodingResult *reverseGeocodingResult; // @synthesize reverseGeocodingResult=_reverseGeocodingResult;
@property(retain, nonatomic) GEOPDGeocodingResult *geocodingResult; // @synthesize geocodingResult=_geocodingResult;
@property(retain, nonatomic) GEOPDSearchResult *searchResult; // @synthesize searchResult=_searchResult;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasSiriSearchResult;
@property(readonly, nonatomic) _Bool hasPlaceRefinementResult;
@property(readonly, nonatomic) _Bool hasPlaceLookupResult;
@property(readonly, nonatomic) _Bool hasReverseGeocodingResult;
@property(readonly, nonatomic) _Bool hasGeocodingResult;
@property(readonly, nonatomic) _Bool hasSearchResult;
- (void)dealloc;

@end

