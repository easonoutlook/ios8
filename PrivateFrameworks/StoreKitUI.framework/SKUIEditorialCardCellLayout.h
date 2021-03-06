/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUICellLayout.h>

@class NSString, UIButton, UIImage, UIImageView, UILabel;

@interface SKUIEditorialCardCellLayout : SKUICellLayout
{
    UIImageView *_artworkImageView;
    UIButton *_button;
    UILabel *_messageLabel;
    UILabel *_messageTitleLabel;
}

- (void).cxx_destruct;
- (void)_buttonAction:(id)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
@property(copy, nonatomic) NSString *messageTitle;
@property(copy, nonatomic) NSString *message;
@property(copy, nonatomic) NSString *buttonTitle;
@property(retain, nonatomic) UIImage *artwork;
- (void)dealloc;

@end

