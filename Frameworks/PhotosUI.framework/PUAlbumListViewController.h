/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "PLCloudFeedNavigating-Protocol.h"
#import "PLNavigableAssetContainerListViewController-Protocol.h"
#import "PLNavigablePhotoStreamViewController-Protocol.h"
#import "PUAlbumListTableViewCellDelegate-Protocol.h"
#import "PUAlbumStreamActivityDelegate-Protocol.h"
#import "PUCollectionViewReorderDelegate-Protocol.h"
#import "PUFeedRecentsManagerDelegate-Protocol.h"
#import "PUSearchViewControllerDelegate-Protocol.h"
#import "PUSectionedGridLayoutDelegate-Protocol.h"
#import "PUStackedAlbumControllerTransition-Protocol.h"
#import "PUStackedAlbumTransitionDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPopoverPresentationControllerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableDictionary, NSMutableSet, NSString, PHCachingImageManager, PHCollection, PHCollectionList, PHFetchResult, PUAlbumListTransitionContext, PUAlbumListViewControllerSpec, PUAlbumStreamActivity, PUCollageView, PUCollectionView, PUFeedRecentsManager, PUFeedViewController, PULongPressableBarButtonItem, PUPhotoPinchGestureRecognizer, PUPhotosGlobalFooterView, PUPhotosGridViewController, PUSearchButtonItem, PUSearchViewController, PUSectionedGridLayout, PUSessionInfo, UIBarButtonItem, UICollectionViewLayout, UITableView, UIView, _UIContentUnavailableView;

@interface PUAlbumListViewController : UIViewController <UIGestureRecognizerDelegate, PUStackedAlbumTransitionDelegate, PUAlbumStreamActivityDelegate, PUFeedRecentsManagerDelegate, UICollectionViewDataSource, UICollectionViewDelegate, PUCollectionViewReorderDelegate, PUSectionedGridLayoutDelegate, UITableViewDataSource, UITableViewDelegate, PUAlbumListTableViewCellDelegate, UIPopoverPresentationControllerDelegate, UISearchBarDelegate, PUSearchViewControllerDelegate, PHPhotoLibraryChangeObserver, PLNavigableAssetContainerListViewController, PLCloudFeedNavigating, PLNavigablePhotoStreamViewController, PUStackedAlbumControllerTransition>
{
    PUAlbumListViewControllerSpec *_spec;
    struct CGRect _lastLayoutUpdateBounds;
    UIBarButtonItem *_doneButtonItem;
    UIBarButtonItem *_cancelButtonItem;
    PULongPressableBarButtonItem *_albumCreationButtonItem;
    PUSearchButtonItem *_searchButtonItem;
    PUAlbumStreamActivity *_albumStreamActivity;
    NSString *_albumSubtitleFormat;
    _Bool _showAddNewAlbumPlaceholder;
    PUCollageView *_aggregateCollageView;
    NSMutableDictionary *_subCollectionFetchResultsCache;
    NSMutableSet *_changedSubCollectionIDs;
    NSMutableDictionary *_collectionIndexByID;
    _Bool _isRootSharedAlbumList;
    _Bool _isRootFolder;
    _Bool _viewInSyncWithModel;
    _Bool __aboutToCreateAlbum;
    _Bool __isKeyboardAware;
    _Bool _progressViewVisible;
    _Bool _disallowsSearch;
    NSArray *__syncProgressAlbums;
    PUSessionInfo *_sessionInfo;
    PHCollectionList *_collectionList;
    PHFetchResult *_collectionsFetchResult;
    PHFetchResult *_filteredFetchResult;
    PHCollection *_retitlingCollection;
    PHCachingImageManager *__cachingImageManager;
    PUFeedRecentsManager *__feedRecentsManager;
    PUCollageView *__feedCollageView;
    _UIContentUnavailableView *__emptyPlaceholderView;
    UIView *__backgroundView;
    NSString *__justCreatedCollectionIdentifier;
    id __justCreatedCollectionAnimationCompletionHandler;
    id __onViewDidLayoutSubviewsBlock;
    PUPhotosGlobalFooterView *_syncProgressView;
    PHCollection *_pushedAlbum;
    UIViewController *_pushedController;
    PUPhotoPinchGestureRecognizer *__photoPinchGestureRecognizer;
    PUFeedViewController *__cachedFeedViewController;
    NSMutableSet *__preheatedCollections;
    PUCollectionView *__mainCollectionView;
    PUSectionedGridLayout *__mainCollectionViewLayout;
    PUAlbumListTransitionContext *_albumListTransitionContext;
    UICollectionViewLayout *__albumListTransitionLayout;
    UITableView *__mainTableView;
    long long __ignoredReorderNotificationCount;
    PUSearchViewController *__modalSearchViewController;
    PUPhotosGridViewController *__modalSearchResultsViewController;
    struct CGRect __previousPreheatRect;
}

