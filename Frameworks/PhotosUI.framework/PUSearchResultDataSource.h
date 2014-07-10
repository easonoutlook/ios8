/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLAssetContainerList-Protocol.h"

@class NSMutableOrderedSet, NSMutableSet, NSObject<OS_dispatch_queue>, NSOrderedSet;

@interface PUSearchResultDataSource : NSObject <PLAssetContainerList>
{
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _taskId;
    NSMutableSet *_unfilteredContainerUUIDs;
    NSOrderedSet *_uncommittedFilteredContainers;
    NSOrderedSet *_uncommittedUnfilteredContainers;
    NSMutableOrderedSet *_uncommittedContainers;
    NSOrderedSet *_filteredContainers;
    NSOrderedSet *_unfilteredContainers;
    NSMutableOrderedSet *_containers;
    _Bool _hasPendingChanges;
    _Bool _finished;
    id <PUSearchResultDelegate> _delegate;
}

@property(readonly, nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic) __weak id <PUSearchResultDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)containersRelationshipName;
- (id)photoLibrary;
- (id)managedObjectContext;
- (_Bool)canEditContainers;
- (_Bool)isEmpty;
@property(readonly, nonatomic) unsigned long long containersCount;
- (id)containers;
- (void)setAssetContainerFiltered:(_Bool)arg1 atIndex:(unsigned long long)arg2;
- (_Bool)isAssetContainerFilteredAtIndex:(unsigned long long)arg1;
- (_Bool)hasFilterForAssetContainerAtIndex:(unsigned long long)arg1;
- (_Bool)_inqIsAssetContainerFilteredAtIndex:(unsigned long long)arg1;
- (void)mergePendingChanges;
- (void)_inqClearPendingChanges;
- (void)updateAssetUUIDs:(id)arg1 completion:(id)arg2;
- (_Bool)_isCancelledWithTaskId:(unsigned long long)arg1;
- (_Bool)_inqIsCancelledWithTaskId:(unsigned long long)arg1;
- (id)init;

@end
