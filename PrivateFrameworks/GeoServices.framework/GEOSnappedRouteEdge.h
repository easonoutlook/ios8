/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GEOSnappedRouteEdge : NSObject
{
    CDStruct_02837cd9 _localBounds;
    shared_ptr_92bc9970 _mapEdge;
    struct vector<GEOVectorTilePoint, std::__1::allocator<GEOVectorTilePoint>> _points;
    struct vector<geo::PolylineCoordinate, std::__1::allocator<geo::PolylineCoordinate>> _routeOffsets;
    unsigned long long _mapEdgeOffset;
    _Bool _clippedFront;
    _Bool _clippedBack;
}

@property(readonly, nonatomic) _Bool clippedBack; // @synthesize clippedBack=_clippedBack;
@property(readonly, nonatomic) _Bool clippedFront; // @synthesize clippedFront=_clippedFront;
@property(readonly, nonatomic) unsigned long long mapEdgeOffset; // @synthesize mapEdgeOffset=_mapEdgeOffset;
@property(readonly, nonatomic) shared_ptr_92bc9970 mapEdge; // @synthesize mapEdge=_mapEdge;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_6cf27ba1 *feature;
@property(readonly, nonatomic) struct PolylineCoordinate routeOffsetB;
@property(readonly, nonatomic) struct PolylineCoordinate routeOffsetA;
@property(readonly, nonatomic) struct PolylineCoordinate *routeOffsets;
- (id)description;
@property(readonly, nonatomic) unsigned long long pointCount;
@property(readonly, nonatomic) CDStruct_b2fbf00d *points;
- (void)calculateRouteOffsetsBetweenA:(struct PolylineCoordinate)arg1 andB:(struct PolylineCoordinate)arg2 overLength:(float)arg3 onRoute:(id)arg4;
- (void)dealloc;
- (id)initWithRoadPath:(const RoadPathElement_384b44ed *)arg1 sectionRect:(const CDStruct_02837cd9 *)arg2;

@end

