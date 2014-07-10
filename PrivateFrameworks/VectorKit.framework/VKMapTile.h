/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VectorKit/VKTile.h>

#import "NSCopying-Protocol.h"

@class VKRasterTile;

// Not exported
@interface VKMapTile : VKTile <NSCopying>
{
    VKTile *_tiles[34];
    unsigned long long _states[34];
    double _stateDates[34];
    id _stateMetas[34];
    CDStruct_ff03d24e _localBounds[34];
    VKRasterTile *_rasterized;
    _Bool _needsRasterization;
    float _maximumStyleZ;
    shared_ptr_89f9185e _labelMapTile;
}

@property(nonatomic) shared_ptr_89f9185e labelMapTile; // @synthesize labelMapTile=_labelMapTile;
@property(nonatomic) _Bool needsRasterization; // @synthesize needsRasterization=_needsRasterization;
@property(retain, nonatomic) VKRasterTile *rasterized; // @synthesize rasterized=_rasterized;
@property(readonly, nonatomic) float maximumStyleZ; // @synthesize maximumStyleZ=_maximumStyleZ;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (CDStruct_ff03d24e)localBoundsForLayer:(unsigned long long)arg1;
- (void)setTile:(id)arg1 state:(unsigned long long)arg2 metadata:(id)arg3 forLayer:(unsigned long long)arg4;
- (void)_setTile:(id)arg1 state:(unsigned long long)arg2 metadata:(id)arg3 forLayer:(unsigned long long)arg4 timestamp:(double)arg5;
- (unsigned long long)tileStateForLayer:(unsigned long long)arg1;
- (id)tileForLayer:(unsigned long long)arg1;
- (void)updateViewDependentStateWithContext:(id)arg1;
- (id)detailedDescription;
- (id)description;
- (void)dealloc;
- (id)initWithKey:(const struct VKTileKey *)arg1;

@end

