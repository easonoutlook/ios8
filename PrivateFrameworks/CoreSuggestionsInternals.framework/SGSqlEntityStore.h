/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, SGSqliteDatabase, SGSuggestHistory;

@interface SGSqlEntityStore : NSObject
{
    SGSqliteDatabase *_db;
    NSString *_path;
    SGSuggestHistory *_history;
    _Bool _identityStoreDirty;
}

+ (id)sqlStoreWithFilename:(id)arg1;
+ (id)sqlStoreInMemory;
+ (id)defaultStore;
+ (id)defaultPath;
- (void).cxx_destruct;
- (id)duplicateKeysMatchingAnyTag:(id)arg1;
- (id)duplicateKeysMatchingEmailAddressPrefix:(id)arg1;
- (_Bool)isLocked;
- (void)unlock;
- (void)lock;
- (void)unpinByRecordId:(id)arg1;
- (void)pinByRecordId:(id)arg1;
- (void)deleteMessagesByDuplicateKey:(id)arg1;
- (void)deleteEntitiesByDuplicateKey:(id)arg1;
- (void)deleteMessages:(id)arg1;
- (void)markMessagesFound:(id)arg1;
- (void)pruneLostMessagesWithSource:(id)arg1 count:(unsigned long long)arg2;
- (void)markMessagesLost:(id)arg1;
- (void)updateMessages:(id)arg1 state:(unsigned long long)arg2;
- (id)loadMessagesToRefresh;
- (id)confirmedFieldValuesForEntity:(id)arg1;
- (id)recordIdForKey:(id)arg1;
- (id)loadEventByRecordId:(id)arg1;
- (id)loadEventByKey:(id)arg1;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 limitTo:(unsigned long long)arg3 additionalWhereClause:(id)arg4 options:(unsigned int)arg5 onPrep:(id)arg6;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 limitTo:(unsigned long long)arg3;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5;
- (id)suggestEventsStartingAt:(double)arg1 endingAt:(double)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4;
- (id)loadCuratedEventsStartingAt:(double)arg1;
- (id)_filterOutAllButAcceptedWithUpdatedFields:(id)arg1;
- (id)_filterOutNotActedOnEvents:(id)arg1;
- (id)_filterOutActedOnEvents:(id)arg1;
- (id)_filterOutCancelledEvents:(id)arg1;
- (id)_filterOutOlderVersionsOfPseudoEvents:(id)arg1;
- (id)_filterOutCuratedEventClashes:(id)arg1;
- (id)_filterOutUndisplayableEntities:(id)arg1;
- (id)_eventFromSqlResult:(struct sqlite3_stmt *)arg1;
- (id)loadContactDetailsForRecordId:(id)arg1 type:(unsigned long long)arg2;
- (id)loadContactDetailsWithWhereClause:(id)arg1 onPrep:(id)arg2 type:(void)arg3 dedupeAgainst:(unsigned long long)arg4;
- (id)suggestContactsByTag:(id)arg1;
- (id)suggestContactMatchesByContactDetailTag:(id)arg1;
- (id)suggestContactByRecordId:(id)arg1;
- (id)loadContactByRecordId:(id)arg1;
- (id)loadParticipantsForEntityId:(long long)arg1;
- (id)suggestContactByIdentityKey:(id)arg1 parentKey:(id)arg2;
- (id)suggestContactByKey:(id)arg1;
- (id)suggestContactsByMasterEntityQuery:(id)arg1 bindings:(id)arg2;
- (id)suggestContactByMasterEntityId:(long long)arg1;
- (id)displayableEntities:(id)arg1;
- (id)pinnedEntities:(id)arg1;
- (_Bool)contactEntityIsActedOn:(id)arg1;
- (_Bool)entityIsDisplayable:(id)arg1;
- (id)_sanitizeWildcard:(id)arg1;
- (id)_sanitizePrefix:(id)arg1;
- (void)pruneEventsOlderThan:(double)arg1;
- (_Bool)removeCuratedContacts;
- (_Bool)_removeEntitiesWhere:(id)arg1 onPrep:(id)arg2;
- (_Bool)removeEntitiesWithEntityTypeId:(long long)arg1;
- (void)_deleteTimeRangesByEntityId:(long long)arg1;
- (id)rejectFieldValuesForRecordId:(id)arg1;
- (void)confirmFieldValues:(id)arg1 forEntity:(id)arg2;
- (void)_writeParticipantMappingToDb:(id)arg1 entityId:(long long)arg2 parentKey:(id)arg3;
- (long long)_writeEntityToDb:(id)arg1;
- (void)_addIndexingTagsTo:(id)arg1;
- (long long)writeEntityFields:(id)arg1;
- (void)writeEntity:(id)arg1;
- (id)loadEntitiesByEntityKey:(id)arg1 entityType:(long long)arg2 resolveDuplicates:(id)arg3;
- (void)loadEntityParticipants:(id)arg1;
- (id)loadEntityWithParticipantsByKey:(id)arg1;
- (id)loadEntityByKey:(id)arg1;
- (id)loadEntityByRecordId:(id)arg1;
- (void)createTables;
- (_Bool)clearDatabase;
- (long long)schemaVersion;
- (long long)latestSchemaVersion;
- (double)lastSeenTimestampForKey:(id)arg1;
- (id)historyForTesting;
- (id)dbHandleForTesting;
- (id)initWithFilename:(id)arg1;
- (id)selectEntityQuery:(id)arg1;
- (unsigned long long)entityCount;
- (id)allPseudoContacts;
- (id)allCuratedContacts;
- (id)allContactsWithEntityType:(unsigned long long)arg1;
- (id)entityFromSqlResult:(struct sqlite3_stmt *)arg1;

@end

