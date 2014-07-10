/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CKConversation, NSMutableArray;

@interface CKConversationList : NSObject
{
    NSMutableArray *_trackedConversations;
    _Bool _loadingConversations;
    _Bool _loadedConversations;
    CKConversation *_pendingConversation;
}

+ (id)conversationThumbnailCache;
+ (void)_handleRegistryDidLoadNotification:(id)arg1;
+ (void)initialize;
+ (id)sharedConversationList;
@property(readonly, nonatomic) _Bool loadingConversations; // @synthesize loadingConversations=_loadingConversations;
@property(retain, nonatomic) CKConversation *pendingConversation; // @synthesize pendingConversation=_pendingConversation;
- (void)_handleMemoryWarning:(id)arg1;
- (id)pendingConversationCreatingIfNecessary;
- (void)_abChanged:(id)arg1;
- (void)deleteConversationsAtIndexes:(id)arg1;
- (void)deleteConversation:(id)arg1;
- (id)unreadLastMessages;
- (long long)unreadFilteredConversationCountIgnoringMessages:(id)arg1;
- (long long)unreadCount;
- (void)unpendConversation;
- (void)beginTrackingConversation:(id)arg1 forChat:(id)arg2;
- (void)_postConversationListChangedNotification;
- (void)resort;
- (id)conversations;
- (_Bool)hasActiveConversations;
- (id)activeConversations;
- (id)firstUnreadFilteredConversationIgnoringMessages:(id)arg1;
- (_Bool)_shouldFilterForParticipants:(id)arg1;
- (void)resetCaches;
- (void)resetCachesAndRegenerateThumbnails;
- (id)conversationForExistingChat:(id)arg1;
- (id)conversationForRecipients:(id)arg1 create:(_Bool)arg2;
- (id)newConversationForHandles:(id)arg1;
- (id)conversationForHandles:(id)arg1 create:(_Bool)arg2;
- (id)_copyEntitiesForAddressStrings:(id)arg1;
- (void)_handleRegistryWillUnregisterChatNotification:(id)arg1;
- (void)_handleRegistryDidRegisterChatNotification:(id)arg1;
- (void)_beginTrackingAllExistingChatsIfNeeded;
- (void)stopTrackingConversation:(id)arg1;
- (id)conversationForExistingChatWithGUID:(id)arg1;
- (id)conversationForExistingChatWithGroupID:(id)arg1;
- (id)_conversationForChat:(id)arg1;
- (id)_beginTrackingConversationWithChat:(id)arg1;
- (id)_alreadyTrackedConversationForChat:(id)arg1;
- (void)dealloc;
- (id)init;

@end

