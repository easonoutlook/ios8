/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ABPredicateDelegate-Protocol.h"
#import "BBDataProviderManagerDelegate-Protocol.h"
#import "BBNotificationBehaviorUtilitiesServerProtocol-Protocol.h"
#import "BBServerConduitServerInterface-Protocol.h"
#import "BBSettingsGatewayServerInterface-Protocol.h"
#import "BBSyncServiceDelegate-Protocol.h"
#import "NSXPCListenerDelegate-Protocol.h"

@class ABFavoritesListManager, BBApplicationLauncher, BBDataProviderManager, BBSyncService, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_source>, NSSet, NSString, NSXPCListener;

@interface BBServer : NSObject <ABPredicateDelegate, BBDataProviderManagerDelegate, BBNotificationBehaviorUtilitiesServerProtocol, BBServerConduitServerInterface, BBSettingsGatewayServerInterface, NSXPCListenerDelegate, BBSyncServiceDelegate>
{
    NSMutableDictionary *_bulletinRequestsByID;
    NSMutableDictionary *_sectionInfoByID;
    NSSet *_restrictedSectionIDs;
    unsigned long long _currentSystemState;
    int _privilegedAddressBookGroupRecordID;
    NSMutableDictionary *_lastContactTimeForSender;
    unsigned long long _activeBehaviorOverrides;
    unsigned long long _privilegedSenderTypes;
    _Bool _isRunning;
    BBDataProviderManager *_dataProviderManager;
    NSMutableSet *_observers;
    NSMutableSet *_observersByFeed[9];
    NSMutableArray *_observerGateways;
    NSMutableDictionary *_observerGatewaysByName;
    NSMutableArray *_observerGatewayEnumerators;
    NSMutableSet *_settingsGatewayConnections;
    NSMutableDictionary *_activeSectionIDsByCategory;
    NSMutableDictionary *_sortedSectionIDsByCategory;
    long long _sectionOrderRule;
    NSMutableDictionary *_bulletinsByID;
    NSMutableDictionary *_bulletinIDsBySectionID;
    NSMutableDictionary *_noticeBulletinIDsBySectionID;
    NSMutableDictionary *_todayBulletinIDsBySectionID;
    NSMutableDictionary *_futureBulletinIDsBySectionID;
    NSArray *_behaviorOverrides;
    long long _behaviorOverrideStatus;
    NSDate *_behaviorOverrideStatusEffectiveTime;
    NSObject<OS_dispatch_source> *_behaviorOverridesTimer;
    NSDate *_behaviorOverridesWakeTime;
    NSMutableArray *_behaviorOverridesChangeClients;
    NSMutableArray *_behaviorOverridesEffectiveWhileUnlockedChangeClients;
    NSMutableArray *_behaviorOverrideStatusChangeClients;
    NSMutableArray *_activeBehaviorOverrideTypesChangeSettingsGateways;
    NSMutableArray *_activeBehaviorOverrideTypesChangeClients;
    _Bool _behaviorOverridesEffectiveWhileUnlocked;
    NSString *_privilegedAddressBookGroupName;
    NSMutableArray *_privilegedSenderFilteringStateChangeClients;
    _Bool _privilegedSenderFilteringNecessary;
    NSMutableArray *_privilegedSenderChangeSettingsGateways;
    NSMutableArray *_privilegedSenderTypesChangeSettingsGateways;
    NSMutableArray *_expiringBulletinIDs;
    NSObject<OS_dispatch_source> *_expirationTimer;
    NSMutableArray *_eventBasedExpiringBulletinIDs;
    NSDate *_nextScheduledExpirationTimerFireDate;
    NSMutableDictionary *_clearedSections;
    NSMutableDictionary *_dataProviderFactoriesBySection;
    int _serverIsRunningToken;
    int _demo_lockscreen_token;
    BBSyncService *_syncService;
    NSXPCListener *_observerListener;
    NSMutableSet *_utilitiesConnections;
    NSXPCListener *_utilitiesListener;
    NSXPCListener *_conduitListener;
    NSMutableSet *_systemStateConnections;
    NSXPCListener *_systemStateListener;
    NSXPCListener *_settingsListener;
    NSMutableSet *_suspendedConnections;
    BBApplicationLauncher *_applicationLauncher;
    void *_addressBook;
    ABFavoritesListManager *_favoritesListManager;
    _Bool _entryFound;
}