@property(retain, nonatomic, setter=_setModalSearchResultsViewController:) PUPhotosGridViewController *_modalSearchResultsViewController; // @synthesize _modalSearchResultsViewController=__modalSearchResultsViewController;
@property(retain, nonatomic, setter=_setModalSearchViewController:) PUSearchViewController *_modalSearchViewController; // @synthesize _modalSearchViewController=__modalSearchViewController;
@property(nonatomic, setter=_setIgnoredReorderNotificationCount:) long long _ignoredReorderNotificationCount; // @synthesize _ignoredReorderNotificationCount=__ignoredReorderNotificationCount;
@property(retain, nonatomic, setter=_setMainTableView:) UITableView *_mainTableView; // @synthesize _mainTableView=__mainTableView;
@property(retain, nonatomic, setter=setAlbumListTransitionLayout:) UICollectionViewLayout *_albumListTransitionLayout; // @synthesize _albumListTransitionLayout=__albumListTransitionLayout;
@property(retain, nonatomic) PUAlbumListTransitionContext *albumListTransitionContext; // @synthesize albumListTransitionContext=_albumListTransitionContext;
@property(retain, nonatomic, setter=_setMainCollectionViewLayout:) PUSectionedGridLayout *_mainCollectionViewLayout; // @synthesize _mainCollectionViewLayout=__mainCollectionViewLayout;
@property(retain, nonatomic, setter=_setMainCollectionView:) PUCollectionView *_mainCollectionView; // @synthesize _mainCollectionView=__mainCollectionView;
@property(retain, nonatomic, setter=_setPreheatedCollections:) NSMutableSet *_preheatedCollections; // @synthesize _preheatedCollections=__preheatedCollections;
@property(nonatomic, setter=_setPreviousPreheatRect:) struct CGRect _previousPreheatRect; // @synthesize _previousPreheatRect=__previousPreheatRect;
@property(retain, nonatomic, setter=_setCachedFeedViewController:) PUFeedViewController *_cachedFeedViewController; // @synthesize _cachedFeedViewController=__cachedFeedViewController;
@property(retain, nonatomic, setter=_setPhotoPinchGestureRecognizer:) PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer; // @synthesize _photoPinchGestureRecognizer=__photoPinchGestureRecognizer;
@property(retain, nonatomic) UIViewController *pushedController; // @synthesize pushedController=_pushedController;
@property(retain, nonatomic) PHCollection *pushedAlbum; // @synthesize pushedAlbum=_pushedAlbum;
@property(retain, nonatomic) PUPhotosGlobalFooterView *syncProgressView; // @synthesize syncProgressView=_syncProgressView;
@property(nonatomic) _Bool disallowsSearch; // @synthesize disallowsSearch=_disallowsSearch;
@property(nonatomic) _Bool progressViewVisible; // @synthesize progressViewVisible=_progressViewVisible;
@property(nonatomic, setter=_setKeyboardAware:) _Bool _isKeyboardAware; // @synthesize _isKeyboardAware=__isKeyboardAware;
@property(copy, nonatomic, setter=_setOnViewDidLayoutSubviewsBlock:) id _onViewDidLayoutSubviewsBlock; // @synthesize _onViewDidLayoutSubviewsBlock=__onViewDidLayoutSubviewsBlock;
@property(nonatomic, setter=_setAboutToCreateAlbum:) _Bool _aboutToCreateAlbum; // @synthesize _aboutToCreateAlbum=__aboutToCreateAlbum;
@property(copy, nonatomic, setter=_setJustCreatedCollectionAnimationCompletionHandler:) id _justCreatedCollectionAnimationCompletionHandler; // @synthesize _justCreatedCollectionAnimationCompletionHandler=__justCreatedCollectionAnimationCompletionHandler;
@property(retain, nonatomic, setter=_setJustCreatedCollectionIdentifier:) NSString *_justCreatedCollectionIdentifier; // @synthesize _justCreatedCollectionIdentifier=__justCreatedCollectionIdentifier;
@property(retain, nonatomic, setter=_setBackgroundView:) UIView *_backgroundView; // @synthesize _backgroundView=__backgroundView;
@property(retain, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
@property(retain, nonatomic) PUCollageView *_feedCollageView; // @synthesize _feedCollageView=__feedCollageView;
@property(retain, nonatomic) PUFeedRecentsManager *_feedRecentsManager; // @synthesize _feedRecentsManager=__feedRecentsManager;
@property(readonly, nonatomic) PHCachingImageManager *_cachingImageManager; // @synthesize _cachingImageManager=__cachingImageManager;
@property(retain, nonatomic) PHCollection *retitlingCollection; // @synthesize retitlingCollection=_retitlingCollection;
@property(nonatomic, getter=isViewInSyncWithModel) _Bool viewInSyncWithModel; // @synthesize viewInSyncWithModel=_viewInSyncWithModel;
@property(nonatomic) _Bool isRootFolder; // @synthesize isRootFolder=_isRootFolder;
@property(retain, nonatomic) PHFetchResult *filteredFetchResult; // @synthesize filteredFetchResult=_filteredFetchResult;
@property(retain, nonatomic) PHFetchResult *collectionsFetchResult; // @synthesize collectionsFetchResult=_collectionsFetchResult;
@property(retain, nonatomic) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
@property(retain, nonatomic) PUSessionInfo *sessionInfo; // @synthesize sessionInfo=_sessionInfo;
@property(readonly, nonatomic) _Bool isRootSharedAlbumList; // @synthesize isRootSharedAlbumList=_isRootSharedAlbumList;
- (void).cxx_destruct;
- (void)searchViewControllerDidCancel:(id)arg1;
- (void)searchViewController:(id)arg1 presentFromResultsViewController:(id)arg2 animated:(_Bool)arg3;
- (void)searchViewController:(id)arg1 displaySearchResults:(id)arg2 orAlbum:(struct NSObject *)arg3 withTitle:(id)arg4;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)popoverPresentationControllerDidDismissPopover:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)albumListTableViewCell:(id)arg1 willChangeState:(unsigned long long)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (id)tableView:(id)arg1 targetIndexPathForMoveFromRowAtIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)collectionView:(id)arg1 transitionLayoutForOldLayout:(id)arg2 newLayout:(id)arg3;
- (id)sectionedGridLayoutAnchorItemForAdjustingContentOffset:(id)arg1;
- (id)sectionedGridLayout:(id)arg1 sectionsForVisualSection:(long long)arg2;
- (long long)numberOfVisualSectionsForSectionedGridLayout:(id)arg1;
- (void)collectionView:(id)arg1 moveItemAtIndexPath:(id)arg2 toIndexPath:(id)arg3 completionHandler:(id)arg4;
- (id)collectionView:(id)arg1 targetIndexPathForMoveFromIndexPath:(id)arg2 toProposedIndexPath:(id)arg3;
- (_Bool)collectionView:(id)arg1 canReorderItemAtIndexPath:(id)arg2;
- (void)configureSupplementaryView:(id)arg1 ofKind:(id)arg2 forIndexPath:(id)arg3 animated:(_Bool)arg4;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)setAlbumListTransitionLayout:(id)arg1 animated:(_Bool)arg2;
- (id)gridLayout;
- (id)collectionView;
- (void)handleTransitionFade:(_Bool)arg1 animate:(_Bool)arg2;
- (void)albumStreamActivity:(id)arg1 didCreateAlbum:(struct NSObject *)arg2;
- (void)albumStreamActivity:(id)arg1 didFinishSuccessfully:(_Bool)arg2;
- (id)stackedAlbumTransition:(id)arg1 layoutForPHCollection:(id)arg2;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(_Bool)arg2 forPHCollection:(id)arg3;
- (id)stackedAlbumTransition:(id)arg1 layoutForCollection:(id)arg2;
- (void)stackedAlbumTransition:(id)arg1 setVisibility:(_Bool)arg2 forCollection:(id)arg3;
- (_Bool)pu_handleSecondTabTap;
- (void)navigateToPhotoStreamMode:(long long)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (id)_nextCloudFeedNavigatingObject;
- (_Bool)cloudFeedInvitationForAlbumIsAvailableForNavigation:(id)arg1;
- (_Bool)cloudFeedCommentIsAvailableForNavigation:(id)arg1;
- (_Bool)cloudFeedAssetIsAvailableForNavigation:(id)arg1;
- (void)navigateToRevealAssetCollection:(id)arg1 initiallyHidden:(_Bool)arg2 animated:(_Bool)arg3;
- (_Bool)_canUseStackTransitionFromCollection:(id)arg1;
- (void)navigateToAllPhotosAnimated:(_Bool)arg1 completion:(id)arg2;
- (void)navigateToCollection:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (id)_createControllerForFolder:(id)arg1;
- (id)_createControllerForStandInCollection:(id)arg1;
- (void)albumListCellContentView:(id)arg1 didEndRetitingFromTitle:(id)arg2 toTitle:(id)arg3;
- (_Bool)albumListCellContentViewShouldBeginRetitling:(id)arg1;
- (void)albumListCellContentView:(id)arg1 performPinAction:(id)arg2;
- (void)albumListCellContentView:(id)arg1 performDeleteAction:(id)arg2;
- (void)feedRecentsManagerRecentAssetsDidChange:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)_updateAlbumSubtitleFormat;
- (void)updateSyncProgress;
- (void)sessionInfoPhotoSelectionDidChange:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)setKeyboardAware:(_Bool)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotate;
- (long long)tableViewStyle;
- (id)backgroundColorForTableView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)_updateMainView;
- (void)viewDidLoad;
- (id)_suppressionContexts;
- (_Bool)_appAllowsSupressionOfAlerts;
- (void)_invalidateSyncProgressAlbums;
@property(readonly, nonatomic) NSArray *_syncProgressAlbums; // @synthesize _syncProgressAlbums=__syncProgressAlbums;
- (void)_updatePreheatedAssets;
- (void)_resetPreheating;
- (id)_visibleAssetsForCollection:(id)arg1;
- (void)_getDisplayableAssets:(id *)arg1 indexes:(id *)arg2 forCollection:(id)arg3 maximumCount:(long long)arg4;
- (id)_getDisplayableFacesForCollectionList:(id)arg1 maximumCount:(long long)arg2;
- (id)_getDisplayableAssetsForStandInCollectionList:(id)arg1 maximumCount:(long long)arg2;
- (void)_beginInteractiveZoomOut:(id)arg1;
- (void)_beginInteractiveNavigationForItemAtPoint:(struct CGPoint)arg1;
- (void)_handlePhotoPinchGestureRecognizer:(id)arg1;
- (id)newGridViewControllerForAllPhotos;
- (id)newCloudFeedViewController;
- (id)newGridViewControllerForAssetCollection:(id)arg1;
- (id)newGridViewControllerForFolder:(id)arg1;
- (id)newGridViewControllerForStandInCollection:(id)arg1;
- (void)handleSessionInfoAlbumSelection:(id)arg1;
- (void)handleDeleteAlbumAtIndexPath:(id)arg1;
- (void)_allChildAssetCollections:(id)arg1 andCollectionLists:(id)arg2 ofFolder:(id)arg3;
- (void)_handleCreateAlbumOrFolder:(_Bool)arg1;
- (void)handleCreateFolder;
- (void)handleCreateAlbum;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (void)_didSelectPlaceholderAtIndexPath:(id)arg1;
- (void)_handleCancelButton:(id)arg1;
- (void)_handleDoneButton:(id)arg1;
- (void)handleCreateSharedAlbum;
- (void)_handleAlbumOrFolderCreation:(id)arg1;
- (void)_handleAlbumCreation:(id)arg1;
- (id)indexPathForAddNewAlbumPlaceholder;
- (id)indexPathForCloudFeedPlaceholder;
- (long long)placeholderKindAtIndexPath:(id)arg1;
- (_Bool)isPlaceholderAtIndexPath:(id)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
@property(readonly, nonatomic) long long bottomPlaceholdersSection;
@property(readonly, nonatomic) long long albumsSection;
@property(readonly, nonatomic) long long topPlaceholdersSection;
- (_Bool)showsBottomPlaceholdersSection;
- (_Bool)showsSeparatorBelowTopPlaceholdersSection;
- (_Bool)showsTopPlaceholdersSection;
- (void)_setCollection:(id)arg1 pinned:(_Bool)arg2;
- (_Bool)_isCollectionPinned:(id)arg1;
- (_Bool)shouldShowAllPhotosItem;
- (_Bool)_shouldShowAggregateItem;
- (_Bool)_collectionIsSynced:(id)arg1;
- (_Bool)_collectionIsHiddenAlbum:(id)arg1;
- (_Bool)_collectionIsCloudSharedAndOwned:(id)arg1;
- (_Bool)_collectionIsCloudShared:(id)arg1;
- (_Bool)_collectionIsRecentlyAdded:(id)arg1;
- (_Bool)_collectionIsImports:(id)arg1;
- (_Bool)_collectionIsEvents:(id)arg1;
- (_Bool)_collectionIsFaces:(id)arg1;
- (_Bool)_collectionIsStandIn:(id)arg1;
- (_Bool)_collectionIsFolder:(id)arg1;
- (id)_changedSubCollectionIndexes;
- (_Bool)_updateCachedSubCollectionFetchResultsForChange:(id)arg1 removedObjects:(id)arg2;
- (id)_cachedFetchResultForSubCollection:(id)arg1;
- (_Bool)shouldBeginRetitlingAlbumAtIndexPath:(id)arg1;
- (_Bool)shouldAllowEmailInAlbumSubtitle;
- (id)subtitleForCollection:(id)arg1;
- (void)setSyncProgressVisible:(_Bool)arg1;
- (void)_updateCollageView:(id)arg1 forAssets:(id)arg2;
- (void)_updateStackView:(id)arg1 forFaces:(id)arg2 withCustomEmptyPlaceholderImage:(id)arg3;
- (void)_updateStackView:(id)arg1 forAssets:(id)arg2 collection:(id)arg3 withCustomEmptyPlaceholderImage:(id)arg4;
- (void)_prepareStackView:(id)arg1 forCollection:(id)arg2 withStackCount:(long long)arg3 withCustomEmptyPlaceHolderImage:(id)arg4;
- (void)updatePlaceholderListCellContentView:(struct PUAlbumListCellContentView *)arg1 forItemAtIndexPath:(id)arg2 animated:(_Bool)arg3;
- (void)setTitleForCell:(id)arg1 withCollection:(id)arg2;
- (void)updateAlbumListCellContentView:(id)arg1 forItemAtIndexPath:(id)arg2 animated:(_Bool)arg3;
- (void)updateListCellForItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)_updateAddNewAlbumPlaceholderAnimated:(_Bool)arg1;
- (_Bool)showAddNewAlbumPlaceholder;
- (_Bool)shouldShowActivityItem;
- (void)_updateEmptyPlaceholderAnimated:(_Bool)arg1;
- (void)_updateNavigationBannerAnimated:(_Bool)arg1;
- (id)_pickerBannerView;
- (void)_updatePeripheralInterfaceAnimated:(_Bool)arg1;
- (_Bool)canShowSyncProgress;
- (struct PUAlbumListCellContentView *)visiblePlaceholderListCellContentViewAtIndexPath:(id)arg1;
- (id)visibleAlbumListCellContentViewAtIndexPath:(id)arg1;
- (id)indexPathForAlbumListCellContentView:(id)arg1;
- (id)indexPathsForItemsInRect:(struct CGRect)arg1;
- (id)indexPathForItemAtPoint:(struct CGPoint)arg1;
- (id)indexPathsForVisibleItems;
- (void)performBatchUpdatesWithDeletedIndexPaths:(id)arg1 insertedIndexPaths:(id)arg2 changedIndexPaths:(id)arg3 movedFromIndexPaths:(id)arg4 movedToIndexPaths:(id)arg5 completionHandler:(id)arg6;
- (void)visiblyInsertItemAtIndexPath:(id)arg1 completionHandler:(id)arg2;
- (id)mainScrollView;
- (void)deselectSelectedItemAnimated:(_Bool)arg1;
- (void)selectItemAtIndexPath:(id)arg1 animated:(_Bool)arg2;
- (void)scrollToItemAtIndexPath:(id)arg1 centered:(_Bool)arg2 animated:(_Bool)arg3;
- (void)reloadContentView;
- (id)collectionAtIndexPath:(id)arg1;
- (id)indexPathForCollection:(id)arg1;
- (id)_visibleStackViewForCollection:(id)arg1;
- (id)_visibleStackViewAtIndexPath:(id)arg1;
- (_Bool)_someAlbumSupportsEditing;
- (unsigned long long)_editCapabilitiesForAlbum:(id)arg1;
- (_Bool)shouldEnableCollection:(id)arg1;
- (_Bool)canReorderCollection:(id)arg1;
- (_Bool)canRenameCollection:(id)arg1;
- (_Bool)canDeleteCollection:(id)arg1;
- (_Bool)showsEmptyPlaceholderWhenEmpty;
- (_Bool)isEmpty;
- (id)_neededAlbumRelationships;
- (id)_neededAlbumProperties;
- (void)_searchResultsViewControllerDidFinish:(id)arg1;
- (void)_didDismissSearchResultsViewController;
- (void)_willDismissSearchResultsViewControllerAnimated:(_Bool)arg1;
- (void)_didDismissSearchViewController;
- (void)_willDismissSearchViewControllerAnimated:(_Bool)arg1;
- (void)_dismissSearchViewControllerAnimated:(_Bool)arg1;
- (void)_searchButtonPressed:(id)arg1;
- (void)_updateSearchButtonTextForActiveSearchField:(_Bool)arg1;
- (void)updateNavigationBarAnimated:(_Bool)arg1;
- (_Bool)_updateInterfaceForIncrementalModelChangeWithFetchResultChangeDetails:(id)arg1 animated:(_Bool)arg2;
- (void)_updateInterfaceForModelReloadAnimated:(_Bool)arg1;
- (unsigned long long)_unfilteredIndexForFilteredIndex:(unsigned long long)arg1;
- (void)_updateFilteredFetchResult;
- (id)_searchButtonItem;
- (id)_albumCreationButtonItem;
- (id)_cancelButtonItem;
- (id)_doneButtonItem;
- (void)updateInterfaceLayoutIfNecessary;
- (_Bool)updateSpec;
@property(readonly, nonatomic) PUAlbumListViewControllerSpec *spec;
- (void)dealloc;
- (id)initWithSpec:(id)arg1 isRootSharedAlbumList:(_Bool)arg2;

@end

