/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray;

// Not exported
@interface GEOVLaneCharacteristic : PBCodable <NSCopying>
{
    NSMutableArray *_laneDirections;
    NSMutableArray *_laneDividers;
    NSMutableArray *_laneTypes;
    unsigned int _roadLaneCount;
    struct {
        unsigned int roadLaneCount:1;
    } _has;
}

@property(retain, nonatomic) NSMutableArray *laneTypes; // @synthesize laneTypes=_laneTypes;
@property(retain, nonatomic) NSMutableArray *laneDirections; // @synthesize laneDirections=_laneDirections;
@property(retain, nonatomic) NSMutableArray *laneDividers; // @synthesize laneDividers=_laneDividers;
@property(nonatomic) unsigned int roadLaneCount; // @synthesize roadLaneCount=_roadLaneCount;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)laneTypeAtIndex:(unsigned long long)arg1;
- (unsigned long long)laneTypesCount;
- (void)addLaneType:(id)arg1;
- (void)clearLaneTypes;
- (id)laneDirectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)laneDirectionsCount;
- (void)addLaneDirection:(id)arg1;
- (void)clearLaneDirections;
- (id)laneDividerAtIndex:(unsigned long long)arg1;
- (unsigned long long)laneDividersCount;
- (void)addLaneDivider:(id)arg1;
- (void)clearLaneDividers;
@property(nonatomic) _Bool hasRoadLaneCount;
- (void)dealloc;

@end

