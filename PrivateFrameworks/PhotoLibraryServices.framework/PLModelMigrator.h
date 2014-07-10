/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSFileManager, PLPhotoLibrary, PLXPCTransaction;

@interface PLModelMigrator : NSObject
{
    double startTime;
    NSFileManager *_fileManager;
    PLXPCTransaction *_transaction;
    PLPhotoLibrary *_photoLibrary;
    long long _photoLibraryOnce;
    NSDictionary *_syncedPropertiesByUUID;
}

+ (_Bool)_repairSingletonObjectsInDatabaseUsingContext:(id)arg1 error:(id *)arg2;
+ (void)repairSingletonObjectsInDatabaseWithCompletionHandler:(id)arg1;
+ (_Bool)_repairSingletonObjectsInDatabaseForOfflineStore:(id)arg1;
+ (_Bool)_deletePhotoCloudSharingMetadataInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (_Bool)_deletePhotoStreamAssetReferencesInStore:(id)arg1;
+ (_Bool)_deleteCloudSharedAndSyncedAssetReferencesInStore:(id)arg1;
+ (_Bool)_batchOfflineDeleteFromDatabaseOnlyAssets:(id)arg1 inManagedObjectContext:(id)arg2 error:(id *)arg3;
+ (_Bool)_fixupEditorBundleIDsInStore:(id)arg1;
+ (_Bool)_forceDupeAnalysis;
+ (_Bool)_moveMyPhotoStreamToAlbumsListInStore:(id)arg1;
+ (_Bool)_fixupAssetPersistence:(id)arg1;
+ (_Bool)_fixVideoDimensionsInStore:(id)arg1;
+ (_Bool)_populateHasAdjustmentsForAssetsInStore:(id)arg1;
+ (_Bool)_generateAddedDateForAssetsInStore:(id)arg1;
+ (_Bool)_migrateLegacySLMFilesInStore:(id)arg1;
+ (_Bool)_forceAlbumMetadataToDiskInStore:(id)arg1;
+ (_Bool)_fixupUnmanagedAdjustmentInStore:(id)arg1;
+ (_Bool)_populateUnmanagedAdjustmentsFromFileSystemInManagedObjectContext:(id)arg1;
+ (_Bool)_setupRootFolderInStore:(id)arg1;
+ (_Bool)_addLocationHashesToAssets:(id)arg1;
+ (_Bool)_addAlbumOrderKeys:(id)arg1;
+ (_Bool)_addUUIDsToCollectionLists:(id)arg1 skipMomentLists:(_Bool)arg2;
+ (_Bool)_rebuildAllMomentsInStore:(id)arg1;
+ (_Bool)_fixupSyncedAssetAttributesInStore:(id)arg1;
+ (_Bool)_resetDupesAnalysisInStore:(id)arg1 resetHashes:(_Bool)arg2;
+ (_Bool)_fixupKeyAssetsForAlbumsInStore:(id)arg1;
+ (_Bool)_fixupAlbumOrderInAlbumListInStore:(id)arg1;
+ (_Bool)_fixupImportedAssetsInStore:(id)arg1;
+ (_Bool)_fixupImportedEventsInStore:(id)arg1;
+ (_Bool)_updateKindSubtypeForPanoramaPhotosNeedsReset:(_Bool)arg1 inStore:(id)arg2;
+ (_Bool)_initiateLightweightReimportOfAllPhotoCloudSharingMetadataInStore:(id)arg1;
+ (_Bool)_populateLightweightReimportDirectoryWithPhotoCloudSharingAssetsInManagedObjectContext:(id)arg1 error:(id *)arg2;
+ (_Bool)_postProcessFromVersion6006Store:(id)arg1;
+ (_Bool)_invalidateSearchIndexDataInStore:(id)arg1;
+ (_Bool)_populateDurationAndHDRTypeFromAdditionalAssetAttributesInStore:(id)arg1;
+ (_Bool)_migrateTransformableUUIDsToStringsInStore:(id)arg1;
+ (_Bool)isPostProcessingLightweightMigration;
+ (_Bool)processWelterweightMigrationStageOnStore:(id)arg1 fromVersion:(int)arg2 toVersion:(int)arg3 migrationContext:(id)arg4;
+ (_Bool)postProcessMigratedStore:(id)arg1 fromVersion:(int)arg2;
+ (_Bool)attemptLightweightMigrationFromVersion:(id)arg1 onStore:(id)arg2 withMetadata:(id)arg3 orStoreURL:(id)arg4 options:(id)arg5 coordinator:(id)arg6;
+ (id)managedObjectModelForLightweightMigrationStageWithURL:(id)arg1;
+ (id)nextRequiredStagedMigrationVersionAfterVersion:(id)arg1;
+ (_Bool)didCreateSqliteErrorFileForLightweightMigration;
+ (void)_applySyncedProperties:(id)arg1 toAsset:(id)arg2;
+ (id)_newSyncedPropertiesByAssetUUIDs:(_Bool)arg1;
+ (id)_dateWithiTunesTimeInterval:(double)arg1;
+ (void)_forceCreateIndexOnOrderedAssets:(_Bool)arg1;
+ (_Bool)shouldRebuildDCIMSubDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 assetsKind:(int *)arg3;
+ (void)forceImportFileSystemDataIntoDatabase;
+ (void)setDidImportFileSystemAssets:(_Bool)arg1;
+ (id)modelMigrator;
+ (id)sharedModelMigratorForImport;
+ (id)eventNameFromDate:(id)arg1;
+ (id)generateAssetUUIDForPathPlist;
+ (void)archiveAssetUUIDForPathPlist:(id)arg1;
+ (id)archivedAssetUUIDForURL:(id)arg1;
+ (id)assetUUIDForPathPlistURL;
+ (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id)arg3;
+ (_Bool)didImportFileSystemAssets;
+ (void)dontImportFileSystemDataIntoDatabase;
+ (_Bool)restartingAfterOTAMigration;
+ (_Bool)restartingAfterRestoreFromBackup;
+ (long long)secondsNeededToCleanupModelAfteriTunesRestore;
+ (void)recalculateCachedCounts;
+ (void)repairPotentialModelCorruption;
+ (void)cleanupModelAfterRestoreFromiTunes;
+ (void)loadFileSystemDataIntoDatabase;
+ (void)waitForDataMigratorToExit;
+ (void)_createDatabase;
+ (void)createDatabase;
+ (int)checkForceMigrationTypeRequestedAndGetOptionalSourceModelVersion:(id *)arg1;
+ (id)descriptionForForceMigrationType:(int)arg1;
+ (_Bool)_verifyCloudAssetsLocalAvailability:(id)arg1;
+ (_Bool)debug_resetThumbnailsAndInitiateRebuildRequest;
+ (_Bool)_resetThumbnailsAndInitiateRebuildRequest;
+ (_Bool)postProcessThumbnailsOnly;
+ (void)validateCurrentModelVersion;
+ (int)currentModelVersion;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
- (id)importFileSystemImportAssets:(id)arg1 forceUpdate:(_Bool)arg2;
- (id)_syncedPropertiesForAssetUUID:(id)arg1;
- (void)importAfterCrash:(id)arg1 dictionariesByPhotoStreamID:(id)arg2 completionBlock:(id)arg3;
- (void)collectContentsOfDirectoryURL:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4;
- (void)collectFileURLs:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 assetsKind:(int)arg4 testCreationDates:(_Bool)arg5;
- (void)_importAllDCIMAssets;
- (id)_orderedAssetsToImportCameraRollOnly:(_Bool)arg1;
- (_Bool)shouldRebuildDCIMDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isPhotoStream:(_Bool *)arg3 cameraRollOnly:(_Bool)arg4;
- (void)resumePhotoStreams;
- (void)pausePhotoStreams;
- (void)dontImportFileSystemDataIntoDatabase;
- (void)recalculateCachedCountsWithSemaphore:(id)arg1;
- (void)repairPotentialModelCorruption;
- (void)cleanupModelAfterRestoreFromiTunes;
- (long long)secondsNeededToCleanupModelAfteriTunesRestore;
- (void)loadFileSystemDataIntoDatabase;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (void)dealloc;
- (id)init;
- (id)initWithImplicitTransaction:(_Bool)arg1;

@end

