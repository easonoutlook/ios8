/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOAutomobileOptions, GEOComposedWaypoint, GEOLocation, GEOWalkingOptions, NSArray, NSDate;

@interface GEOQuickETARequest : NSObject
{
    GEOComposedWaypoint *_sourceWaypoint;
    GEOComposedWaypoint *_destinationWaypoint;
    NSDate *_departureDate;
    NSDate *_arrivalDate;
    int _transportType;
    GEOLocation *_currentLocation;
    _Bool _includeDistance;
    GEOAutomobileOptions *_automobileOptions;
    GEOWalkingOptions *_walkingOptions;
    NSArray *_additionalTransportTypesRequested;
}

@property(readonly, nonatomic) NSArray *additionalTransportTypesRequested; // @synthesize additionalTransportTypesRequested=_additionalTransportTypesRequested;
@property(readonly, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;
@property(readonly, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property(readonly, nonatomic) _Bool includeDistance; // @synthesize includeDistance=_includeDistance;
@property(readonly, nonatomic) GEOLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) NSDate *arrivalDate; // @synthesize arrivalDate=_arrivalDate;
@property(readonly, nonatomic) NSDate *departureDate; // @synthesize departureDate=_departureDate;
@property(readonly, nonatomic) GEOComposedWaypoint *destinationWaypoint; // @synthesize destinationWaypoint=_destinationWaypoint;
@property(readonly, nonatomic) GEOComposedWaypoint *sourceWaypoint; // @synthesize sourceWaypoint=_sourceWaypoint;
- (id)description;
- (void)dealloc;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(_Bool)arg6 additionalTransportTypesRequested:(id)arg7;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(_Bool)arg6 additionalTransportTypesRequested:(id)arg7;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(_Bool)arg5 automobileOptions:(id)arg6 walkingOptions:(id)arg7;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 currentLocation:(id)arg4 includeDistance:(_Bool)arg5 automobileOptions:(id)arg6 walkingOptions:(id)arg7;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(_Bool)arg6;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 arrivalDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5 includeDistance:(_Bool)arg6;
- (id)initWithSource:(id)arg1 toDestination:(id)arg2 departureDate:(id)arg3 transportType:(int)arg4 currentLocation:(id)arg5;

@end

