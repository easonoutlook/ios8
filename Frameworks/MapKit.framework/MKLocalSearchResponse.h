/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

@interface MKLocalSearchResponse : NSObject
{
    NSArray *_mapItems;
    CDStruct_feeb6407 _boundingRegion;
}

@property(readonly, nonatomic) CDStruct_90e2a262 boundingRegion; // @synthesize boundingRegion=_boundingRegion;
@property(readonly, nonatomic) NSArray *mapItems; // @synthesize mapItems=_mapItems;
- (void).cxx_destruct;
- (id)description;
- (id)_dictionaryRepresentation;
- (id)_initWithMapItems:(id)arg1 boundingRegion:(id)arg2;

@end

