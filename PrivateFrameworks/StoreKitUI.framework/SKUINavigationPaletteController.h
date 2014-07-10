/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUINavigationBarSectionController.h>

@class SKUINavigationBarContext, SKUINavigationPaletteView, SKUIPaletteViewElement, SKUIViewElementLayoutContext;

@interface SKUINavigationPaletteController : SKUINavigationBarSectionController
{
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteView *_paletteView;
    SKUIPaletteViewElement *_viewElement;
    SKUIViewElementLayoutContext *_viewLayoutContext;
}

- (void).cxx_destruct;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)willAppearInNavigationBar;
- (id)viewForElementIdentifier:(id)arg1;
- (id)view;
- (void)reloadSectionViews;
- (id)initWithPaletteViewElement:(id)arg1;

@end

