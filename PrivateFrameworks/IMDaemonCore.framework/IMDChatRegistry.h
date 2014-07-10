/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableDictionary, NSRecursiveLock;

@interface IMDChatRegistry : NSObject
{
    NSRecursiveLock *_chatsLock;
    NSMutableDictionary *_chats;
    _Bool _isLoading;
    _Bool _doneLoadingAfterMerge;
}

+ (id)sharedInstance;
- (void)systemDidLeaveFirstDataProtectionLock;
- (_Bool)updateProperties:(id)arg1 chat:(id)arg2 style:(unsigned char)arg3;
- (_Bool)saveChats;
- (_Bool)_saveChats;
- (_Bool)loadChatsWithCompletionBlock:(id)arg1;
- (void)_forceReloadChats:(_Bool)arg1;
- (id)_chatInfoForSaving;
- (id)_chatInfo;
- (void)removeMessage:(id)arg1 fromChat:(id)arg2;
- (void)addMessage:(id)arg1 toChat:(id)arg2;
- (void)removeItem:(id)arg1 fromChat:(id)arg2;
- (void)addItem:(id)arg1 toChat:(id)arg2;
- (void)removeChat:(id)arg1;
- (void)addChat:(id)arg1;
- (void)updateStateForChat:(id)arg1 forcePost:(_Bool)arg2;
- (void)updateStateForChat:(id)arg1;
- (void)updateStateForChat:(id)arg1 fromMessage:(id)arg2 toMessage:(id)arg3 forcePost:(_Bool)arg4;
- (_Bool)updateUnreadCountForChat:(id)arg1;
- (void)updateLastMessageForChat:(id)arg1;
- (void)updateLastMessageForChat:(id)arg1 hintMessage:(id)arg2;
- (id)allExistingChatsWithIdentifier:(id)arg1 style:(unsigned char)arg2;
- (id)existingChatForRoom:(id)arg1 account:(id)arg2;
- (id)existingChatForIDs:(id)arg1 account:(id)arg2 style:(unsigned char)arg3;
- (id)existingChatsForIDs:(id)arg1 onService:(id)arg2 style:(unsigned char)arg3;
- (id)existingChatForID:(id)arg1 account:(id)arg2;
- (id)existingChatWithIdentifier:(id)arg1 account:(id)arg2;
- (id)existingChatWithGUID:(id)arg1;
- (id)chatForRoom:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4;
- (id)chatForHandles:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 style:(unsigned char)arg4 guid:(id)arg5;
- (id)chatForHandle:(id)arg1 account:(id)arg2 chatIdentifier:(id)arg3 guid:(id)arg4;
@property(readonly, nonatomic) NSArray *chats;
- (void)dealloc;
- (id)init;

@end

