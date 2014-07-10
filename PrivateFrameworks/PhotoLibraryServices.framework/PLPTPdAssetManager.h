/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLManagedObjectContextPTPNotificationDelegate-Protocol.h"

@class NSArray, NSFileManager, NSMutableArray, NSObject<PhotoLibraryPTPDelegate>, NSString, PLManagedObjectContext, PLPhotoLibrary;

@interface PLPTPdAssetManager : NSObject <PLManagedObjectContextPTPNotificationDelegate>
{
    NSObject<PhotoLibraryPTPDelegate> *_delegate;
    NSArray *_albumObjectIDs;
    NSString *_firstDCIMFolderServiced;
    NSMutableArray *_inflightAssets;
    PLPhotoLibrary *_photoLibrary;
    NSFileManager *fileManager;
}

@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager;
- (void)managedObjectContext:(id)arg1 libraryChangedWithInsertedAssets:(id)arg2 deletedAssets:(id)arg3 changedAssets:(id)arg4;
- (void)deleteAsset:(struct NSObject *)arg1;
- (id)infoForAsset:(struct NSObject *)arg1;
- (id)assetsInAssociation:(struct NSObject *)arg1;
- (id)associationsInAlbum:(struct NSObject *)arg1;
- (id)infoForAlbum:(struct NSObject *)arg1;
- (id)albumHandles;
@property(readonly, retain, nonatomic) PLPhotoLibrary *photoLibrary;
- (void)photoLibraryAvailabilityChangedNotification;
- (void)dealloc;
- (id)init;
- (_Bool)libraryIsAvailable;
- (_Bool)ptpCanDeleteFiles;
- (id)ptpInformationForPhotosWithPrimaryKeys:(id)arg1;
- (id)ptpInformationForPhotoWithObjectID:(id)arg1;
@property(nonatomic) NSObject<PhotoLibraryPTPDelegate> *delegate;
- (void)setPtpDelegate:(id)arg1;
- (_Bool)ptpDeletePhotoWithKey:(struct NSObject *)arg1 andExtension:(id)arg2;
- (id)ptpThumbnailForPhotoWithKey:(struct NSObject *)arg1;
- (id)ptpInformationForFilesInDirectory:(id)arg1;
- (id)_ptpInformationForAllAssets;
- (id)_allAssetObjectIDs;
- (_Bool)_isPTPAlbum:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *albumObjectIDs;
@property(readonly, retain) PLManagedObjectContext *managedObjectContext;
- (void)_performBlockAndWait:(id)arg1;
- (void)_performTransactionAndWait:(id)arg1;

@end

