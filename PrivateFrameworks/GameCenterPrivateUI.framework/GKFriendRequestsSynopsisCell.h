/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameCenterPrivateUI/GKCollectionViewCell.h>

@class GKLabel, GKPlayerMultiPhotoView, NSDictionary, UIImageView;

@interface GKFriendRequestsSynopsisCell : GKCollectionViewCell
{
    GKLabel *_titleLabel;
    GKLabel *_subtitleLabel;
    UIImageView *_caretView;
    GKPlayerMultiPhotoView *_iconView;
    NSDictionary *_metricsOverrides;
}

+ (id)phoneMetrics;
+ (id)padMetrics;
+ (void)registerCellClassesWithCollectionView:(id)arg1;
@property(retain, nonatomic) NSDictionary *metricsOverrides; // @synthesize metricsOverrides=_metricsOverrides;
@property(retain, nonatomic) GKPlayerMultiPhotoView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIImageView *caretView; // @synthesize caretView=_caretView;
@property(retain, nonatomic) GKLabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) GKLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)prepareForReuse;
- (_Bool)canRemoveItem;
- (void)didUpdateModel;
- (void)setPlayers:(id)arg1;
- (id)players;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

