/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSMutableArray, NSString;

@interface PLSearchIndexCategoryKey : NSObject <NSCopying>
{
    NSMutableArray *_matches;
    NSString *_owningGeoCategoryString;
    double _score;
    _Bool _copied;
}

+ (id)newKeyWithCategories:(id)arg1 categoryStrings:(id)arg2 ranges:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isDeepEqual:(id)arg1;
- (long long)compare:(id)arg1;
- (double)score;
- (id)owningGeoCategoryString;
- (void)enumerateMatchedRangesForCategoryAtIndex:(unsigned long long)arg1 withBlock:(id)arg2;
- (struct _NSRange)matchedRangeAtIndex:(unsigned long long)arg1 forCategoryAtIndex:(unsigned long long)arg2;
- (unsigned long long)matchedRangeCountForCategoryAtIndex:(unsigned long long)arg1;
- (void)enumerateCategoriesWithBlock:(id)arg1;
- (id)categoryStringAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchCount;
- (id)_matchForCategory:(unsigned long long)arg1 categoryString:(id)arg2 outSortedInsertionIndex:(unsigned long long *)arg3;
- (void)_setOwningGeoCategoryString:(id)arg1;
- (void)_addRange:(struct _NSRange)arg1 forCategory:(unsigned long long)arg2 categoryString:(id)arg3;
- (void)_addCategory:(unsigned long long)arg1 categoryString:(id)arg2 score:(CDStruct_87eee8bb *)arg3;
- (id)description;
- (void)dealloc;
- (id)init;

@end
