/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUPhotoEditToolController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, PUFiltersToolControllerSpec, UICollectionView;

@interface PUFiltersToolController : PUPhotoEditToolController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    _Bool _didPerformInitialScrollToReveal;
    NSArray *_collectionViewConstraints;
    _Bool __needsThumbnails;
    UICollectionView *__collectionView;
    NSMutableDictionary *__thumbnailImages;
    unsigned long long __selectedFilterIndex;
}

@property(nonatomic) unsigned long long _selectedFilterIndex; // @synthesize _selectedFilterIndex=__selectedFilterIndex;
@property(retain, nonatomic, setter=_setThumbnailImages:) NSMutableDictionary *_thumbnailImages; // @synthesize _thumbnailImages=__thumbnailImages;
@property(retain, nonatomic, setter=_setCollectionView:) UICollectionView *_collectionView; // @synthesize _collectionView=__collectionView;
@property(readonly, nonatomic) _Bool _needsThumbnails; // @synthesize _needsThumbnails=__needsThumbnails;
- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)_scrollToNextEffectIfNecessaryIncludingOffscreen:(_Bool)arg1;
- (void)_scrollToSelectedEffectAnimated:(_Bool)arg1;
- (id)_selectedIndexPath;
- (void)_updateEffectSelection;
- (void)_updateCollectionView;
- (id)_thumbnailImageForIndex:(unsigned long long)arg1;
- (void)_saveThumbnail:(id)arg1 forIndex:(unsigned long long)arg2;
- (void)_prepareThumbnailImagesIfNeeded;
- (void)_setNeedsThumbnails;
- (void)_loadStateFromModelAnimated:(_Bool)arg1;
- (void)_setSelectedFilterIndex:(unsigned long long)arg1 animated:(_Bool)arg2;
- (void)_setSelectedFilterIndex:(unsigned long long)arg1;
- (void)photoEditModelDidChange;
- (_Bool)_filterWithIdentifier:(id)arg1 isEqualToFilterWithIdentifier:(id)arg2;
- (_Bool)_filterIdentifierIsNoneEffect:(id)arg1;
- (_Bool)installTogglePreviewGestureRecognizer:(id)arg1;
- (struct UIEdgeInsets)preferredPreviewViewInsets;
- (void)setLayoutOrientation:(long long)arg1 withTransitionCoordinator:(id)arg2;
- (void)setLayoutOrientation:(long long)arg1;
- (void)resetToDefaultValueAnimated:(_Bool)arg1;
- (id)localizedResetToolActionTitle;
- (_Bool)canResetToDefaultValue;
- (id)selectedToolbarIcon;
- (id)toolbarIcon;
- (id)localizedName;
- (void)setDelegate:(id)arg1;
- (void)updateViewConstraints;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) PUFiltersToolControllerSpec *spec;

@end

