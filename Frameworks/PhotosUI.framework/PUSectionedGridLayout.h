/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UICollectionViewLayout.h"

#import "PUCollectionViewLayoutDelegating-Protocol.h"
#import "PUGridLayoutProtocol-Protocol.h"
#import "PUPhotosGridTransitioningLayout-Protocol.h"
#import "PUReorderableLayout-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, NSIndexSet, NSPointerArray, NSSet, NSString, PULayoutAnimationsHelper, PULayoutSampledSectioning, PUSectionedGridLayoutInvalidationContext, UICollectionViewLayoutAttributes;

@interface PUSectionedGridLayout : UICollectionViewLayout <PUReorderableLayout, PUPhotosGridTransitioningLayout, PUCollectionViewLayoutDelegating, PUGridLayoutProtocol>
{
    _Bool _layoutDataIsValid;
    _Bool _sectioningDataIsValid;
    _Bool _samplingDataIsValid;
    struct CGSize _contentSize;
    UICollectionViewLayoutAttributes *_globalFooterAttributes;
    NSSet *_supplementaryViewKinds;
    long long _totalRealSections;
    long long _totalVisualSections;
    NSPointerArray *_realToVisualSections;
    NSArray *_visualToRealSectionIndexes;
    NSPointerArray *_samplingHelpersByVisualSection;
    double *_visualSectionStartYs;
    long long *_realSectionItemCounts;
    long long *_visualSectionMaxRows;
    NSArray *_cachedNonHeaderLayoutAttributesInRect;
    struct CGRect _cachedLayoutAttributesLastKnownRect;
    NSIndexSet *_deletedSections;
    NSSet *_deletedItemIndexPaths;
    _Bool _isRotating;
    NSIndexPath *_rotationAnchorItem;
    double _rotationAnchorItemNormalizedYOffset;
    _Bool _floatingHeadersLayoutIsValid;
    _Bool _hasFloatingHeaders;
    long long _floatingHeaderVisualSectionIndex;
    PUSectionedGridLayoutInvalidationContext *_cachedFloatingHeaderInvalidationContext;
    long long _cachedFloatingHeaderInvalidationContextNewVisualSection;
    NSDictionary *_transitionSectionInfosByTransitionSection;
    NSDictionary *_transitionSectionInfosByVisualSection;
    _Bool _delegateSupportsGroupedSections;
    _Bool _delegateSupportsAnchorItemForContentOffset;
    _Bool _delegateSupportsTransitionAutoContentOffsetEnabled;
    _Bool _delegateSupportsDidInvalidateWithContext;
    _Bool _usesRenderedStrips;
    NSIndexPath *_reorderingSourceIndexPath;
    NSIndexPath *_reorderingTargetIndexPath;
    NSIndexPath *_reorderingInsertedIndexPath;
    struct CGPoint _transitionEffectiveContentOrigin;
    _Bool _transitionApplyingEffectiveContentOrigin;
    PULayoutAnimationsHelper *_transitionAnimationsHelper;
    id _transitionAnimationEndCleanupBlock;
    _Bool _transitionIsAppearing;
    _Bool _transitionIsAnimated;
    _Bool _transitionAnchorShiftsColumns;
    _Bool _transitionZoomingOut;
    _Bool _floatingSectionHeadersEnabled;
    _Bool _usesRenderedStripTopExtendersForTransitions;
    NSSet *_hiddenItemIndexPaths;
    NSString *_sectionHeaderElementKind;
    double _sectionHeaderHeight;
    double _sectionTopPadding;
    id <PUCollectionViewLayoutTransitioningDelegate> _transitioningDelegate;
    double _globalTopPadding;
    double _globalBottomPadding;
    UICollectionViewLayout *_transitionLayout;
    long long _transitionAnchorColumnOffset;
    NSIndexPath *_transitionExplicitAnchorItemIndexPath;
    NSIndexPath *_transitionFirstVisibleRowVisualPath;
    NSIndexPath *_transitionLastVisibleRowVisualPath;
    id <PUSectionedGridLayoutDelegate> _delegate;
    long long _columnsPerRow;
    PULayoutSampledSectioning *_layoutSectioning;
    double _sectionBottomPadding;
    double _globalFooterHeight;
    NSString *_renderedStripsElementKind;
    long long _cropType;
    double _cropAmount;
    struct CGPoint _transitionStartContentOffset;
    struct CGPoint _transitionEndContentOffset;
    struct CGSize _interItemSpacing;
    struct CGSize _itemSize;
    struct UIEdgeInsets _sectionContentInset;
}

