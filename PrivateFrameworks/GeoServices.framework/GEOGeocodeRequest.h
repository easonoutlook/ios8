/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOPlaceSearchRequest.h>

@interface GEOGeocodeRequest : GEOPlaceSearchRequest
{
}

- (id)initForwardGeocodeWithAddressString:(id)arg1;
- (id)initForwardGeocodeWithAddressDictionary:(id)arg1;
- (id)initForwardGeocodeWithAddress:(id)arg1;
- (id)initReverseGeocodeWithCoordinate:(CDStruct_c3b9c2ee)arg1 includeBusinessOptions:(_Bool)arg2;
- (id)initReverseGeocodeWithCoordinate:(CDStruct_c3b9c2ee)arg1;
- (id)initWithCoordinate:(CDStruct_c3b9c2ee)arg1 includeEntryPoints:(_Bool)arg2 traits:(id)arg3;
- (id)initWithAddress:(id)arg1 maxResults:(int)arg2 traits:(id)arg3;

@end

