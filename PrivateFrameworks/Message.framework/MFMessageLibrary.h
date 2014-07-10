/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class MFAttachmentLibraryDataProvider, NSString;

@interface MFMessageLibrary : NSObject
{
    NSString *_path;
    MFAttachmentLibraryDataProvider *_attachmentDataProvider;
}

- (id)dataProvider;
- (void)setStoredIntegerPropertyWithName:(id)arg1 value:(id)arg2;
- (id)storedIntegerPropertyWithName:(id)arg1;
- (_Bool)hasCompleteDataForMimePart:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
- (id)accountForMessage:(id)arg1;
- (void)postOldFlags:(unsigned long long)arg1 newFlags:(unsigned long long)arg2 forMessage:(id)arg3;
- (void)postFlagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (void)setFlagsForMessages:(id)arg1;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(_Bool)arg3 newMessagesByOldMessage:(id)arg4;
- (unsigned int)mailboxIDForURLString:(id)arg1;
- (id)remoteStoreForMessage:(id)arg1;
- (id)bodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2 isComplete:(_Bool *)arg3;
- (id)fullBodyDataForMessage:(id)arg1 andHeaderDataIfReadilyAvailable:(id *)arg2;
- (id)dataForMimePart:(id)arg1 isComplete:(_Bool *)arg2;
- (id)mailboxUidForMessage:(id)arg1;
- (id)dataPathForMessage:(id)arg1 part:(id)arg2;
- (id)dataPathForMessage:(id)arg1;
- (id)addMessages:(id)arg1 withMailbox:(id)arg2 fetchBodies:(_Bool)arg3 newMessagesByOldMessage:(id)arg4 remoteIDs:(id)arg5 setFlags:(unsigned long long)arg6 clearFlags:(unsigned long long)arg7 messageFlagsForMessages:(id)arg8 copyFiles:(_Bool)arg9 addPOPUIDs:(_Bool)arg10 dataSectionsByMessage:(id)arg11;
- (_Bool)isMessageContentsLocallyAvailable:(id)arg1;
- (id)urlForMailboxID:(unsigned int)arg1;
- (void)updateFlagsForMessagesInPlace:(id)arg1 success:(_Bool *)arg2;
- (void)setFlagsForMessages:(id)arg1 mask:(unsigned long long)arg2;
- (id)setFlagsFromDictionary:(id)arg1 forMessages:(id)arg2;
- (void)setFlagsFromDictionary:(id)arg1 forMessagesInMailboxURLString:(id)arg2;
- (void)setNumberOfAttachments:(unsigned int)arg1 isSigned:(_Bool)arg2 isEncrypted:(_Bool)arg3 forMessage:(id)arg4;
- (void)setFlags:(unsigned long long)arg1 forMessage:(id)arg2;
- (void)setMessage:(id)arg1 isPartial:(_Bool)arg2;
- (void)deleteOfflineCacheDataForAccount:(long long)arg1;
- (void)consumeOfflineCacheReplayDataForAccount:(long long)arg1 usingBlock:(id)arg2;
- (void)appendOfflineCacheReplayData:(id)arg1 forAccountID:(long long)arg2;
- (id)offlineCacheOperationsForAccount:(long long)arg1 lastTemporaryID:(unsigned int *)arg2;
- (void)markOfflineCacheOperationAsComplete:(id)arg1;
- (void)appendOfflineCacheOperation:(id)arg1 forAccount:(long long)arg2 lastTemporaryID:(unsigned int)arg3;
- (void)deleteAccount:(id)arg1;
- (long long)libraryIDForAccount:(id)arg1;
- (long long)createLibraryIDForAccount:(id)arg1;
- (id)filterContiguousMessages:(id)arg1 forCriterion:(id)arg2 options:(unsigned int)arg3;
- (void)lockDBForWriting;
- (id)hiddenPOPUIDsInMailbox:(id)arg1;
- (id)allUIDsInMailbox:(id)arg1;
- (id)deletedUIDsInMailbox:(id)arg1;
- (id)UIDsToDeleteInMailbox:(id)arg1;
- (void)deletePOPUID:(id)arg1 inMailbox:(id)arg2;
- (void)closeDatabaseConnections;
- (_Bool)isBusy;
- (_Bool)libraryExists;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3 success:(_Bool *)arg4;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 success:(_Bool *)arg3;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2;
- (id)messagesMatchingCriterion:(id)arg1 options:(unsigned int)arg2 range:(struct _NSRange)arg3;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3;
- (void)sendMessagesMatchingCriterion:(id)arg1 to:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4;
- (id)bodyDataForMessage:(id)arg1;
- (id)headerDataForMessage:(id)arg1;
- (id)loadMeetingMetadataForMessage:(id)arg1;
- (id)loadMeetingDataForMessage:(id)arg1;
- (id)loadMeetingExternalIDForMessage:(id)arg1;
- (id)metadataForMessage:(id)arg1 key:(id)arg2;
- (id)metadataForMessage:(id)arg1;
- (oneway void)updateMessage:(id)arg1 withMetadata:(id)arg2;
- (void)setSummary:(id)arg1 forMessage:(id)arg2;
- (void)setData:(id)arg1 forMessage:(id)arg2 isPartial:(_Bool)arg3;
- (id)dataConsumerForMessage:(id)arg1;
- (id)dataConsumerForMessage:(id)arg1 isPartial:(_Bool)arg2;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2 incomplete:(_Bool)arg3;
- (id)dataConsumerForMessage:(id)arg1 part:(id)arg2;
- (id)messageWithMessageID:(id)arg1 inMailbox:(id)arg2;
- (void)deleteMailboxes:(id)arg1;
- (_Bool)renameMailboxes:(id)arg1 to:(id)arg2;
- (void)compactMailbox:(id)arg1;
- (void)removeAllMessagesFromMailbox:(id)arg1 removeMailbox:(_Bool)arg2 andNotify:(_Bool)arg3;
- (void)compactMessages:(id)arg1;
- (void)compactMessages:(id)arg1 permanently:(_Bool)arg2;
- (_Bool)shouldCancel;
- (id)messageWithLibraryID:(unsigned int)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)messagesWithMessageIDHeader:(id)arg1;
- (id)messageWithMessageID:(id)arg1 options:(unsigned int)arg2 inMailbox:(id)arg3;
- (id)getDetailsForMessages:(unsigned long long)arg1 absoluteBottom:(unsigned long long)arg2 topOfDesiredRange:(unsigned long long)arg3 range:(struct _NSRange *)arg4 fromMailbox:(id)arg5;
- (id)getDetailsForAllMessagesFromMailbox:(id)arg1;
- (id)getDetailsForMessagesWithRemoteIDInRange:(struct _NSRange)arg1 fromMailbox:(id)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMessagesWithRemoteIDs:(id)arg2 inMailbox:(id)arg3;
- (void)setSequenceIdentifier:(id)arg1 forMessageWithLibraryID:(unsigned int)arg2;
- (id)sequenceIdentifierForMessagesWithRemoteIDs:(id)arg1 inMailbox:(id)arg2;
- (void)setSequenceIdentifier:(id)arg1 forMailbox:(id)arg2;
- (id)sequenceIdentifierForMailbox:(id)arg1;
- (unsigned int)minimumRemoteIDForMailbox:(id)arg1;
- (unsigned int)maximumRemoteIDForMailbox:(id)arg1;
- (id)copyMessagesWithRemoteIDs:(id)arg1 options:(unsigned int)arg2 inRemoteMailbox:(id)arg3;
- (id)messageWithRemoteID:(id)arg1 inRemoteMailbox:(id)arg2;
- (id)oldestMessageInMailbox:(id)arg1;
- (void)setServerUnreadOnlyOnServerCount:(unsigned long long)arg1 forMailbox:(id)arg2;
- (unsigned long long)serverUnreadOnlyOnServerCountForMailbox:(id)arg1;
- (unsigned int)totalCountForMailbox:(id)arg1;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1 includeServerSearchResults:(_Bool)arg2 includeThreadSearchResults:(_Bool)arg3;
- (unsigned int)nonDeletedCountForMailbox:(id)arg1;
- (unsigned int)deletedCountForMailbox:(id)arg1;
- (unsigned int)unreadCountForMailbox:(id)arg1 matchingCriterion:(id)arg2;
- (unsigned int)unreadCountForMailbox:(id)arg1;
- (id)orderedBatchOfMessagesEndingAtRowId:(unsigned int)arg1 limit:(unsigned int)arg2 success:(_Bool *)arg3;
- (id)messagesWithoutSummariesForMailbox:(id)arg1 fromRowID:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)messagesWithSummariesForMailbox:(id)arg1 fromRowID:(unsigned int)arg2 limit:(unsigned int)arg3;
- (id)messagesWithoutSummariesForMailbox:(id)arg1;
- (id)messagesWithSummariesForMailbox:(id)arg1 range:(struct _NSRange)arg2;
- (id)dateOfOldestNonSearchResultMessageInMailbox:(id)arg1;
- (id)messagesNeedingSyncConfirmationForMailbox:(id)arg1;
- (id)serverSearchResultMessagesForMailbox:(id)arg1;
- (id)messagesForMailbox:(id)arg1 olderThanNumberOfDays:(int)arg2;
- (void)updateThreadingInfoForMessage:(id)arg1 fromHeaders:(id)arg2;
- (void)updateRecipientsForMessage:(id)arg1 fromHeaders:(id)arg2;
- (id)duplicateMessages:(id)arg1 newRemoteIDs:(id)arg2 forMailbox:(id)arg3 setFlags:(unsigned long long)arg4 clearFlags:(unsigned long long)arg5 messageFlagsForMessages:(id)arg6 createNewCacheFiles:(_Bool)arg7;
- (void)commit;
- (void)flagsChangedForMessages:(id)arg1 flags:(id)arg2 oldFlagsByMessage:(id)arg3;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

