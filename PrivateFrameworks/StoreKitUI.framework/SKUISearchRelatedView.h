/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class CAGradientLayer, NSArray, NSMutableArray, NSString, SKUIClientContext, UIButton, UILabel, UIScrollView, _UIBackdropView;

@interface SKUISearchRelatedView : UIView
{
    _UIBackdropView *_backdropView;
    UIView *_borderView;
    SKUIClientContext *_clientContext;
    id <SKUISearchRelatedViewDelegate> _delegate;
    NSArray *_relatedQueries;
    UILabel *_titleLabel;
    NSMutableArray *_relatedButtons;
    UIScrollView *_scrollView;
    UIView *_scrollViewSuperview;
    UILabel *_noRelatedLabel;
    UIButton *_backButton;
    UIView *_separatorView;
    NSString *_previousRelatedSearchTerm;
    CAGradientLayer *_mask;
}

@property(copy, nonatomic) NSString *previousRelatedSearchTerm; // @synthesize previousRelatedSearchTerm=_previousRelatedSearchTerm;
@property(retain, nonatomic) NSArray *relatedQueries; // @synthesize relatedQueries=_relatedQueries;
@property(nonatomic) __weak id <SKUISearchRelatedViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property(readonly, nonatomic) _UIBackdropView *backdropView; // @synthesize backdropView=_backdropView;
- (void).cxx_destruct;
- (void)_backAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

