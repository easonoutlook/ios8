/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SSDownloadManagerObserver-Protocol.h"

@class NSCountedSet, NSHashTable, NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, SSAppPurchaseHistoryDatabase, SSDownloadManager, SSSoftwareUpdatesStore;

@interface SKUIItemStateCenter : NSObject <SSDownloadManagerObserver>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _appInstallRestricted;
    SSSoftwareUpdatesStore *_appUpdatesStore;
    BOOL _canAccessAppUpdates;
    BOOL _canAccessPurchaseHistory;
    SSDownloadManager *_downloadManager;
    NSMutableArray *_finishLoadBlocks;
    long long _gratisState;
    long long _loadCount;
    NSMutableDictionary *_itemStates;
    NSObject<OS_dispatch_queue> *_mediaLibraryQueue;
    NSMutableArray *_mediaLibraries;
    NSCountedSet *_observedLibraryItems;
    NSObject<OS_dispatch_queue> *_observerQueue;
    NSHashTable *_observers;
    long long _parentalControlsRank;
    SSAppPurchaseHistoryDatabase *_purchaseHistoryDatabase;
    BOOL _runningInStoreDemoMode;
}

+ (id)defaultCenter;
- (void).cxx_destruct;
- (id)_setStateFlag:(unsigned long long)arg1 forOnlyItemsWithIdentifiers:(id)arg2 sendNotification:(_Bool)arg3;
- (id)_setStateFlag:(unsigned long long)arg1 forItemsWithIdentifiers:(id)arg2 sendNotification:(_Bool)arg3;
- (void)_setPurchaseHistoryItemsWithIdentifiers:(id)arg1;
- (void)_setInstalledItems:(id)arg1;
- (void)_setGratisIdentifiers:(id)arg1 error:(id)arg2;
- (void)_setDownloads:(id)arg1;
- (void)_setAvailableUpdatesWithUpdates:(id)arg1 decrementLoadCount:(_Bool)arg2;
- (void)_replacePurchasingItem:(id)arg1 withDownloadIDs:(id)arg2;
- (id)_removeState:(unsigned long long)arg1 forItemIdentifier:(id)arg2;
- (void)_removePurchasingItemsForPurchases:(id)arg1;
- (void)_reloadSoftwareLibrary;
- (void)_reloadPurchaseHistory;
- (void)_reloadMediaLibraryStateForItems:(id)arg1;
- (void)_reloadDownloadManager;
- (void)_reloadAppUpdatesStore;
- (id)_purchaseHistoryDatabase;
- (void)_performPurchases:(id)arg1 withClientContext:(id)arg2 completionBlock:(id)arg3;
- (void)_notifyObserversOfPurchasesResponses:(id)arg1;
- (void)_notifyObserversOfStateChanges:(id)arg1;
- (void)_notifyObserversOfRestrictionsChange;
- (void)_notifyObserversOfStateChange:(id)arg1;
- (id)_newPurchasesWithItems:(id)arg1;
- (id)_newPurchasesWithBundleItem:(id)arg1 bundleOffer:(id)arg2;
- (id)_newPurchaseWithItem:(id)arg1 offer:(id)arg2;
- (void)_fireFinishLoadBlocksIfNecessary;
- (void)_enumerateAvailableItemsForLibraryItems:(id)arg1 usingBlock:(id)arg2;
- (id)_appUpdatesStore;
- (id)_addState:(unsigned long long)arg1 forItemIdentifier:(id)arg2;
- (void)_addMediaLibrary:(id)arg1;
- (void)_updatesStoreChangeNotification:(id)arg1;
- (void)_restrictionsChangedNotification:(id)arg1;
- (void)_mediaLibraryDidChangeNotification:(id)arg1;
- (void)_reloadStateForObservedMediaLibraryItems;
- (void)_applicationDidEnterBackgroundNotification:(id)arg1;
- (void)downloadManagerDownloadsDidChange:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)reloadFromServerWithCompletionBlock:(id)arg1;
- (void)performActionForLibraryItem:(id)arg1;
- (void)getUpdatesWithCompletionBlock:(id)arg1;
- (void)endObservingLibraryItems:(id)arg1;
- (void)beginObservingLibraryItems:(id)arg1;
@property(readonly) SSSoftwareUpdatesStore *appUpdatesStore;
- (void)addDownloads:(id)arg1;
- (id)stateForItemWithIdentifier:(long long)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeMediaLibrary:(id)arg1;
- (void)reloadMediaLibrary:(id)arg1;
- (void)reloadGratisEligibilityWithBundleIdentifiers:(id)arg1 clientContext:(id)arg2;
- (void)reloadFromServer;
- (void)purchaseItems:(id)arg1 withClientContext:(id)arg2 completionBlock:(id)arg3;
- (void)purchaseItems:(id)arg1 withCompletionBlock:(id)arg2;
- (void)purchaseItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id)arg4;
- (id)performActionForItem:(id)arg1 offer:(id)arg2 clientContext:(id)arg3 completionBlock:(id)arg4;
- (id)performActionForItem:(id)arg1 clientContext:(id)arg2 completionBlock:(id)arg3;
- (id)performActionForItem:(id)arg1 withCompletionBlock:(id)arg2;
@property(readonly) long long parentalControlsRank;
- (id)metricsActionTypeForItem:(id)arg1;
@property(readonly, getter=isRunningInStoreDemoMode) _Bool runningInStoreDemoMode;
- (_Bool)isItemRestrictedWithParentalControlsRank:(long long)arg1;
@property(readonly, nonatomic, getter=isGratisEligible) _Bool gratisEligible;
@property(readonly, getter=isApplicationInstallRestricted) _Bool applicationInstallRestricted;
- (void)finishLoadingWithCompletionBlock:(id)arg1;
- (void)cancelDownloadForItemWithIdentifier:(long long)arg1;
- (void)addObserver:(id)arg1;
- (void)addMediaLibrary:(id)arg1;
- (void)dealloc;
- (id)init;

@end

