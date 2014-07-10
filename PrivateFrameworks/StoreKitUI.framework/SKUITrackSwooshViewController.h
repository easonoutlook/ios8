/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreKitUI/SKUISwooshViewController.h>

#import "SKUIItemStateCenterObserver-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSObject<OS_dispatch_source>, SKUIItemOfferButtonAppearance, SKUISwooshPageComponent, SKUISwooshView, SKUITrackSwooshCollectionViewLayout, UICollectionView;

@interface SKUITrackSwooshViewController : SKUISwooshViewController <SKUIItemStateCenterObserver, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
    SKUITrackSwooshCollectionViewLayout *_collectionViewLayout;
    _Bool _didInitialReload;
    NSObject<OS_dispatch_source> *_doubleTapTimer;
    SKUIItemOfferButtonAppearance *_itemOfferButtonAppearance;
    SKUISwooshView *_swooshView;
    SKUISwooshPageComponent *_trackSwoosh;
}

@property(retain, nonatomic) SKUIItemOfferButtonAppearance *itemOfferButtonAppearance; // @synthesize itemOfferButtonAppearance=_itemOfferButtonAppearance;
- (void).cxx_destruct;
- (void)_timeoutDoubleTapTimer;
- (void)_cancelDoubleTapTimer;
- (void)_seeAllAction:(id)arg1;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)itemStateCenterRestrictionsChanged:(id)arg1;
- (void)itemStateCenter:(id)arg1 itemStatesChanged:(id)arg2;
- (void)itemCollectionView:(id)arg1 didConfirmItemOfferForCell:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)setImage:(id)arg1 forItemAtIndex:(long long)arg2;
- (void)setColorScheme:(id)arg1;
- (id)indexPathsForVisibleItems;
@property(readonly, nonatomic) struct CGRect seeAllButtonFrame;
- (void)reloadCellsForLockups:(id)arg1;
@property(readonly, nonatomic) NSArray *lockups;
- (struct CGRect)frameForItemAtIndex:(long long)arg1;
- (void)dealloc;
- (id)initWithTrackSwoosh:(id)arg1;

// Remaining properties
@property(nonatomic) __weak id <SKUITrackSwooshViewControllerDelegate> delegate; // @dynamic delegate;

@end

