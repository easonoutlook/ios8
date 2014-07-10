/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUIViewReuseView.h>

#import "SKUIItemOfferButtonDelegate-Protocol.h"
#import "SKUIPerspectiveView-Protocol.h"
#import "SKUIPreviewContainerView-Protocol.h"
#import "SKUIViewElementView-Protocol.h"

@class NSMapTable, NSMutableArray, SKUILockupViewElement, SKUIPreviewProgressIndicator;

@interface SKUIHorizontalLockupView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIPerspectiveView, SKUIPreviewContainerView, SKUIViewElementView>
{
    NSMutableArray *_columnViewArrays;
    struct UIEdgeInsets _contentInset;
    struct CGSize _lastFitSize;
    SKUILockupViewElement *_lockupElement;
    double _leftColumnWidth;
    NSMapTable *_lineSpacings;
    SKUIPreviewProgressIndicator *_previewProgressIndicator;
    double _rightColumnWidth;
}

+ (struct CGSize)_sizeForViewElement:(id)arg1 width:(long long)arg2 context:(id)arg3;
+ (struct CGSize)_rightColumnSizeForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (void)_requestLayoutForViewElements:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (id)_newColumnStacksForLockup:(id)arg1;
+ (double)_middleColumnHeightForViewElements:(id)arg1 columnWidth:(double)arg2 context:(id)arg3;
+ (double)_lineSpacingForViewElement:(id)arg1 context:(id)arg2;
+ (struct CGSize)_leftColumnSizeForViewElements:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+ (double)maximumPerspectiveHeightForSize:(struct CGSize)arg1;
- (void).cxx_destruct;
- (void)_enumerateViewElementViewsUsingBlock:(id)arg1;
- (void)_showConfirmationAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
- (void)showPreviewProgressWithStatus:(id)arg1 animated:(_Bool)arg2;
- (void)hidePreviewProgressAnimated:(_Bool)arg1;
- (void)updateForChangedDistanceFromVanishingPoint;
- (void)setVanishingPoint:(struct CGPoint)arg1;
- (void)setPerspectiveTargetView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

