/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKBalloonChatItem.h>

@class NSString;

@interface CKLocatingChatItem : CKBalloonChatItem
{
}

- (id)message;
@property(readonly, copy, nonatomic) NSString *locationText;
- (void)configureBalloonView:(id)arg1;
- (id)sender;
- (id)time;
- (_Bool)failed;
- (_Bool)isFromMe;
- (Class)balloonViewClass;
- (id)description;

@end

