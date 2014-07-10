/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKVectorTile.h>

@class NSArray, NSData, NSMutableArray, VKTileKeyMap;

// Not exported
@interface VKTrafficTile : VKVectorTile
{
    struct unique_ptr<vk::TrafficLayer, std::__1::default_delete<vk::TrafficLayer>> _trafficLayer;
    struct _GEOTileKey _dataKey;
    NSData *_data;
    VKTileKeyMap *_dynamicTiles;
    struct unordered_map<vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon>>, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon>>>>, std::__1::hash<vk::TrafficBatchKey>, std::__1::equal_to<vk::TrafficBatchKey>, std::__1::allocator<std::__1::pair<const vk::TrafficBatchKey, std::__1::vector<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon>>, std::__1::allocator<std::__1::unique_ptr<vk::TrafficRibbon, std::__1::default_delete<vk::TrafficRibbon>>>>>>> *_trafficCollection;
    NSMutableArray *_incidents;
    struct TrafficSkeletonTile _trafficData;
}

@property(readonly, nonatomic) VKTileKeyMap *dynamicTiles; // @synthesize dynamicTiles=_dynamicTiles;
@property(readonly, nonatomic) NSArray *incidents; // @synthesize incidents=_incidents;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)buildTrafficMeshWithRoadData:(id)arg1 withDevice:(struct Device *)arg2;
- (void)buildIncidentsForDynamic:(id)arg1 withRoadData:(id)arg2 styleSession:(struct StyleResolutionSession *)arg3;
- (void)buildTrafficMeshWithRoadData:(id)arg1 dynamicTile:(id)arg2 trafficAccum:(struct TrafficAccum *)arg3 styleSession:(struct StyleResolutionSession *)arg4;
- (void)enumerateTrafficRoadPiecesForTile:(id)arg1 usingFunction:(const function_21f69ee7 *)arg2;
- (_Bool)_buildStartOffset:(float *)arg1 endOffset:(float *)arg2 forLine:(CDStruct_2e21d8bb *)arg3 forSkeleton:(const struct Record *)arg4 forRange:(struct _NSRange)arg5 forFlow:(const struct Flow *)arg6 forPoints:(Matrix_8746f91e *)arg7;
- (void)buildSkeletonMap;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1 downloadKey:(const struct _GEOTileKey *)arg2 data:(id)arg3 styleManager:(id)arg4 sharedResources:(id)arg5 contentScale:(double)arg6 device:(struct Device *)arg7;
@property(readonly, nonatomic) struct TrafficLayer *trafficLayer;
@property(nonatomic) const struct _GEOTileKey *dataKey;

@end