+ (Class)invalidationContextClass;
@property(nonatomic) _Bool usesRenderedStripTopExtendersForTransitions; // @synthesize usesRenderedStripTopExtendersForTransitions=_usesRenderedStripTopExtendersForTransitions;
@property(nonatomic) double cropAmount; // @synthesize cropAmount=_cropAmount;
@property(nonatomic) long long cropType; // @synthesize cropType=_cropType;
@property(copy, nonatomic) NSString *renderedStripsElementKind; // @synthesize renderedStripsElementKind=_renderedStripsElementKind;
@property(nonatomic) double globalFooterHeight; // @synthesize globalFooterHeight=_globalFooterHeight;
@property(nonatomic) _Bool floatingSectionHeadersEnabled; // @synthesize floatingSectionHeadersEnabled=_floatingSectionHeadersEnabled;
@property(nonatomic) struct UIEdgeInsets sectionContentInset; // @synthesize sectionContentInset=_sectionContentInset;
@property(nonatomic) double sectionBottomPadding; // @synthesize sectionBottomPadding=_sectionBottomPadding;
@property(nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property(nonatomic) struct CGSize interItemSpacing; // @synthesize interItemSpacing=_interItemSpacing;
@property(readonly, nonatomic) PULayoutSampledSectioning *layoutSectioning; // @synthesize layoutSectioning=_layoutSectioning;
- (void)_setColumnsPerRow:(long long)arg1;
@property(nonatomic) long long columnsPerRow; // @synthesize columnsPerRow=_columnsPerRow;
@property(nonatomic) __weak id <PUSectionedGridLayoutDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy, nonatomic) NSIndexPath *transitionLastVisibleRowVisualPath; // @synthesize transitionLastVisibleRowVisualPath=_transitionLastVisibleRowVisualPath;
@property(readonly, copy, nonatomic) NSIndexPath *transitionFirstVisibleRowVisualPath; // @synthesize transitionFirstVisibleRowVisualPath=_transitionFirstVisibleRowVisualPath;
@property(nonatomic) _Bool transitionZoomingOut; // @synthesize transitionZoomingOut=_transitionZoomingOut;
@property(copy, nonatomic) NSIndexPath *transitionExplicitAnchorItemIndexPath; // @synthesize transitionExplicitAnchorItemIndexPath=_transitionExplicitAnchorItemIndexPath;
@property(nonatomic) _Bool transitionAnchorShiftsColumns; // @synthesize transitionAnchorShiftsColumns=_transitionAnchorShiftsColumns;
@property(readonly, nonatomic) long long transitionAnchorColumnOffset; // @synthesize transitionAnchorColumnOffset=_transitionAnchorColumnOffset;
@property(nonatomic) struct CGPoint transitionEffectiveContentOrigin; // @synthesize transitionEffectiveContentOrigin=_transitionEffectiveContentOrigin;
@property(readonly, nonatomic) struct CGPoint transitionEndContentOffset; // @synthesize transitionEndContentOffset=_transitionEndContentOffset;
@property(nonatomic) _Bool transitionIsAnimated; // @synthesize transitionIsAnimated=_transitionIsAnimated;
@property(nonatomic) struct CGPoint transitionStartContentOffset; // @synthesize transitionStartContentOffset=_transitionStartContentOffset;
@property(readonly, nonatomic) UICollectionViewLayout *transitionLayout; // @synthesize transitionLayout=_transitionLayout;
@property(readonly, nonatomic) _Bool transitionIsAppearing; // @synthesize transitionIsAppearing=_transitionIsAppearing;
@property(nonatomic) double globalBottomPadding; // @synthesize globalBottomPadding=_globalBottomPadding;
@property(nonatomic) double globalTopPadding; // @synthesize globalTopPadding=_globalTopPadding;
@property(nonatomic) __weak id <PUCollectionViewLayoutTransitioningDelegate> transitioningDelegate; // @synthesize transitioningDelegate=_transitioningDelegate;
@property(nonatomic) double sectionTopPadding; // @synthesize sectionTopPadding=_sectionTopPadding;
@property(nonatomic) double sectionHeaderHeight; // @synthesize sectionHeaderHeight=_sectionHeaderHeight;
@property(copy, nonatomic) NSString *sectionHeaderElementKind; // @synthesize sectionHeaderElementKind=_sectionHeaderElementKind;
@property(copy, nonatomic) NSSet *hiddenItemIndexPaths; // @synthesize hiddenItemIndexPaths=_hiddenItemIndexPaths;
- (void).cxx_destruct;
- (id)pu_debugRows;
- (void)endInsertingItem;
- (void)beginInsertingItemAtIndexPath:(id)arg1;
- (id)reorderedIndexPath:(id)arg1;
- (void)endReordering;
- (void)updateReorderingTargetIndexPath:(id)arg1;
- (void)beginReorderingItemAtIndexPath:(id)arg1;
- (void)_adjustItemLayoutAttributesForReordering:(id)arg1;
- (struct PUGridCoordinates)gridCoordinatesInTransitionSectionForItemAtIndexPath:(id)arg1;
- (struct PUGridCoordinates)gridCoordinatesInVisualSectionForItemAtIndexPath:(id)arg1;
- (id)pu_layoutAttributesForElementClosestToPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 passingTest:(id)arg3;
- (id)_realItemIndexPathClosestToPoint:(struct CGPoint)arg1 inRect:(struct CGRect)arg2 withTest:(id)arg3;
- (struct PUSimpleIndexPath)_visualIndexPathForTransitionCoordinates:(struct PUGridCoordinates)arg1 inTransitionSection:(long long)arg2;
- (_Bool)hasItemAtGridCoordinates:(struct PUGridCoordinates)arg1 inTransitionSection:(long long)arg2;
- (id)mainRealIndexPathAtGridCoordinates:(struct PUGridCoordinates)arg1 inTransitionSection:(long long)arg2;
- (id)targetTransitionRealIndexPathForIndexPath:(id)arg1;
- (struct PUGridCoordinates)visualGridCoordsForTransitionGridCoords:(struct PUGridCoordinates)arg1 atTransitionSection:(long long)arg2 outVisualSection:(long long *)arg3;
- (struct PUGridCoordinates)targetTransitionGridCoordsForGridCoords:(struct PUGridCoordinates)arg1 atVisualSection:(long long)arg2 outTransitionSection:(long long *)arg3;
- (id)transitionAnchorIndexPathForTransitionSection:(long long)arg1;
- (id)transitionSectionsInRect:(struct CGRect)arg1 toOrFromGridLayout:(id)arg2;
- (id)itemIndexPathClosestToPoint:(struct CGPoint)arg1;
- (id)itemIndexPathAtPoint:(struct CGPoint)arg1;
- (id)itemIndexPathAtCenterOfRect:(struct CGRect)arg1;
- (long long)numberOfRowsInVisualSection:(long long)arg1;
- (long long)numberOfVisualItemsInVisualSection:(long long)arg1;
- (long long)numberOfRealItemsInVisualSection:(long long)arg1;
- (long long)numberOfRealItemsInRealSection:(long long)arg1;
- (long long)numberOfRealSections;
- (void)enumerateRealSectionsForVisualSection:(long long)arg1 usingBlock:(id)arg2;
- (long long)mainRealSectionForVisualSection:(long long)arg1;
- (long long)visualSectionForRealSection:(long long)arg1;
- (_Bool)shouldHideVisualSection:(long long)arg1;
@property(readonly, nonatomic) long long numberOfVisualSections;
@property(readonly, nonatomic) long long itemsPerRow;
- (long long)_renderedStripIndexForSectionRowIndex:(long long)arg1;
- (long long)_firstVisualItemIndexForRenderedStripIndex:(long long)arg1;
- (void)getVisualSectionIndex:(long long *)arg1 visualItemRange:(struct _NSRange *)arg2 forRenderStripAtIndexPath:(id)arg3;
- (void)enumerateItemIndexPathsForVisualSection:(long long)arg1 inVisualItemRange:(struct _NSRange)arg2 usingBlock:(id)arg3;
- (long long)visualSectionForHeaderIndexPath:(id)arg1;
- (long long)numberOfItemsInRealSection:(long long)arg1 forSectioning:(id)arg2;
- (id)realSectionsForVisualSection:(long long)arg1 forSectioning:(id)arg2;
- (long long)numberOfRealSectionsForSectioning:(id)arg1;
- (long long)maximumNumberOfItemsInVisualSection:(long long)arg1 withNumberOfRealItems:(long long)arg2 forSectioning:(id)arg3;
- (long long)numberOfVisualSectionsForSectioning:(id)arg1;
- (struct CGPoint)_visibleRectOriginForScrollOffset:(struct CGPoint)arg1;
- (struct CGPoint)_currentVisibleRectOrigin;
- (double)_sectionWidth;
- (long long)numberOfColumnsForWidth:(double)arg1;
- (struct CGSize)layoutItemSizeForColumn:(long long)arg1;
- (struct _NSRange)visualSectionsInRect:(struct CGRect)arg1;
- (long long)_visualSectionAtPoint:(struct CGPoint)arg1;
- (double)_heightOfSectionAtVisualIndex:(long long)arg1;
- (double)_startYOfContentAtVisualSectionIndex:(long long)arg1;
- (double)_startYOfVisualSectionAtIndex:(long long)arg1;
- (struct CGRect)frameForSectionHeaderAtVisualSection:(long long)arg1;
- (struct CGRect)frameForSectionHeaderOfRealItem:(id)arg1;
- (struct CGRect)frameForItemAtGridCoordinates:(struct PUGridCoordinates)arg1 inTransitionSection:(long long)arg2;
- (struct PUSimpleIndexPath)_visualRowPathForTransitionRowIndex:(long long)arg1 transitionSectionInfo:(id)arg2;
- (long long)numberOfContiguousRowsInTransitionSection:(long long)arg1;
- (struct CGRect)frameForItemAtGridCoordinates:(struct PUGridCoordinates)arg1 inVisualSection:(long long)arg2;
- (struct PUSimpleIndexPath)_itemVisualIndexPathAtPoint:(struct CGPoint)arg1;
- (void)_enumerateVisualItemFramesInRect:(struct CGRect)arg1 usingBlock:(id)arg2;
- (long long)visualIndexForItemAtGridCoordinates:(struct PUGridCoordinates)arg1;
- (struct PUGridCoordinates)gridCoordinatesInSectionForItemAtVisualIndex:(long long)arg1;
- (struct _NSRange)visualRowsInRect:(struct CGRect)arg1 inVisualSection:(long long)arg2 totalVisualSectionRows:(long long *)arg3;
- (id)_gridTransitionLayout;
@property(readonly, nonatomic) NSIndexPath *globalFooterIndexPath;
- (id)description;
- (struct CATransform3D)_transformToConvertRect:(struct CGRect)arg1 intoRect:(struct CGRect)arg2 referenceCenter:(struct CGPoint)arg3;
- (void)adjustEffectiveContentOriginForTransitionEndContentOffset:(struct CGPoint)arg1;
- (_Bool)_visualSectionsMatchTransitionSectionsToOrFromLayout:(id)arg1;
- (void)_adjustRenderedStripLayoutAttributes:(id)arg1 toOrFromGridLayout:(id)arg2 isAppearing:(_Bool)arg3;
- (void)_adjustSectionHeaderLayoutAttributes:(id)arg1 toOrFromGridLayout:(id)arg2 isAppearing:(_Bool)arg3;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (struct CGRect)_frameByAdjustingOffScreenEnteringFrame:(struct CGRect)arg1 forRowAtVisualIndexPath:(struct PUSimpleIndexPath)arg2 transitionSectionInfo:(id)arg3 toOrFromGridLayout:(id)arg4 isAppearing:(_Bool)arg5;
- (struct PUGridCoordinates)_targetTransitionGridCoordsForGridCoords:(struct PUGridCoordinates)arg1 atVisualSection:(long long)arg2 transitionSectionInfo:(id)arg3;
- (void)_adjustGridTransitionLayoutAttributes:(id)arg1 toOrFromGridLayout:(id)arg2 outTargetRowExists:(_Bool *)arg3 isAppearing:(_Bool)arg4;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (struct CGPoint)_targetContentOffsetWithAnchorItemIndexPath:(id)arg1 isRotation:(_Bool)arg2 orTransitionFromLayout:(id)arg3 keepAnchorStable:(_Bool)arg4;
- (struct CGPoint)targetContentOffsetForTransitionFromGridLayout:(id)arg1;
- (void)_didFinishLayoutTransitionAnimations:(_Bool)arg1;
- (void)finalizeLayoutTransition;
- (void)_prepareForTransitionToOrFromGridLayout:(id)arg1 isAppearing:(_Bool)arg2;
- (void)_prepareForTransitionFromStackedLayout:(id)arg1;
- (void)prepareForTransitionToLayout:(id)arg1;
- (void)prepareForTransitionFromLayout:(id)arg1;
- (_Bool)_supportsAdvancedTransitionAnimations;
- (void)_updateHasFloatingHeaders;
- (void)_invalidateFloatingHeadersLayout;
- (void)_prepareFloatingHeadersLayoutIfNeeded;
- (long long)_floatingHeaderVisualSectionForVisibleOrigin:(struct CGPoint)arg1;
- (id)_animationForReusableView:(SEL)arg1 toLayoutAttributes:(id)arg2 type:(id)arg3;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareForAnimatedBoundsChange:(struct CGRect)arg1;
- (void)finalizeCollectionViewUpdates;
- (void)prepareForCollectionViewUpdates:(id)arg1;
- (id)_layoutAttributesForSupplementaryViewOfKind:(id)arg1 forVisualSection:(long long)arg2 supplementaryViewIndex:(long long)arg3;
- (_Bool)_isSupportedSupplementaryViewKind:(id)arg1;
- (id)_supplementaryViewKinds;
- (void)_invalidateSupplementaryViewKinds;
- (id)_layoutAttributesForItemAtVisualIndexPath:(struct PUSimpleIndexPath)arg1 realIndexPath:(id)arg2 isMainRealItem:(_Bool)arg3;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)supplementaryViewIndexPathForVisualSection:(long long)arg1 supplementaryViewItemIndex:(long long)arg2;
- (long long)visualSectionForSupplementaryViewIndexPath:(id)arg1;
- (_Bool)_isTransitionForeignSupplementaryViewKind:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)assetIndexPathsForElementsInRect:(struct CGRect)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)invalidationContextForBoundsChange:(struct CGRect)arg1;
- (_Bool)shouldInvalidateLayoutForBoundsChange:(struct CGRect)arg1;
- (void)invalidateLayoutForMetricsChange;
- (void)invalidateLayoutForVerticalScroll;
- (void)invalidateLayoutWithContext:(id)arg1;
- (void)_invalidateLayoutWithContext:(id)arg1;
@property(readonly, nonatomic) struct CGSize transitionActualContentSize;
- (struct CGSize)collectionViewContentSize;
- (void)_prepareLayoutIfNeeded;
- (void)_prepareSamplingDataIfNeeded;
- (void)_prepareSectioningDataIfNeeded;
- (void)_clearLayoutCaches;
- (void)_clearSamplingCaches;
- (void)_clearSectioningCaches;
- (void)_clearRetainedCaches;
- (void)prepareLayout;
- (void)dealloc;
- (id)init;

@end

