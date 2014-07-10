/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOLatLng, GEOPDViewportInfo, NSData;

@interface GEORPMapLocation : PBCodable <NSCopying>
{
    GEOLatLng *_coordinate;
    NSData *_image;
    GEOPDViewportInfo *_viewportInfo;
    float _zoomLevel;
    struct {
        unsigned int zoomLevel:1;
    } _has;
}

@property(retain, nonatomic) GEOPDViewportInfo *viewportInfo; // @synthesize viewportInfo=_viewportInfo;
@property(nonatomic) float zoomLevel; // @synthesize zoomLevel=_zoomLevel;
@property(retain, nonatomic) GEOLatLng *coordinate; // @synthesize coordinate=_coordinate;
@property(retain, nonatomic) NSData *image; // @synthesize image=_image;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasViewportInfo;
@property(nonatomic) _Bool hasZoomLevel;
@property(readonly, nonatomic) _Bool hasCoordinate;
@property(readonly, nonatomic) _Bool hasImage;
- (void)dealloc;

@end

