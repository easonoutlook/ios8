/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>, VKRasterMapTileCache;

@interface VKRasterMapTileServer : NSObject
{
    VKRasterMapTileCache *_superTileCache;
    NSMutableDictionary *_activeTileCreators;
    NSMutableDictionary *_pendingRequests;
    NSMutableSet *_tileCreators;
    unsigned int _superTileSize;
    _Bool _softwareRendering;
    NSObject<OS_dispatch_queue> *_homeQueue;
}

@property(readonly, nonatomic) unsigned int superTileSize; // @synthesize superTileSize=_superTileSize;
- (void)_renderRequest:(id)arg1 completion:(id)arg2;
- (void)renderRequest:(id)arg1 completion:(id)arg2;
- (id)detailedDescription;
- (void)dealloc;
- (id)initWithSuperTileSize:(unsigned int)arg1 cache:(id)arg2 softwareRendering:(_Bool)arg3 homeQueue:(id)arg4;
- (id)init;

@end

