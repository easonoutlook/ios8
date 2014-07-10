/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class CIFilter, NSArray, NSIndexPath, UICollectionView, UICollectionViewFlowLayout;

@interface CAMEffectSelectionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    NSArray *_effects;
    NSIndexPath *__selectedIndexPath;
    struct CGSize _cellSize;
    struct CGSize _thumbnailSize;
    id <CAMEffectSelectionViewControllerDelegate> _delegate;
}

@property(nonatomic) id <CAMEffectSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (void)_scrollToShowNextFilterNearEdge;
- (void)_notifyEffectSelectedAndScrollIfNecessary;
- (_Bool)collectionView:(id)arg1 shouldDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)_textForItemAtIndexPath:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_scrollToSelectedIndexAnimated:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
@property(retain, nonatomic) CIFilter *selectedEffect;
- (void)_resetSelectedToOriginal;
- (void)_setSelectedIndexPath:(id)arg1;
- (id)_selectedIndexPath;
- (void)_generateFilters;
- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithImageSize:(struct CGSize)arg1;

@end

