/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUI/GKBasePlayerCell.h>

@class UILabel;

@interface GKFriendRecommendationCell : GKBasePlayerCell
{
    UILabel *_reasonLabel;
}

@property(retain, nonatomic) UILabel *reasonLabel; // @synthesize reasonLabel=_reasonLabel;
- (void)prepareForReuse;
- (void)didUpdateModel;
- (void)setRepresentedItem:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

