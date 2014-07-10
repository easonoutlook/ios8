/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PUSearchResult-Protocol.h"

@class NSArray, NSAttributedString, NSCountedSet, NSMutableArray, NSObject<OS_dispatch_queue>, NSString, PLSearchIndexCategoryKey;

@interface PUSearchResultsValue : NSObject <PUSearchResult>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_uuids;
    NSCountedSet *_owningGeoCategoryContentStrings;
    double _score;
    NSMutableArray *_uncommittedUUIDs;
    NSCountedSet *_uncommittedOwningGeoCategoryContentStrings;
    double _uncommittedScore;
    NSAttributedString *_attributedDisplayString;
    id _albumUUID;
    unsigned long long _approximateCount;
    PLSearchIndexCategoryKey *_key;
    id <PUSearchResultsValueDelegate> _delegate;
}

@property(nonatomic) __weak id <PUSearchResultsValueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_setKey:(id)arg1;
@property(copy, nonatomic) PLSearchIndexCategoryKey *key; // @synthesize key=_key;
- (void)_setApproximateCount:(unsigned long long)arg1;
@property unsigned long long approximateCount; // @synthesize approximateCount=_approximateCount;
- (void)_setAlbumUUID:(id)arg1;
@property(retain) id albumUUID; // @synthesize albumUUID=_albumUUID;
- (void).cxx_destruct;
- (long long)_uncommittedCompare:(id)arg1;
- (void)_computeUncommittedScoreWithMaxGroupedResultsCount:(unsigned long long)arg1;
@property(readonly, copy) NSString *displaySubtitle;
@property(readonly, copy) NSString *displayTitle;
- (id)displayTitleWithDefaultAttributes:(id)arg1 highlightedAttributes:(id)arg2;
- (_Bool)_hasPendingChanges;
- (void)_cancelPendingChanges;
- (void)_mergePendingChanges;
- (void)_commitWithRollback:(_Bool)arg1;
- (void)_addOwningGeoCategoryContentStringFromIdenticalKey:(id)arg1;
- (unsigned long long)_addAssetWithUUID:(id)arg1;
- (_Bool)isFinished;
@property(readonly) double score;
@property(readonly) NSArray *uuids;
- (id)init;

@end
