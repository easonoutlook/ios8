/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSDictionary, NSOperationQueue, NSURL;

@interface SCNSceneSource : NSObject
{
    id _reserved;
    struct __C3DSceneSource *_sceneSource;
    struct __C3DScene *_lastLoadedScene;
    NSDictionary *_lastOptions;
    NSOperationQueue *_downloadingQueue;
    _Bool _sceneLoaded;
    NSDictionary *_sceneSourceOptions;
}

+ (id)sceneFileTypes;
+ (id)sceneTypes;
+ (id)SCNJSExportProtocol;
+ (id)sceneSourceWithData:(id)arg1 options:(id)arg2;
+ (id)sceneSourceWithURL:(id)arg1 options:(id)arg2;
+ (void)_removeCachedSceneSourceIfNeededForURL:(id)arg1;
+ (void)_cacheSceneSource:(id)arg1 forURL:(id)arg2 options:(id)arg3;
+ (id)_cachedSceneSourceForURL:(id)arg1 options:(id)arg2;
+ (_Bool)_shouldCacheWithOptions:(id)arg1;
- (id)performConsistencyCheck;
- (_Bool)canExportToColladaWithNoDataLoss;
- (long long)sourceStatus;
- (id)IDsOfEntriesWithClass:(Class)arg1;
- (id)entryWithID:(id)arg1 withClass:(Class)arg2;
- (id)entriesPassingTest:(id)arg1;
- (_Bool)_appendToEntries:(id)arg1 entriesWithType:(unsigned long long)arg2 passingTest:(id)arg3 entryObjectConstructor:(void)arg4;
- (id)identifiersOfEntriesWithClass:(Class)arg1;
- (id)entryWithIdentifier:(id)arg1 withClass:(Class)arg2;
- (struct __C3DLibrary *)library;
- (struct __C3DSceneSource *)sceneSourceRef;
- (id)propertyForKey:(id)arg1;
- (id)copyPropertiesAtIndex:(long long)arg1 options:(id)arg2;
- (id)sceneWithOptions:(id)arg1 error:(id *)arg2;
- (id)sceneWithClass:(Class)arg1 options:(id)arg2 error:(id *)arg3;
- (id)sceneWithOptions:(id)arg1 statusHandler:(id)arg2;
- (id)sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(id)arg3;
- (id)_sceneWithClass:(Class)arg1 options:(id)arg2 statusHandler:(id)arg3;
- (struct __C3DScene *)_createSceneRefWithOptions:(id)arg1 statusHandler:(id)arg2;
- (id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2 error:(id *)arg3;
- (id)sceneAtIndex:(unsigned long long)arg1 options:(id)arg2;
- (id)description;
- (long long)sceneCount;
- (long long)countOfScenes;
@property(readonly) NSData *data;
@property(readonly) NSURL *url;
- (void)dealloc;
- (id)initWithURL:(id)arg1 options:(id)arg2;
- (id)sceneSourceOptions;
- (id)initWithData:(id)arg1 options:(id)arg2;

@end

