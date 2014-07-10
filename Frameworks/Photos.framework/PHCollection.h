/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Photos/PHObject.h>

@class NSString;

@interface PHCollection : PHObject
{
}

+ (id)fetchTopLevelUserCollectionsWithOptions:(id)arg1;
+ (id)fetchCollectionsInCollectionList:(id)arg1 options:(id)arg2;
+ (_Bool)managedObjectSupportsTrashedState;
+ (id)managedEntityName;
- (id)description;
- (_Bool)collectionCanBePinned;
- (_Bool)collectionHasFixedOrder;
@property(readonly, nonatomic) NSString *localizedTitle;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool canContainCollections;
@property(readonly, nonatomic) _Bool canContainAssets;

@end

