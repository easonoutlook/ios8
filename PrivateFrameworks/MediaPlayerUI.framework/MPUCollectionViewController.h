/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPUDataSourceViewController.h"

#import "MPStoreDownloadManagerObserver-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class UICollectionView;

@interface MPUCollectionViewController : MPUDataSourceViewController <MPStoreDownloadManagerObserver, UICollectionViewDataSource, UICollectionViewDelegate>
{
    UICollectionView *_collectionView;
}

+ (Class)invalidationContextClass;
- (void).cxx_destruct;
- (void)_updateVisibleCellsForDownloads:(id)arg1 updateAllCells:(_Bool)arg2;
- (id)_createCollectionViewLayout;
- (id)_createCollectionView;
- (id)reuseIdentifierForCellAtIndexPath:(id)arg1;
- (void)configureCell:(id)arg1 atIndexPath:(id)arg2 withEntity:(id)arg3 invalidationContext:(id)arg4;
@property(readonly, nonatomic) UICollectionView *collectionView;
- (_Bool)collectionView:(id)arg1 canEditItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)downloadManager:(id)arg1 downloadPurchaseDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 downloadDidFinish:(id)arg2;
- (void)downloadManager:(id)arg1 didAddDownloads:(id)arg2 removeDownloads:(id)arg3;
- (void)reloadData;
- (id)contentScrollView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithDataSource:(id)arg1;

@end

