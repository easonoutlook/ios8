/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSAttributedString, NSError, NSString, UIButton, UIImageView, UILabel;

@interface QLGenericView : UIView
{
    UIView *_containerView;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_showArchiveContentButton;
    NSError *_error;
    id <QLGenericViewDelegate> delegate;
}

@property id <QLGenericViewDelegate> delegate; // @synthesize delegate;
- (void)showArchiveContents:(id)arg1;
@property _Bool showArchiveButton;
@property(copy) NSAttributedString *attributedSubtitle;
@property(copy) NSString *subtitle;
@property(copy) NSString *title;
- (void)layoutSubviews;
- (void)_updateContainerFrameForTraitCollection:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

