/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUINavigationBarSectionController.h>

#import "SKUIItemOfferButtonDelegate-Protocol.h"

@class NSMapTable;

@interface SKUINavigationBarButtonsController : SKUINavigationBarSectionController <SKUIItemOfferButtonDelegate>
{
    NSMapTable *_buttonItemElements;
}

- (void).cxx_destruct;
- (void)_updateItemOfferButton:(id)arg1 withButtonViewElement:(id)arg2;
- (void)_updateButtonItem:(id)arg1 withButtonViewElement:(id)arg2;
- (id)_imageForImageViewElement:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)_showConfirmationAction:(id)arg1;
- (void)_itemOfferAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)reloadAfterDocumentUpdate;
- (void)disconnectAllButtons;
- (id)barButtonItemForElementIdentifier:(id)arg1;
- (id)addButtonItemWithButtonViewElement:(id)arg1;

@end

