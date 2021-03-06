/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSPLazyReferenceDelegate-Protocol.h"
#import "TSPReaderDelegate-Protocol.h"

@class NSHashTable, NSMutableArray, NSObject<OS_dispatch_queue>, NSUUID;

// Not exported
@interface TSPReadCoordinatorBase : NSObject <TSPReaderDelegate, TSPLazyReferenceDelegate>
{
    NSObject<OS_dispatch_queue> *_lazyReferenceQueue;
    NSHashTable *_lazyReferences;
    NSMutableArray *_lazyReferenceObserverBlocks;
    NSObject<OS_dispatch_queue> *_externalReferenceQueue;
    struct hash_map<long long, TSP::ExternalReferenceInfo, TSP::ObjectIdentifierHash, std::__1::equal_to<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::ExternalReferenceInfo>>> _externalReferences;
    struct queue<TSP::RepeatedExternalReferenceCompletionInfo, std::__1::deque<TSP::RepeatedExternalReferenceCompletionInfo, std::__1::allocator<TSP::RepeatedExternalReferenceCompletionInfo>>> _repeatedExternalReferences;
    _Bool _success;
}

@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)lazyReference:(id)arg1 didCreateCopy:(id)arg2;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2 forLazyReference:(id)arg3;
- (_Bool)readLazyReference:(id)arg1 object:(id *)arg2 error:(id *)arg3;
- (id)objectForIdentifier:(long long)arg1;
- (void)reader:(id)arg1 didReadLazyReference:(id)arg2;
- (void)reader:(id)arg1 didFindExternalRepeatedReference:(id)arg2 isWeak:(_Bool)arg3 allowUnknownObject:(_Bool)arg4 fromParentObject:(id)arg5 completion:(id)arg6;
- (void)reader:(id)arg1 didFindExternalReferenceToObjectIdentifier:(long long)arg2 componentIdentifier:(long long)arg3 isWeak:(_Bool)arg4 allowUnknownObject:(_Bool)arg5 fromParentObject:(id)arg6 completion:(id)arg7;
- (struct ExternalReferenceInfo *)externalReferenceInfoForObjectIdentifier:(long long)arg1 componentIdentifier:(long long)arg2;
- (id)reader:(id)arg1 wantsDataForIdentifier:(long long)arg2;
- (id)lazyReferenceDelegateForReader:(id)arg1;
- (id)objectDelegateForReader:(id)arg1;
- (id)contextForReader:(id)arg1;
@property(readonly, nonatomic) _Bool isReadingFromDocument;
@property(readonly, nonatomic) NSUUID *baseObjectUUID;
@property(readonly, nonatomic) unsigned long long fileFormatVersion;
- (void)didReferenceExternalObject:(id)arg1 withIdentifier:(long long)arg2;
- (id)externalObjectForIdentifier:(long long)arg1 componentIdentifier:(long long)arg2 isReadFinished:(_Bool)arg3;
- (id)unarchivedObjectForIdentifier:(long long)arg1 isReadFinished:(_Bool)arg2;
- (id)context;
- (void)didUpdateLazyReferenceDelegate:(id)arg1;
- (void)setLazyReferencesDelegateToObjectContext;
- (_Bool)resolveExternalReferences;
- (void)readDidFail;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) _Bool isCrossAppPaste;
@property(readonly, nonatomic) _Bool isCrossDocumentPaste;
@property(readonly, nonatomic) _Bool isFromPasteboard;

@end

