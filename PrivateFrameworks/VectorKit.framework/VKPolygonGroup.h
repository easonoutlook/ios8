/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class VKPolygonDrawStyle, VKVectorTile;

// Not exported
@interface VKPolygonGroup : NSObject
{
    VKPolygonDrawStyle *_cachedPolygonStyle;
    VKVectorTile *_tile;
    float _contentScale;
    struct unique_ptr<ggl::MeshVendor<ggl::Building::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Building::BuildingMesh>>> _extrusionFillMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _extrusionStrokeMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::Building::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Building::BuildingMesh>>> _extrusionFillMeshVendorForPointyRoofs;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _extrusionStrokeMeshVendorForPointyRoofs;
    struct unique_ptr<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::BuildingPointyRoof::BuildingMesh>>> _pointyRoofFillMeshVendor;
    struct unique_ptr<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::PrefilteredLine::PrefilteredLineMesh>>> _pointyRoofStrokeMeshVendor;
    unsigned int _cullingMask;
    struct MeshSet<ggl::PolygonBase::MeshMesh, ggl::PolygonBase::DefaultVboVertexElement> _fillMeshInfo;
    struct MeshSet<ggl::PolygonMesh::MeshMesh, ggl::PolygonMesh::DefaultVboVertexElement> _strokeMeshInfo;
    struct MeshSet<ggl::PolygonBase::MeshMesh, ggl::PolygonBase::DefaultVboVertexElement> _fillMeshInfoForPointyRoofs;
    struct unordered_map<std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge>>, std::__1::hash<SectionKey>, std::__1::equal_to<std::__1::pair<void *, unsigned long>>, std::__1::allocator<std::__1::pair<const std::__1::pair<void *, unsigned long>, std::__1::vector<Edge, std::__1::allocator<Edge>>>>> _polygonEdges;
    shared_ptr_6e6219d6 _styleQuery;
    struct vector<ggl::RenderItemBatcher, std::__1::allocator<ggl::RenderItemBatcher>> _fillRenderItemBatchers;
    struct vector<ggl::RenderItemBatcher, std::__1::allocator<ggl::RenderItemBatcher>> _strokeRenderItemBatchers;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _fillCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _strokeCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _extrusionFillCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _extrusionStrokeCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _fillCullingGroupsForPointyRoofs;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _extrusionFillCullingGroupsForPointyRoofs;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _extrusionStrokeCullingGroupsForPointyRoofs;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _pointyRoofFillCullingGroups;
    struct vector<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>, std::__1::allocator<std::__1::vector<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>, std::__1::allocator<std::__1::vector<ggl::Range, std::__1::allocator<ggl::Range>>>>>> _pointyRoofStrokeCullingGroups;
}

@property(readonly, nonatomic) shared_ptr_6e6219d6 *styleQuery; // @synthesize styleQuery=_styleQuery;
@property(readonly, nonatomic) unsigned int cullingMask; // @synthesize cullingMask=_cullingMask;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)updateCachedStyle;
- (_Bool)addPointyRoofForPolygon:(CDStruct_2e21d8bb *)arg1 building:(CDStruct_54d51626 *)arg2 buildingModel:(unsigned char)arg3 scaleThreshold:(float)arg4 styleIndex:(float)arg5;
- (_Bool)canConstructPointyRoofForPolygon:(CDStruct_2e21d8bb *)arg1 building:(CDStruct_54d51626 *)arg2 buildingModel:(unsigned char)arg3 scaleThreshold:(float)arg4;
- (void)addExtrusionForPolygon:(CDStruct_2e21d8bb *)arg1 building:(CDStruct_54d51626 *)arg2 index:(unsigned long long)arg3 ofTotal:(unsigned long long)arg4 hasNonWaterStyle:(_Bool)arg5 triangulator:(id)arg6 forRoofStyle:(int)arg7;
- (void)didFinishAddingData;
- (void)addPolygon:(CDStruct_2e21d8bb *)arg1 building:(CDStruct_54d51626 *)arg2 index:(unsigned long long)arg3 ofTotal:(unsigned long long)arg4 hasNonWaterStyle:(_Bool)arg5 accessor:(struct ResourceAccessor *)arg6 triangulator:(id)arg7 prepareExtrusion:(_Bool)arg8 forRoofStyle:(int)arg9 scaleThreshold:(float)arg10;
- (void)willAddDataWithAccessor:(struct ResourceAccessor *)arg1;
- (void)prepareForPolygon:(CDStruct_2e21d8bb *)arg1 building:(CDStruct_54d51626 *)arg2 hasNonWaterStyle:(_Bool)arg3 forRoofStyle:(int)arg4 scaleThreshold:(float)arg5;
- (unsigned char)indexForGeoFeatureAttributes:(id)arg1;
- (void)addRangesToPointyRoofStrokeRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)addRangesToPointyRoofFillRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)addRangesToPointyRoofExtrusionStrokeRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)addRangesToPointyRoofExtrusionFillRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)addRangesToPointyRoofTopRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)addRangesToExtrusionStrokeRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)addRangesToExtrusionFillRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)addRangesToStrokeRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
- (void)addRangesToFillRenderItemBatcher:(struct RenderItemBatcher *)arg1 forMeshAtIndex:(unsigned long long)arg2 cullingMask:(unsigned int)arg3;
@property(readonly, nonatomic) const MeshVendor_8027e961 *pointyRoofStrokeMeshVendor;
@property(readonly, nonatomic) const MeshVendor_c6d8e5cd *pointyRoofFillMeshVendor;
@property(readonly, nonatomic) const MeshVendor_8027e961 *extrusionStrokeMeshVendorForPointyRoofs;
@property(readonly, nonatomic) const MeshVendor_3faa0a72 *extrusionFillMeshVendorForPointyRoofs;
@property(readonly, nonatomic) vector_54f0f967 *fillMeshesForPointyRoofs;
@property(readonly, nonatomic) const MeshVendor_8027e961 *extrusionStrokeMeshVendor;
@property(readonly, nonatomic) const MeshVendor_3faa0a72 *extrusionFillMeshVendor;
@property(readonly, nonatomic) vector_0edf1665 *strokeMeshes;
@property(readonly, nonatomic) vector_54f0f967 *fillMeshes;
- (void)dealloc;
- (id)initWithStyleQuery:(shared_ptr_6e6219d6 *)arg1 tile:(id)arg2 contentScale:(float)arg3;

@end

