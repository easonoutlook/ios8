/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKAlertItem.h>

#import "NCInteractiveNotificationHostDelegate-Protocol.h"

@class BBBulletin, CKIMDBMessage, NCInteractiveNotificationHostViewController;

@interface CKMessageAlertItem : CKAlertItem <NCInteractiveNotificationHostDelegate>
{
    CKIMDBMessage *_message;
    _Bool _playedSound;
    BBBulletin *_bulletin;
    _Bool _showingImage;
    NCInteractiveNotificationHostViewController *_replyViewController;
    NCInteractiveNotificationHostViewController *_audioPlaybackViewController;
}

+ (void)playMessageReceived;
+ (void)setLastMessageSenderID:(int)arg1;
+ (int)lastMessageSenderID;
+ (void)stopPlayingCurrentAlertTone;
@property(retain, nonatomic) NCInteractiveNotificationHostViewController *audioPlaybackViewController; // @synthesize audioPlaybackViewController=_audioPlaybackViewController;
@property(retain, nonatomic) NCInteractiveNotificationHostViewController *replyViewController; // @synthesize replyViewController=_replyViewController;
@property(nonatomic) _Bool showingImage; // @synthesize showingImage=_showingImage;
@property(retain, nonatomic) BBBulletin *bulletin; // @synthesize bulletin=_bulletin;
- (_Bool)shouldHideSMSPreview;
- (void)dealloc;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)hostViewController:(id)arg1 didEnable:(_Bool)arg2 actionAtIndex:(unsigned long long)arg3;
- (void)hostViewController:(id)arg1 didDismissPresentedViewController:(id)arg2;
- (void)hostViewController:(id)arg1 didRequestDismissalWithContext:(id)arg2;
- (void)hostViewControllerDidChangePreferredContentSize:(id)arg1;
- (id)accessoryView;
- (void)performUnlockAction;
- (_Bool)dismissOnLock;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)willPresentAlertView:(id)arg1;
- (void)willRelockForButtonPress:(_Bool)arg1;
- (void)didDeactivateForReason:(int)arg1;
- (Class)alertSheetClass;
- (void)reply;
- (id)_groupID;
- (_Bool)isAudioPlaybackAlert;
- (_Bool)isReplyAlert;
- (id)alertImage;
- (void)setMessage:(id)arg1;
- (id)name;
- (id)address;
- (id)messageText;

@end

