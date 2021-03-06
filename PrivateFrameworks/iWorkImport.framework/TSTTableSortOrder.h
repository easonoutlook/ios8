/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSIndexSet;

// Not exported
@interface TSTTableSortOrder : NSObject <NSCopying>
{
    NSIndexSet *mCachedIndices;
    int mType;
    NSArray *mRules;
}

+ (id)sortOrderWithRules:(id)arg1 type:(int)arg2;
@property(readonly, nonatomic) NSArray *rules; // @synthesize rules=mRules;
@property(readonly, nonatomic) int type; // @synthesize type=mType;
- (void)encodeToArchive:(struct TableSortOrderArchive *)arg1;
- (id)initFromArchive:(const struct TableSortOrderArchive *)arg1;
- (id)sortOrderByReplacingRulesWithRules:(id)arg1;
- (id)sortOrderByReplacingRuleAtIndex:(unsigned long long)arg1 withRule:(id)arg2;
- (id)sortOrderByRemovingRuleAtIndex:(unsigned long long)arg1;
- (id)sortOrderByAddingRule:(id)arg1;
- (id)sortOrderByChangingTypeTo:(int)arg1;
@property(readonly, nonatomic) NSIndexSet *columnIndices;
@property(readonly, nonatomic) unsigned long long ruleCount;
@property(readonly, nonatomic) _Bool empty;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRules:(id)arg1 type:(int)arg2;

@end

