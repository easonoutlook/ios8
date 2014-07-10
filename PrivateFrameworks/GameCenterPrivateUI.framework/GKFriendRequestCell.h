/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUI/GKBasePlayerCell.h>

@class GKButton, UILabel;

@interface GKFriendRequestCell : GKBasePlayerCell
{
    UILabel *_messageLabel;
    UILabel *_whenLabel;
    GKButton *_acceptButton;
    GKButton *_declineButton;
}

+ (void)applyFriendRequest:(id)arg1 messageStringToLabel:(id)arg2 showAlias:(_Bool)arg3;
+ (id)itemHeightList;
+ (void)registerCellClassesWithCollectionView:(id)arg1;
+ (Class)cellClassForPlayer:(id)arg1;
@property(retain, nonatomic) GKButton *declineButton; // @synthesize declineButton=_declineButton;
@property(retain, nonatomic) GKButton *acceptButton; // @synthesize acceptButton=_acceptButton;
@property(retain, nonatomic) UILabel *whenLabel; // @synthesize whenLabel=_whenLabel;
@property(retain, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
- (void)didTouchDecline:(id)arg1;
- (void)didTouchAccept:(id)arg1;
- (void)didUpdateModel;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

