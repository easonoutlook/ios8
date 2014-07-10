/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUICellLayout.h>

#import "SKUIItemOfferButtonDelegate-Protocol.h"

@class NSString, SKUICellImageView, SKUIItemOffer, SKUIItemOfferButton, SKUIItemOfferButtonAppearance, SKUIItemState, UIImage, UILabel, UIView;

@interface SKUIItemCellLayout : SKUICellLayout <SKUIItemOfferButtonDelegate>
{
    _Bool _iconImageHidden;
    _Bool _hidesItemOfferButton;
    _Bool _highlighted;
    SKUICellImageView *_iconImageView;
    SKUIItemOffer *_itemOffer;
    SKUIItemOfferButton *_itemOfferButton;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    UILabel *_itemOfferNoticeLabel;
    SKUIItemState *_itemState;
    _Bool _restricted;
    _Bool _selected;
    UIView *_removeControlView;
}

@property(readonly, nonatomic) UIView *removeControlView; // @synthesize removeControlView=_removeControlView;
@property(nonatomic, getter=isSelected) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic, getter=isRestricted) _Bool restricted; // @synthesize restricted=_restricted;
@property(copy, nonatomic) SKUIItemState *itemState; // @synthesize itemState=_itemState;
@property(readonly, nonatomic) UILabel *itemOfferNoticeLabel; // @synthesize itemOfferNoticeLabel=_itemOfferNoticeLabel;
@property(retain, nonatomic) SKUIItemOfferButtonAppearance *itemOfferButtonAppearance; // @synthesize itemOfferButtonAppearance=_itemOfferButtonAppearance;
@property(readonly, nonatomic) SKUIItemOfferButton *itemOfferButton; // @synthesize itemOfferButton=_itemOfferButton;
@property(retain, nonatomic) SKUIItemOffer *itemOffer; // @synthesize itemOffer=_itemOffer;
@property(readonly, nonatomic) UIView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(nonatomic, getter=isIconImageHidden) _Bool iconImageHidden; // @synthesize iconImageHidden=_iconImageHidden;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
- (void).cxx_destruct;
- (_Bool)_useCloudButtonForItemState:(id)arg1;
- (void)_reloadItemOfferVisibility;
- (void)_reloadItemOfferButton:(_Bool)arg1;
- (id)_parentCollectionViewCell;
- (void)_getParentTableView:(id *)arg1 collectionView:(id *)arg2;
- (_Bool)_canShowItemOfferNotice;
- (void)_showItemOfferConfirmationAction:(id)arg1;
- (void)_itemOfferConfirmAction:(id)arg1;
- (void)_cancelItemOfferConfirmationAction:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)prepareForReuse;
- (void)setItemState:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *itemOfferNoticeString;
@property(retain, nonatomic) UIImage *iconImage;
@property(nonatomic) _Bool displaysItemOfferButton;
- (void)resetLayout;
- (void)layoutForItemOfferChange;
- (void)dealloc;

@end

