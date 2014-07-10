/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOTimeCheckpoints;

@interface GEOETAStep : PBCodable <NSCopying>
{
    unsigned int _distanceRemaining;
    unsigned int _expectedTime;
    unsigned int _stepID;
    GEOTimeCheckpoints *_timeCheckpoints;
    int _zilchPointIndex;
    struct {
        unsigned int distanceRemaining:1;
        unsigned int expectedTime:1;
        unsigned int stepID:1;
        unsigned int zilchPointIndex:1;
    } _has;
}

@property(retain, nonatomic) GEOTimeCheckpoints *timeCheckpoints; // @synthesize timeCheckpoints=_timeCheckpoints;
@property(nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(nonatomic) unsigned int stepID; // @synthesize stepID=_stepID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasTimeCheckpoints;
@property(nonatomic) _Bool hasZilchPointIndex;
@property(nonatomic) int zilchPointIndex; // @synthesize zilchPointIndex=_zilchPointIndex;
@property(nonatomic) _Bool hasExpectedTime;
@property(nonatomic) _Bool hasStepID;
- (void)dealloc;
@property(nonatomic) _Bool hasDistanceRemaining;
@property(nonatomic) unsigned int distanceRemaining;

@end