+ (void)initialize;
+ (id)behaviorUtilitiesServerInterface;
- (id)syncService:(id)arg1 universalSectionIdentifierForSectionIdentifier:(id)arg2;
- (_Bool)syncService:(id)arg1 shouldAbortDelayedDismissalForBulletin:(id)arg2;
- (void)syncService:(id)arg1 receivedDismissalDictionaries:(id)arg2 dismissalIDs:(id)arg3 inSection:(id)arg4 forFeeds:(unsigned long long)arg5;
- (void)demo_lockscreen:(unsigned long long)arg1;
- (void)_writeBehaviorOverrides;
- (void)_loadBehaviorOverrides;
- (void)_writeSectionInfo;
- (void)_writeSectionOrder;
- (void)_loadSavedSectionInfo;
- (void)_loadSavedSectionOrderAndRule;
- (id)_behaviorOverridesPath;
- (id)_sectionInfoPath;
- (id)_sectionOrderPath;
- (void)_writeClearedSections;
- (void)_loadClearedSections;
- (id)_clearedSectionsPath;
- (void)_ensureDataDirectoryExists;
- (id)_dataDirectoryPath;
- (void)_removeDataProvider:(id)arg1 forFactory:(id)arg2;
- (void)_addDataProvider:(id)arg1 forFactory:(id)arg2;
- (void)_removeActiveSectionID:(id)arg1;
- (void)_removeActiveSectionID:(id)arg1 fromCategory:(long long)arg2;
- (id)_bulletinsForSectionID:(id)arg1 inFeeds:(unsigned long long)arg2;
- (void)_addActiveSectionID:(id)arg1;
- (void)_addActiveSectionID:(id)arg1 toCategory:(long long)arg2;
- (void)_addSectionID:(id)arg1 toSortedSectionIDsForCategory:(long long)arg2;
- (void)dpManager:(id)arg1 removeDataProviderSectionID:(id)arg2;
- (void)dpManager:(id)arg1 addDataProviderFactory:(id)arg2 withSectionInfo:(id)arg3;
- (void)dpManager:(id)arg1 addDataProvider:(id)arg2 withSectionInfo:(id)arg3;
- (id)dpManager:(id)arg1 sectionInfoForSectionID:(id)arg2;
- (id)dataProviderForSectionID:(id)arg1;
- (void)_updateSectionInfoForSectionID:(id)arg1 handler:(id)arg2;
- (void)_saveUpdatedSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_updateClearedInfoForSectionID:(id)arg1 handler:(id)arg2;
- (void)_saveUpdatedClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_setClearedInfo:(id)arg1 forSectionID:(id)arg2;
- (id)_clearedInfoForSectionID:(id)arg1;
- (unsigned long long)_filtersForSectionID:(id)arg1;
- (void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3 alwaysToLockScreen:(_Bool)arg4;
- (void)_publishBulletinRequest:(id)arg1 forSectionID:(id)arg2 forDestinations:(unsigned long long)arg3;
- (void)_reloadReloadSectionInfoForSectionID:(id)arg1;
- (void)_updateSectionParametersForDataProvider:(id)arg1;
- (void)_reloadSectionParametersForSectionID:(id)arg1;
- (void)_updateAllBulletinsForDataProvider:(id)arg1;
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProvider:(id)arg2 enabledSectionIDs:(id)arg3;
- (void)_updateAllBulletinsForDataProviderIfSectionIsEnabled:(id)arg1;
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 forDataProviderIfSectionIsEnabled:(id)arg2;
- (void)_updateBulletinsInFeed:(unsigned long long)arg1 ifSectionIsEnabled:(id)arg2;
- (id)_enabledSectionIDsForDataProvider:(id)arg1;
- (_Bool)_verifyBulletinRequest:(id)arg1 forDataProvider:(id)arg2;
- (void)_publishBulletinsForAllDataProviders;
- (void)_loadDataProvidersAndSettings;
- (void)_migrateSectionInfo;
- (void)_migrateSectionOrder;
- (void)_migrateLoadedData;
- (id)_sectionIDsToMigrate;
- (void)weeAppWithBundleID:(id)arg1 getHiddenFromUser:(id)arg2;
- (void)weeAppWithBundleID:(id)arg1 setHiddenFromUser:(_Bool)arg2;
- (void)sendMessageToDataProviderSectionID:(id)arg1 name:(id)arg2 userInfo:(id)arg3;
- (void)setActiveBehaviorOverrideChangeUpdatesEnabled:(_Bool)arg1 forClient:(id)arg2;
- (void)setNotificationPresentationFilteringStateChangeUpdatesEnabled:(_Bool)arg1 forClient:(id)arg2;
- (void)getShouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2 handler:(id)arg3;
- (void)setBehaviorOverridesEffectiveWhileUnlocked:(_Bool)arg1 source:(unsigned long long)arg2;
- (void)setActiveBehaviorOverrideTypesChangeUpdatesEnabled:(_Bool)arg1;
- (void)setBehaviorOverrideStatusChangeUpdatesEnabled:(_Bool)arg1;
- (void)setBehaviorOverridesEffectiveWhileUnlockedChangeUpdatesEnabled:(_Bool)arg1;
- (void)setBehaviorOverridesChangeUpdatesEnabled:(_Bool)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordIDChangeUpdatesEnabled:(_Bool)arg1;
- (void)setPrivilegedSenderAddressBookGroupRecordID:(int)arg1 name:(id)arg2 source:(unsigned long long)arg3;
- (void)setPrivilegedSenderTypesChangeUpdatesEnabled:(_Bool)arg1;
- (void)setPrivilegedSenderTypes:(unsigned long long)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverrideStatus:(long long)arg1 source:(unsigned long long)arg2;
- (void)setBehaviorOverrides:(id)arg1 source:(unsigned long long)arg2;
- (void)_clearBehaviorOverridesTimer;
- (void)_updateBehaviorOverridesFromSource:(unsigned long long)arg1;
- (void)_checkPrivilegedSenderFilteringState;
- (void)_sendPrivilegedSenderAddressBookGroupRecordIDChangedFromSource:(unsigned long long)arg1;
- (void)_privilegedSenderAddressBookGroupRecordIDChangedFromSource:(unsigned long long)arg1;
- (void)_sendPrivilegedSenderTypesChangedFromSource:(unsigned long long)arg1;
- (void)_privilegedSenderTypesChangedFromSource:(unsigned long long)arg1;
- (void)_behaviorOverrideStatusChangedFromSource:(unsigned long long)arg1;
- (void)_behaviorOverrideTypesChangedFromSource:(unsigned long long)arg1;
- (void)_sendUpdateBehaviorOverrideTypesFromSource:(unsigned long long)arg1;
- (unsigned long long)_behaviorOverrideState;
- (unsigned long long)_activeBehaviorOverrideTypesConsideringSystemState:(_Bool)arg1;
- (void)_noteSystemStateChanged;
- (unsigned long long)_adjustedBehaviorOverrideTypes:(unsigned long long)arg1 basedOnSystemState:(unsigned long long)arg2;
- (void)_setBehaviorOverridesTimer;
- (void)setSectionInfo:(id)arg1 forSectionID:(id)arg2 inCategory:(long long)arg3;
- (unsigned long long)effectivePushSettingsForSectionInfo:(id)arg1;
- (void)setOrderedSectionIDs:(id)arg1 forCategory:(long long)arg2;
- (void)setSectionOrderRule:(long long)arg1;
- (void)getBehaviorOverridesEffectiveWhileUnlockedWithHandler:(id)arg1;
- (void)getPrivilegedSenderAddressBookGroupRecordIDAndNameWithHandler:(id)arg1;
- (void)getUniversalSectionIDForSectionID:(id)arg1 withHandler:(id)arg2;
- (id)universalSectionIDForSectionID:(id)arg1;
- (void)getPrivilegedSenderTypesWithHandler:(id)arg1;
- (void)getBehaviorOverridesEnabledWithHandler:(id)arg1;
- (void)getBehaviorOverridesWithHandler:(id)arg1;
- (void)getSectionInfoForCategory:(long long)arg1 withHandler:(id)arg2;
- (void)observer:(id)arg1 getActiveAlertBehaviorOverridesWithHandler:(id)arg2;
- (void)observer:(id)arg1 requestFutureBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 requestTodayBulletinsForSectionID:(id)arg2;
- (void)observer:(id)arg1 requestNoticesBulletinsForSectionID:(id)arg2;
- (id)_updatesForObserver:(id)arg1 bulletinIDs:(id)arg2;
- (void)observer:(id)arg1 getSectionInfoForCategory:(long long)arg2 withHandler:(id)arg3;
- (void)observer:(id)arg1 removeBulletins:(id)arg2 inSection:(id)arg3 fromFeeds:(unsigned long long)arg4;
- (void)observer:(id)arg1 clearBulletinIDs:(id)arg2 inSection:(id)arg3;
- (void)observer:(id)arg1 clearSection:(id)arg2;
- (void)observer:(id)arg1 finishedWithBulletinID:(id)arg2 transactionID:(unsigned long long)arg3;
- (void)observer:(id)arg1 handleResponse:(id)arg2;
- (void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 asLightsAndSirensGateway:(id)arg3 priority:(unsigned long long)arg4;
- (void)observer:(id)arg1 setObserverFeed:(unsigned long long)arg2 attachToLightsAndSirensGateway:(id)arg3;
- (void)_storeObserver:(id)arg1 forFeed:(unsigned long long)arg2;
- (void)getAttachmentAspectRatioForBulletinID:(id)arg1 withHandler:(id)arg2;
- (void)getAttachmentPNGDataForBulletinID:(id)arg1 sizeConstraints:(id)arg2 withHandler:(id)arg3;
- (void)getSectionParametersForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getSortDescriptorsForSectionID:(id)arg1 withHandler:(id)arg2;
- (void)getSectionOrderRuleWithHandler:(id)arg1;
- (void)ping:(id)arg1;
- (void)_scheduleExpirationForBulletin:(id)arg1;
- (void)_expireBulletins;
- (void)_expireBulletinsDueToSystemEvent:(unsigned long long)arg1;
- (unsigned long long)_indexForNewDate:(id)arg1 inBulletinIDArray:(id)arg2 sortedAscendingByDateForKey:(id)arg3;
- (id)_bulletinIDsInSortedArray:(id)arg1 withDateForKey:(id)arg2 beforeCutoff:(id)arg3;
- (void)_expireBulletinsAndRescheduleTimerIfNecessary;
- (id)_nextExpireBulletinsDate;
- (void)_scheduleTimerForDate:(id)arg1;
- (void)_clearExpirationTimer;
- (void)_handleSignificantTimeChange;
- (void)_handleSystemWake;
- (void)_handleSystemSleep;
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2;
- (void)_setSectionInfo:(id)arg1 forSectionID:(id)arg2 inCategory:(long long)arg3;
- (_Bool)_didNotificationCenterSettingsChangeWithSectionInfo:(id)arg1 replacingSectionInfo:(id)arg2;
- (void)_clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(_Bool)arg2;
- (id)_sectionInfoArrayForCategory:(long long)arg1 effective:(_Bool)arg2;
- (id)_sectionInfoForSectionID:(id)arg1 effective:(_Bool)arg2;
- (id)_effectiveSectionInfoForSectionInfo:(id)arg1;
- (void)_sortSectionIDs:(id)arg1 usingGuideArray:(id)arg2;
- (void)_sortSectionIDs:(id)arg1 usingOrder:(id)arg2;
- (id)_sortedActiveSectionsForCategory:(long long)arg1;
- (id)_sortedSectionIDsForCategory:(long long)arg1;
- (id)activeSectionIDsForDefaultCategory;
- (id)_activeSectionIDsForCategory:(long long)arg1;
- (id)_defaultSectionOrderForCategory:(long long)arg1 topLevelCollection:(id)arg2;
- (id)_defaultSectionOrders;
- (id)_allBulletinsForSectionID:(id)arg1;
- (id)_bulletinsForIDs:(id)arg1;
- (unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(_Bool)arg3;
- (id)_applicableSectionInfosForBulletin:(id)arg1 inSection:(id)arg2;
- (unsigned long long)_feedsForBulletin:(id)arg1 destinations:(unsigned long long)arg2;
- (void)_removeSection:(id)arg1;
- (void)_clearSection:(id)arg1;
- (void)_clearBulletinIDs:(id)arg1 forSectionID:(id)arg2 shouldSync:(_Bool)arg3;
- (void)clearBulletinIDIfPossible:(id)arg1 rescheduleExpirationTimer:(_Bool)arg2;
- (void)_clearBulletinIDs:(id)arg1 andAllOtherBulletins:(_Bool)arg2 forSectionID:(id)arg3 shouldSync:(_Bool)arg4;
- (void)_removeBulletin:(id)arg1 shouldSync:(_Bool)arg2;
- (void)_removeBulletin:(id)arg1 rescheduleTimerIfAffected:(_Bool)arg2 shouldSync:(_Bool)arg3;
- (void)_modifyBulletin:(id)arg1;
- (void)_addBulletin:(id)arg1;
- (void)_sendRemoveBulletin:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(_Bool)arg3;
- (void)_sendRemoveBulletins:(id)arg1 toFeeds:(unsigned long long)arg2 shouldSync:(_Bool)arg3;
- (void)_sendModifyBulletin:(id)arg1 toFeeds:(unsigned long long)arg2;
- (void)_sendAddBulletin:(id)arg1 toFeeds:(unsigned long long)arg2;
- (id)_observersForFeeds:(unsigned long long)arg1;
- (void)_sendUpdateSectionOrderRule;
- (void)_sendUpdateSectionOrderForCategory:(long long)arg1;
- (id)_observersForCategory:(long long)arg1;
- (void)_sendUpdateSectionInfo:(id)arg1 inCategory:(long long)arg2;
- (void)_removeObserver:(id)arg1;
- (void)_addObserver:(id)arg1;
- (void)_resumeAllSuspendedConnections;
- (void)_removeSuspendedConnection:(id)arg1;
- (void)_addSuspendedConnection:(id)arg1;
- (id)sortDescriptorsForSectionID:(id)arg1;
- (unsigned long long)userBulletinCapForSectionID:(id)arg1;
- (id)allBulletinIDsForSectionID:(id)arg1;
- (id)futureBulletinIDsForSectionID:(id)arg1;
- (id)carBulletinIDsForSectionID:(id)arg1;
- (id)todayBulletinIDsForSectionID:(id)arg1;
- (id)noticesBulletinIDsForSectionID:(id)arg1;
- (id)bulletinIDsForSectionID:(id)arg1 inFeed:(unsigned long long)arg2;
- (void)removeBulletinID:(id)arg1 fromFutureSection:(id)arg2;
- (void)removeBulletinID:(id)arg1 fromTodaySection:(id)arg2;
- (void)removeBulletinID:(id)arg1 fromNoticesSection:(id)arg2;
- (void)removeBulletinID:(id)arg1 fromSection:(id)arg2 inFeed:(unsigned long long)arg3;
- (id)_mapForFeed:(unsigned long long)arg1;
- (void)withdrawBulletinID:(id)arg1;
- (void)publishBulletin:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(_Bool)arg3;
- (void)_removeUtilityConnection:(id)arg1;
- (void)_addUtilityConnection:(id)arg1;
- (void)_removeSystemStateConnection:(id)arg1;
- (void)_addSystemStateConnection:(id)arg1;
- (void)_removeSettingsGatewayConnection:(id)arg1;
- (void)_addSettingsGatewayConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (_Bool)isRunning;
- (void)dealloc;
- (id)init;
- (void)forEachObserverFeedSetInGateways:(id)arg1;
- (void)withdrawBulletinRequestsWithPublisherBulletinID:(id)arg1 forSectionID:(id)arg2;
- (void)withdrawBulletinRequestsWithRecordID:(id)arg1 forSectionID:(id)arg2;
- (void)updateSection:(id)arg1 inFeed:(unsigned long long)arg2 withBulletinRequests:(id)arg3;
- (void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2 alwaysToLockScreen:(_Bool)arg3;
- (void)publishBulletinRequest:(id)arg1 destinations:(unsigned long long)arg2;
- (void)_updateShowsMessagePreviewForBulletin:(id)arg1;
- (void)deliverResponse:(id)arg1;
- (void)noteFinishedWithBulletinID:(id)arg1;
- (_Bool)_isSectionIDRestricted:(id)arg1;
- (id)_removalsForNoticesSection:(id)arg1 addition:(id)arg2 keepAddition:(_Bool *)arg3;
- (void)_assignIDToBulletinRequest:(id)arg1 checkAgainstBulletins:(id)arg2;
- (void)_assignIDToBulletinRequest:(id)arg1;
- (id)_bulletinRequestsForIDs:(id)arg1;
- (_Bool)predicateShouldContinue:(id)arg1 afterFindingRecord:(void *)arg2;
- (_Bool)predicateShouldContinue:(id)arg1;
- (_Bool)isPrivilegedSenderFilteringNecessaryForActiveBehaviorOverrides:(unsigned long long)arg1 privilegedSenderTypes:(unsigned long long)arg2;
- (_Bool)shouldPresentNotificationOfType:(int)arg1 fromSenderWithDestinationID:(id)arg2;
- (_Bool)_doesAddressBookContainDestinationID:(id)arg1;
- (_Bool)_doesFavoritesListContainDestinationID:(id)arg1;
- (_Bool)_checkPersistentSenderStatusForDestinationID:(id)arg1 notificationType:(int)arg2;
- (_Bool)_doesPrivilegedAddressBookGroupContainDestinationID:(id)arg1;
- (_Bool)_isDestinationID:(id)arg1 inAddressBookGroupWithRecordID:(int)arg2;
- (id)_addressBookPredicateForDestinationID:(id)arg1;
- (id)_favoritesListManager;
- (void *)_addressBook;
- (void)noteRestrictedSectionIDsDidChange:(id)arg1;
- (void)noteOccurrenceOfEvent:(unsigned long long)arg1;
- (void)noteChangeOfState:(unsigned long long)arg1 newValue:(_Bool)arg2;

@end

