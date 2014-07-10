/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotosUI/PUAdjustmentsModeBar.h>

#import "UICollectionViewDataSource-Protocol.h"

@class NSArray, NSMutableSet, PUSlidersCollectionView, UIButton, UILabel;

@interface PUCompactAdjustmentsModeBar : PUAdjustmentsModeBar <UICollectionViewDataSource>
{
    UILabel *_titleLabel;
    UIButton *_expansionButton;
    PUSlidersCollectionView *_modeSlidersCollectionView;
    NSArray *_titleLabelConstraints;
    NSArray *_expansionButtonConstraints;
    NSArray *_modeSlidersCollectionViewConstraints;
    NSArray *__visibleModes;
    NSMutableSet *_expandedSupermodes;
}

- (void).cxx_destruct;
- (void)configureSliderCell:(id)arg1 forMode:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)configurePickerCell:(id)arg1 forMode:(id)arg2;
- (id)newConstraintsForModePickerList:(id)arg1;
- (id)newModePickerListBackgroundView;
- (void)_setExpanded:(_Bool)arg1 forSupermode:(id)arg2 exclusive:(_Bool)arg3 animated:(_Bool)arg4;
- (_Bool)_isExpandedSupermode:(id)arg1;
- (void)_updateVisibleModesAnimated:(_Bool)arg1;
- (void)setListViewExpanded:(_Bool)arg1 explicitly:(_Bool)arg2 animated:(_Bool)arg3;
- (id)visibleSliderAdjustmentModes;
- (void)_updateTitleLabelAnimated:(_Bool)arg1;
- (void)copyStateFromAdjustmentsModeBar:(id)arg1;
- (void)reloadData;
- (_Bool)shouldShowModePickerOnFirstDisplay;
- (id)currentSlidersCollectionView;
- (_Bool)wantsToHandleEventAtPoint:(struct CGPoint)arg1;
- (void)setSelectedMode:(id)arg1 animated:(_Bool)arg2;
- (void)willMoveToWindow:(id)arg1;
- (void)updateConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

