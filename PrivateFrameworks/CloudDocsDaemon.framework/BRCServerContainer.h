/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BRCContainer-Protocol.h"

@class BRCAccountSession, BRCLocalContainer, CKContainer, CKDatabase, CKServerChangeToken, NSArray, NSDate, NSDictionary, NSString, PQLConnection, PQLNameInjection;

@interface BRCServerContainer : NSObject <BRCContainer>
{
    BRCAccountSession *_session;
    unsigned int _schemaVersion;
    PQLConnection *_db;
    CKContainer *_container;
    _Bool _needsSave;
    _Bool _hasRegisteredPushTopics;
    NSString *_containerID;
    NSDate *_lastSyncDownDate;
    CKServerChangeToken *_changeToken;
    CKServerChangeToken *_pendingChangeToken;
    NSString *_containerMetadataEtag;
    BRCLocalContainer *_localContainer;
    unsigned long long _clientRequestID;
    NSString *_subscriptionID;
    PQLNameInjection *_itemsTable;
    PQLNameInjection *_pendingFetchesTable;
    NSArray *_tableNames;
}

+ (PQLResultSet_67aa68bb *)containersEnumerator:(id)arg1;
+ (id)containerByID:(id)arg1 withDB:(id)arg2;
+ (_Bool)_sql_upgrade_to_version1:(id)arg1;
@property(readonly, nonatomic) NSArray *tableNames; // @synthesize tableNames=_tableNames;
@property(readonly, nonatomic) PQLNameInjection *pendingFetchesTable; // @synthesize pendingFetchesTable=_pendingFetchesTable;
@property(readonly, nonatomic) PQLNameInjection *itemsTable; // @synthesize itemsTable=_itemsTable;
@property(nonatomic) _Bool hasRegisteredPushTopics; // @synthesize hasRegisteredPushTopics=_hasRegisteredPushTopics;
@property(readonly, nonatomic) PQLConnection *db; // @synthesize db=_db;
@property(retain, nonatomic) BRCAccountSession *accountSession; // @synthesize accountSession=_session;
@property(readonly, nonatomic) NSString *subscriptionID; // @synthesize subscriptionID=_subscriptionID;
@property(readonly, nonatomic) unsigned long long clientRequestID; // @synthesize clientRequestID=_clientRequestID;
@property(nonatomic) BRCLocalContainer *localContainer; // @synthesize localContainer=_localContainer;
@property(readonly, nonatomic) NSString *containerMetadataEtag; // @synthesize containerMetadataEtag=_containerMetadataEtag;
@property(readonly, nonatomic) CKServerChangeToken *pendingChangeToken; // @synthesize pendingChangeToken=_pendingChangeToken;
@property(readonly, nonatomic) CKServerChangeToken *changeToken; // @synthesize changeToken=_changeToken;
@property(retain) NSDate *lastSyncDownDate; // @synthesize lastSyncDownDate=_lastSyncDownDate;
@property(retain, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(readonly, nonatomic) _Bool needsSave; // @synthesize needsSave=_needsSave;
- (void).cxx_destruct;
- (_Bool)validateItemsLoggingToFile:(struct __sFILE *)arg1 withDB:(id)arg2;
- (_Bool)validateStructureLoggingToFile:(struct __sFILE *)arg1 withDB:(id)arg2;
- (void)_checkResultSetIsEmpty:(id)arg1 logToFile:(struct __sFILE *)arg2 reason:(id)arg3 result:(_Bool *)arg4;
- (_Bool)dumpTablesToContext:(id)arg1 error:(id *)arg2;
- (_Bool)_dumpChildrenOfDirectory:(id)arg1 toContext:(id)arg2 visitedItems:(id)arg3 depth:(int)arg4 error:(id *)arg5;
- (unsigned long long)allocateRanksWithUnappliedRanks:(id)arg1 andKilledItems:(id)arg2;
- (unsigned long long)_allocateRanksWithUnappliedRanks:(id)arg1 andKilledItems:(id)arg2 nextRank:(unsigned long long)arg3;
- (PQLResultSet_67aa68bb *)itemsEnumeratorWithDB:(id)arg1;
- (id)itemByParentID:(id)arg1 andName:(id)arg2;
- (id)itemByItemID:(id)arg1;
- (id)versionByItemID:(id)arg1;
- (void)didSaveSubscription:(id)arg1 containerMetadataSubscriptionID:(id)arg2;
- (_Bool)deletePendingFetchRecords;
- (_Bool)savePendingFetchStructureRecordsToServerTruth;
- (_Bool)savePendingFetchContentRecordsToServerTruth;
- (PQLResultSet_67aa68bb *)_enumeratePendingFetchDeletedRecordIDs;
- (PQLResultSet_67aa68bb *)_enumeratePendingFetchRecords;
- (void)didSyncDownRequestID:(unsigned long long)arg1 serverChangeToken:(id)arg2 stateIsInconsistent:(_Bool)arg3;
- (void)resetTruthWithIsFullReset:(_Bool)arg1;
- (id)_initWithContainerID:(id)arg1 db:(id)arg2 accountSession:(id)arg3;
- (id)initFromPQLResultSet:(id)arg1 error:(id *)arg2;
- (void)setupTableName;
- (id)initWithDB:(id)arg1;
- (void)updateWithPlist:(id)arg1;
@property(readonly, nonatomic) NSDictionary *plist;
- (_Bool)upgradeTables;
- (_Bool)saveToDB;
@property(readonly, nonatomic) NSString *zoneName;
@property(readonly, nonatomic) CKDatabase *cloudDatabase;
@property(readonly, nonatomic) CKContainer *container;
@property(readonly, nonatomic) NSString *pushTopic;
@property(readonly, nonatomic) NSString *prefixedContainerID;
@property(readonly, nonatomic) NSString *containerIdentifier;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

