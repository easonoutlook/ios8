/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SKUILayoutCacheDelegate-Protocol.h"

@class NSMapTable, NSMutableArray, SKUIClientContext, SKUINavigationBarButtonsController, SKUINavigationBarContext, SKUINavigationBarViewElement, SKUINavigationPaletteController, UIView, UIViewController;

@interface SKUINavigationBarController : NSObject <SKUILayoutCacheDelegate>
{
    SKUINavigationBarButtonsController *_buttonsController;
    SKUIClientContext *_clientContext;
    SKUINavigationBarContext *_navigationBarContext;
    SKUINavigationPaletteController *_paletteController;
    UIViewController *_parentViewController;
    NSMapTable *_searchBarControllers;
    NSMutableArray *_sections;
    SKUINavigationBarViewElement *_viewElement;
}

@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(readonly, nonatomic) SKUINavigationBarViewElement *navigationBarViewElement; // @synthesize navigationBarViewElement=_viewElement;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (id)_titleViewWithViewElement:(id)arg1;
- (id)_navigationBarContext;
- (id)_barButtonItemWithViewElement:(id)arg1;
- (id)_barButtonItemWithSearchBarViewElement:(id)arg1;
- (id)_barButtonItemWithButtonViewElement:(id)arg1;
- (id)_addSearchBarControllerWithViewElement:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (void)updateNavigationItem:(id)arg1;
@property(readonly, nonatomic) UIView *navigationPaletteView;
- (void)detachFromNavigationItem:(id)arg1;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (void)attachToNavigationItem:(id)arg1;
- (void)dealloc;
- (id)initWithNavigationBarViewElement:(id)arg1;

@end

