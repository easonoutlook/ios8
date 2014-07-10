/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKBalloonChatItem.h>

@class IMMessage, NSArray;

@interface CKMessagePartChatItem : CKBalloonChatItem
{
}

@property(readonly, copy, nonatomic) NSArray *pasteboardItems;
@property(readonly, nonatomic) BOOL color;
@property(readonly, retain, nonatomic) IMMessage *message;
- (void)configureBalloonView:(id)arg1;
- (id)sender;
- (id)time;
- (_Bool)failed;
- (_Bool)isFromMe;
- (_Bool)canSendAsTextMessage;
- (_Bool)canForward;
- (_Bool)canCopy;
- (id)description;
- (id)composition;

@end

