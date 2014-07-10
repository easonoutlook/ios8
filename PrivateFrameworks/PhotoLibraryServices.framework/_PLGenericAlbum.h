/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedObject.h>

@class NSDictionary, NSMutableSet, NSNumber, NSString, PLManagedAsset, PLManagedFolder;

@interface _PLGenericAlbum : PLManagedObject
{
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)entityInManagedObjectContext:(id)arg1;
+ (id)entityName;
+ (id)insertInManagedObjectContext:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSMutableSet *albumLists; // @dynamic albumLists;
@property(nonatomic) long long albumToFolderOrderKey; // @dynamic albumToFolderOrderKey;
@property(nonatomic) int cachedCount; // @dynamic cachedCount;
@property(nonatomic) int cachedPhotosCount; // @dynamic cachedPhotosCount;
@property(nonatomic) int cachedVideosCount; // @dynamic cachedVideosCount;
@property(retain, nonatomic) PLManagedAsset *customKeyAsset; // @dynamic customKeyAsset;
@property(nonatomic) _Bool customSortAscending; // @dynamic customSortAscending;
@property(nonatomic) int customSortKey; // @dynamic customSortKey;
@property(retain, nonatomic) PLManagedAsset *keyAsset; // @dynamic keyAsset;
@property(retain, nonatomic) NSNumber *kind; // @dynamic kind;
@property(retain, nonatomic) PLManagedFolder *parentFolder; // @dynamic parentFolder;
@property(nonatomic) int pendingItemsCount; // @dynamic pendingItemsCount;
@property(nonatomic) int pendingItemsType; // @dynamic pendingItemsType;
@property(retain, nonatomic) PLManagedAsset *secondaryKeyAsset; // @dynamic secondaryKeyAsset;
@property(retain, nonatomic) NSDictionary *slideshowSettings; // @dynamic slideshowSettings;
@property(retain, nonatomic) PLManagedAsset *tertiaryKeyAsset; // @dynamic tertiaryKeyAsset;
@property(retain, nonatomic) NSString *title; // @dynamic title;
@property(retain, nonatomic) NSString *uuid; // @dynamic uuid;

@end

