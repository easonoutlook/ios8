/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet;

// Not exported
@interface VKLabelNavRoadGraph : NSObject
{
    NSMutableSet *_tiles;
    NSMutableSet *_duplicateTiles;
    NSMutableDictionary *_tileDatasByIndex;
    NSMutableArray *_junctions;
    NSMutableArray *_intersections;
    _Bool _oppositeCarriagewayJunctionsValid;
    NSMutableArray *_oppositeCarriagewayJunctions;
    Matrix_8746f91e _unitHeading;
    _Bool _offRouteJunctionsValid;
    Box_3d7e3c2c _offRouteJunctionSelectRect;
    NSMutableArray *_offRouteJunctions;
    struct PolylineCoordinate _routeUserOffset;
    _Bool _routeFeatureMapValid;
    unordered_map_aa048f4b _routeFeatureMap;
    _Bool _simplifiedRouteValid;
    vector_e20517dc _simplifiedRoutePoints;
    unsigned long long _currentRoadStartSimplifiedPointIndex;
    _Bool _screenRouteValid;
    struct vector<RouteSegment, std::__1::allocator<RouteSegment>> _screenRouteSegments;
    unsigned long long _firstPOIAligningRouteSegment;
}

@property(retain, nonatomic) NSMutableArray *junctions; // @synthesize junctions=_junctions;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_nextIntersectionForRoad:(id)arg1;
- (id)nextRoadSegmentForRoad:(id)arg1;
- (id)_findInterTileJunctionForJunction:(id)arg1;
- (id)_junctionForRoadEdge:(const CDStruct_91f75a7f *)arg1 atA:(_Bool)arg2 routeOffset:(struct PolylineCoordinate)arg3 tile:(id)arg4;
- (id)junctionForRoad:(id)arg1 nearJunction:(_Bool)arg2 crossTileEdge:(_Bool)arg3;
- (void)setTiles:(id)arg1;
- (void)startingLabelLayoutWithContext:(struct NavContext *)arg1 routeUserOffset:(struct PolylineCoordinate)arg2;
- (void)routeJunctionsHaveChanged;
- (void)reset;
- (void)dealloc;
- (id)initWithJunctions:(id)arg1;
- (_Bool)isOnScreenRouteBackwardsAtJunction:(id)arg1 navContext:(struct NavContext *)arg2;
- (_Bool)prepareOppositeCarriagewayJunctions;
- (id)oppositeCarriagewayJunctions;
- (unsigned char)computeRoutePositionForPOIAtPixel:(const Matrix_8746f91e *)arg1 currentPosition:(unsigned char)arg2 context:(struct NavContext *)arg3;
- (_Bool)collideRouteWithLabel:(id)arg1 routeCrossProduct:(float *)arg2 context:(struct NavContext *)arg3;
- (void)_transformRouteToScreenWithContext:(struct NavContext *)arg1;
- (void)_updateSimplifiedRoute;
- (_Bool)isPriorRouteCollinearWithRoad:(id)arg1 distance:(float)arg2;
- (void)_findOffRouteJunctions;
- (id)offRouteGraphJunctionsWithNavContext:(struct NavContext *)arg1 maxJunctions:(unsigned long long)arg2 isOnRoute:(_Bool)arg3;
- (void)_updateIntersectionsForDepth:(unsigned long long)arg1;
- (id)junctionListForDepth:(unsigned long long)arg1;
- (unsigned long long)countReadyJunctionLists;
- (void)evaluateDualCarriagewayForJunction:(id)arg1 outputJunctionList:(id)arg2;
- (_Bool)_checkIfDualCarriageWayConnectorRoad:(id)arg1 fromJunction:(id)arg2 toJunction:(id)arg3 checkShields:(_Bool)arg4;
- (id)overpassJunctionForJunction:(id)arg1;
- (void)addRouteRoadEdge:(const struct VKLabelNavRouteRoadEdge *)arg1 atA:(_Bool)arg2 isRouteRefineJunction:(_Bool)arg3 tile:(id)arg4 junctionList:(id)arg5;

@end

