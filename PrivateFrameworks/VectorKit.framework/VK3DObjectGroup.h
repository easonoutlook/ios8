/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface VK3DObjectGroup : NSObject
{
    struct unique_ptr<ggl::MeshVendor<ggl::Building::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Building::BuildingMesh>>> _meshVendor;
    shared_ptr_6e6219d6 _styleQuery;
}

@property(nonatomic) shared_ptr_6e6219d6 styleQuery; // @synthesize styleQuery=_styleQuery;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithStyleQuery:(shared_ptr_6e6219d6)arg1;
@property(readonly, nonatomic) MeshVendor_3faa0a72 *meshVendor;

@end
