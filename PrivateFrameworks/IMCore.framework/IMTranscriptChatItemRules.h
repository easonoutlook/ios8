/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IMChatItemRules-Protocol.h"

@class IMChat;

@interface IMTranscriptChatItemRules : NSObject <IMChatItemRules>
{
    IMChat *_chat;
}

- (id)_initWithChat:(id)arg1;
- (id)_itemWithChatItemsDeleted:(id)arg1 fromItem:(id)arg2;
- (_Bool)_shouldReloadChatItem:(id)arg1 oldChatItem:(id)arg2;
- (void)_didProcessChatItems:(id)arg1;
- (_Bool)_shouldRegenerateChatItemsForItem:(id)arg1 previousItem:(id)arg2 oldPreviousItem:(id)arg3;
- (id)_chatItemsForItem:(id)arg1 previousItem:(id)arg2;
- (_Bool)shouldShowRaiseMessageStatus;
- (id)chatItemForIMChatItem:(id)arg1;
- (void)dealloc;
- (id)testChatItems;

@end

