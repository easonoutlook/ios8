/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MPUFoundation/MPUDataSource.h>

@class MPMediaQuery, MPMediaQuerySectionInfo, NSArray, NSMutableSet;

@interface MPUQueryDataSource : MPUDataSource
{
    NSArray *_entities;
    NSMutableSet *_additionalUniqueItemPropertiesToFetch;
    _Bool _invalidateWhenEnteringForeground;
    MPMediaQuerySectionInfo *_sectionInfo;
    _Bool _ignoringInvalidationDueToBackgroundApplicationState;
    MPMediaQuery *_query;
}

@property(nonatomic) _Bool ignoringInvalidationDueToBackgroundApplicationState; // @synthesize ignoringInvalidationDueToBackgroundApplicationState=_ignoringInvalidationDueToBackgroundApplicationState;
@property(readonly, nonatomic) MPMediaQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)_sectionInfo;
- (void)_postInvalidationNotificationIfNeeded;
- (void)_invalidateIfNeeded;
- (_Bool)_deleteHidesFromCloudForIndex:(unsigned long long)arg1 hidesAll:(out _Bool *)arg2;
- (void)_mediaLibraryDynamicPropertiesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_isCloudEnabledDidChangeNotification:(id)arg1;
- (void)_defaultMediaLibraryDidChangeNotification:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)removeAdditionalMediaEntityPropertiesToFetch:(id)arg1;
- (void)addAdditionalMediaEntityPropertiesToFetch:(id)arg1;
- (_Bool)showsEntityCountFooter;
- (struct _NSRange)rangeOfSectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexOfSectionForSectionTitleAtIndex:(unsigned long long)arg1;
- (id)localizedSectionTitleAtIndex:(unsigned long long)arg1;
- (id)localizedSectionIndexTitles;
- (unsigned long long)numberOfSections;
- (_Bool)showsIndexBar;
- (_Bool)isEmpty;
- (void)_invalidateCalculatedEntities;
- (id)queryForEntityAtIndexPath:(id)arg1;
- (id)queryForEntityAtIndex:(unsigned long long)arg1;
- (id)entities;
- (long long)editingTypeForEntityAtIndex:(unsigned long long)arg1;
- (void)deleteEntityAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (_Bool)canSelectEntityAtIndex:(unsigned long long)arg1;
- (_Bool)canEditEntityAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithQuery:(id)arg1 entityType:(long long)arg2;
- (id)initWithEntityType:(long long)arg1;

@end

