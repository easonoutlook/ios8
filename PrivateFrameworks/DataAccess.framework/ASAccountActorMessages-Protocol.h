/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol ASAccountActorMessages
- (oneway void)_accountPasswordChanged;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_folderUpdatedNotification:(id)arg1;
- (oneway void)_daemonDiedNotification:(id)arg1;
- (oneway void)_newASPolicyKeyNotification:(id)arg1;
- (id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id *)arg3;
- (_Bool)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (id)draftsFolder;
- (id)deletedItemsFolder;
- (id)sentItemsFolder;
- (id)inboxFolder;
- (void)performFolderChange:(id)arg1 isUserRequested:(_Bool)arg2;
- (int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2;
- (int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2;
- (int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2;
- (int)performMoveRequests:(id)arg1 consumer:(id)arg2;
- (int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(_Bool)arg4 consumer:(id)arg5;
- (int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(_Bool)arg4 consumer:(id)arg5;
- (int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(_Bool)arg8 consumer:(id)arg9 context:(id)arg10;
- (_Bool)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)arg1 withTag:(id *)arg2;
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)arg1;
- (oneway void)stopMonitoringAllFolders;
- (oneway void)stopMonitoringFoldersForUpdates:(id)arg1;
- (oneway void)monitorFoldersForUpdates:(id)arg1;
- (oneway void)setCustomSignature:(id)arg1;
- (id)customSignature;
- (oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
- (id)encryptionIdentityPersistentReference;
- (oneway void)setSigningIdentityPersistentReference:(id)arg1;
- (id)signingIdentityPersistentReference;
- (oneway void)setGeneratesBulletins:(_Bool)arg1;
- (_Bool)generatesBulletins;
- (int)supportsConversations;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
- (int)mailNumberOfPastDaysToSync;
- (id)mailboxes;
- (oneway void)shutdown;
- (oneway void)setAccount:(id)arg1;
- (oneway void)startup;
- (_Bool)searchQueriesRunning;
- (oneway void)cancelAllSearchQueries;
- (oneway void)cancelSearchQuery:(id)arg1;
- (oneway void)performSearchQuery:(id)arg1;
- (oneway void)cancelTaskWithID:(int)arg1;
@end

