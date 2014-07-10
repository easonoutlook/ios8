/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PHPhotoLibraryChangeObserver-Protocol.h"
#import "PLDismissableViewController-Protocol.h"
#import "PLPhotoBrowserControllerDelegate-Protocol.h"
#import "PUAvalancheReviewControllerDelegate-Protocol.h"
#import "PUCollectionViewLayoutProvider-Protocol.h"
#import "PUEditPluginSessionDelegate-Protocol.h"
#import "PUPhotoEditViewControllerDelegate-Protocol.h"
#import "PUPhotoSelectionManagerDataSource-Protocol.h"
#import "PUPhotosSharingTransitionDelegate-Protocol.h"
#import "PUPhotosSharingViewControllerDelegate-Protocol.h"
#import "PUVideoEditPluginSessionDataSource-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"

@class NSDictionary, NSString, PHAsset, PHAssetCollection, PHCachingImageManager, PHFetchResult, PLCloudSharedComment, PLPhotoBrowserController, PLPhotoTileViewController, PLSlalomRegionEditor, PUAirplayRoute, PUAvalancheReviewController, PUPhotoBrowserControllerSpec, PUPhotoBrowserTitleView, PUPhotoPinchGestureRecognizer, PUPhotosSharingViewController, PUSlideshowSettings, PUVideoEditPluginSession, UIColor, UIImage, UIMovieScrubber, UIPopoverController, UIView, _UIContentUnavailableView, _UINavigationControllerPalette;

@interface PUPhotoBrowserController : UIViewController <PLPhotoBrowserControllerDelegate, PUPhotosSharingViewControllerDelegate, PUPhotosSharingTransitionDelegate, PUPhotoEditViewControllerDelegate, UIGestureRecognizerDelegate, PUCollectionViewLayoutProvider, PUAvalancheReviewControllerDelegate, UIPopoverControllerDelegate, PUVideoEditPluginSessionDataSource, PUEditPluginSessionDelegate, PLDismissableViewController, PHPhotoLibraryChangeObserver, PUPhotoSelectionManagerDataSource>
{
    PUPhotoBrowserControllerSpec *_spec;
    PLPhotoBrowserController *_legacyPhotoBrowserController;
    PUPhotoPinchGestureRecognizer *_photoPinchGestureRecognizer;
    NSDictionary *_toolbarButtons;
    NSDictionary *_navbarButtons;
    PUAirplayRoute *_currentAirplayRoute;
    UIPopoverController *_currentPopoverController;
    _UINavigationControllerPalette *_videoScrubberPalette;
    UIMovieScrubber *_videoScrubber;
    PLSlalomRegionEditor *_slalomRegionEditor;
    UIView *_videoScrubberClipView;
    PUSlideshowSettings *_deferredSlideshowSettings;
    _Bool _editingVideo;
    _Bool _editingComments;
    _Bool _browserIsPaging;
    _Bool _browserIsScrubbing;
    _Bool _isDeletingCurrentAsset;
    _Bool _isTransitioningShareSheet;
    PUPhotosSharingViewController *_sharingViewController;
    PUAvalancheReviewController *_avalancheReviewController;
    PUPhotoBrowserTitleView *_assetTitleView;
    _Bool _assetTitleViewWantsSubtitle;
    PUVideoEditPluginSession *_videoEditPluginSession;
    NSString *_cachedVideoAssetIdentifier;
    long long _cachedVideoEditActionType;
    _Bool _shouldShowOverlaysWhenViewAppears;
    _Bool _photoBackgroundHidden;
    _Bool _overlaysVisible;
    PHFetchResult *_assetCollections;
    PLCloudSharedComment *_initialComment;
    unsigned long long _allowedActions;
    id <PUPhotoBrowserControllerDelegate> _delegate;
    id __lockScreenSharingObserver;
    _UIContentUnavailableView *__emptyPlaceholderView;
    id _ppt_onDidEndPagingBlock;
}

@property(copy, nonatomic, setter=ppt_setOnDidEndPagingBlock:) id ppt_onDidEndPagingBlock; // @synthesize ppt_onDidEndPagingBlock=_ppt_onDidEndPagingBlock;
@property(retain, nonatomic, setter=_setEmptyPlaceholderView:) _UIContentUnavailableView *_emptyPlaceholderView; // @synthesize _emptyPlaceholderView=__emptyPlaceholderView;
@property(retain, nonatomic, setter=_setLockScreenSharingObserver:) id _lockScreenSharingObserver; // @synthesize _lockScreenSharingObserver=__lockScreenSharingObserver;
@property(nonatomic, getter=areOverlaysVisible, setter=_setOverlaysVisible:) _Bool overlaysVisible; // @synthesize overlaysVisible=_overlaysVisible;
@property(nonatomic, getter=isPhotoBackgroundHidden) _Bool photoBackgroundHidden; // @synthesize photoBackgroundHidden=_photoBackgroundHidden;
@property(nonatomic) __weak id <PUPhotoBrowserControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long allowedActions; // @synthesize allowedActions=_allowedActions;
@property(retain, nonatomic) PLCloudSharedComment *initialComment; // @synthesize initialComment=_initialComment;
@property(nonatomic) _Bool shouldShowOverlaysWhenViewAppears; // @synthesize shouldShowOverlaysWhenViewAppears=_shouldShowOverlaysWhenViewAppears;
@property(readonly, nonatomic) PHFetchResult *assetCollections; // @synthesize assetCollections=_assetCollections;
- (void).cxx_destruct;
- (id)pu_debugRows;
- (void)avalancheReviewControllerDidComplete:(id)arg1;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (struct CGSize)collectionViewContentSize;
- (long long)_tileCountForCurrentModalViewController;
- (id)_assetCollectionsDataSourceForCurrentModalViewController;
- (id)assetsInAssetCollection:(id)arg1;
@property(readonly, nonatomic) PHFetchResult *assetCollectionsFetchResult;
- (void)photosSharingTransition:(id)arg1 willAnimatePresent:(_Bool)arg2;
- (id)photosSharingTransition:(id)arg1 viewForTransitionWithAssetCollectionsDataSource:(id)arg2;
- (void)photosSharingTransition:(id)arg1 setVisibility:(_Bool)arg2 forKeyAssetIndexPath:(id)arg3 inAssetCollectionsDataSource:(id)arg4;
- (struct CGPoint)photosSharingTransition:(id)arg1 contentOffsetForKeyAssetIndexPath:(id)arg2 inAssetCollectionsDataSource:(id)arg3;
- (id)photosSharingTransition:(id)arg1 layoutForKeyAssetIndexPath:(id)arg2 inAssetCollectionsDataSource:(id)arg3;
- (struct CGRect)_frameForItemAtIndexPath:(id)arg1 inAssetCollectionsDataSource:(id)arg2 allowZoom:(_Bool)arg3;
- (void)photosSharingViewControllerDidCancel:(id)arg1 needsDismiss:(_Bool)arg2;
- (void)photosSharingViewControllerWillCancel:(id)arg1;
- (void)photosSharingViewController:(id)arg1 didCompleteWithActivityType:(id)arg2 success:(_Bool)arg3;
- (void)_dismissSharingViewControllerAnimated:(_Bool)arg1 completion:(id)arg2;
- (void)_finalizeSharingViewControllerDismiss;
- (void)_prepareForSharingViewControllerDismiss:(id)arg1;
- (void)photoEditController:(id)arg1 didFinishWithSavedChanges:(_Bool)arg2;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (_Bool)_currentItemHasAudio;
- (void)photoLibraryDidChange:(id)arg1;
- (void)photoBrowserController:(id)arg1 willShowMenuController:(id)arg2;
- (void)photoBrowserController:(id)arg1 didFailToStreamPhotoToCurrentRouteWithError:(id)arg2 retryBlock:(id)arg3;
- (id)photoBrowserControllerRequestsAirPlayRemoteSlideshowForCurrentRoute:(id)arg1;
- (id)photoBrowserControllerRequestsMediaControlClientForCurrentRoute:(id)arg1;
- (id)photoBrowserControllerRequestsCurrentAirplayRouteDictionary:(id)arg1;
- (_Bool)photoBrowserController:(id)arg1 isPhotoDeleteForSender:(id)arg2;
- (_Bool)photoBrowserControllerOverlaysVisible:(id)arg1;
- (void)photoBrowserControllerWillBeginPlayingVideo:(id)arg1;
- (void)photoBrowserControllerDidDeleteCurrentAsset:(id)arg1;
- (void)photoBrowserControllerWillDeleteCurrentAsset:(id)arg1;
- (void)photoBrowserController:(id)arg1 scrubberDidEndScrubbing:(id)arg2;
- (void)photoBrowserController:(id)arg1 scrubberDidBeginScrubbing:(id)arg2;
- (void)photoBrowserController:(id)arg1 tileController:(id)arg2 didAppear:(_Bool)arg3;
- (void)photoBrowserController:(id)arg1 willDisplayTileController:(id)arg2;
- (void)photoBrowserController:(id)arg1 commentControllerDidExitEditMode:(id)arg2;
- (void)photoBrowserController:(id)arg1 commentControllerWillEnterEditMode:(id)arg2;
- (void)photoBrowserController:(id)arg1 tileController:(id)arg2 videoViewDidCreateAttachments:(id)arg3;
- (void)photoBrowserControllerDidChangeVideoEditingMode:(id)arg1;
- (void)photoBrowserControllerDidUpdateBars:(id)arg1 animated:(_Bool)arg2;
- (void)photoBrowserController:(id)arg1 overlayVisibilityWillChangeTo:(_Bool)arg2 withDuration:(double)arg3;
- (void)photoBrowserControllerWillEndSlideshow:(id)arg1 playingOnExternalDisplay:(_Bool)arg2;
- (void)photoBrowserControllerWillBeginSlideshow:(id)arg1 playingOnExternalDisplay:(_Bool)arg2;
- (void)photoBrowserController:(id)arg1 photoTileViewControllerSingleTap:(id)arg2;
- (void)_setOverlaysVisible:(_Bool)arg1 animated:(_Bool)arg2 updateBarsVisibility:(_Bool)arg3;
- (void)_setOverlaysVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_applicationWillEnterForgroundHandler:(id)arg1;
- (void)photoBrowserController:(id)arg1 setUsesPhotoBrowserStyleStatusBar:(_Bool)arg2 animated:(_Bool)arg3;
- (id)photoBrowserControllerMakeToolbar:(id)arg1;
- (id)photoBrowserControllerMakeNavigationBar:(id)arg1;
- (void)photoBrowserControllerDidScroll:(id)arg1;
- (void)_updateVideoScrubberOffset;
- (void)photoBrowserControllerDidEndPaging:(id)arg1;
- (void)photoBrowserControllerWillBeginPaging:(id)arg1;
- (_Bool)_gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)pu_wantsTabBarVisible;
- (_Bool)pu_wantsToolbarVisible;
- (_Bool)pu_wantsNavigationBarVisible;
- (_Bool)pu_wantsStatusBarVisible;
- (void)_setOverlaysVisibleForModalTransition:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isEmpty;
- (void)_updateEmptyPlaceholderAnimated:(_Bool)arg1;
- (void)_updateBarItemsAnimated:(_Bool)arg1;
- (_Bool)_allowsActions:(unsigned long long)arg1;
- (void)_fetchCanRevertAsset:(id)arg1 asynchronously:(_Bool)arg2 handler:(id)arg3;
- (void)_updateVideoEditActionType;
- (void)_updateVideoViewAttachments:(id)arg1;
- (void)_animateOutPalette;
- (void)_animateInPalette;
- (void)_updateVideoScrubberToScrubberForCurrentVideoViewDelayed:(_Bool)arg1;
- (void)_updateBarsForCommentsEditingAnimated:(_Bool)arg1;
- (void)_updateBarsForVideoEditingAnimated:(_Bool)arg1;
- (void)_updateAssetTitleView;
- (void)_updateBackButtonItem;
- (void)_setupStandardNavigationItem:(id)arg1;
- (_Bool)_canShowCommentsForCurrentAsset;
- (id)_standardLeftNavigationItemsForCurrentAsset;
- (id)_standardRightNavigationItemsForCurrentAsset;
- (id)_standardToolbarItemsForCurrentAsset;
- (_Bool)_canEditCurrentAsset;
- (id)_currentFavoriteItemIdentifier;
- (id)_currentMediaItemIdentifier;
- (long long)_editActionTypeForCurrentAsset;
- (_Bool)_currentAssetIsRemote;
- (_Bool)_currentAssetIsMedia;
- (id)_videoTrimSaveItem;
- (id)_navbarButtonForIdentifier:(id)arg1;
- (id)_toolbarButtonForIdentifier:(id)arg1;
- (_Bool)_isTrashBin;
- (void)_endEditingCurrentItem;
- (void)_beginEditingCurrentItem;
- (void)_enterReviewMode:(id)arg1;
- (void)_cancelTrimmedVideo:(id)arg1;
- (void)_saveTrimmedVideo:(id)arg1;
- (void)_showAllPhotos:(id)arg1;
- (void)_returnToCamera:(id)arg1;
- (void)_pauseCurrentMedia:(id)arg1;
- (void)_playCurrentMedia:(id)arg1;
- (void)_showAirplayPicker:(id)arg1;
- (void)_startSlideshow:(id)arg1;
- (void)_downloadCurrentItem:(id)arg1;
- (void)_removeCurrentItem:(id)arg1;
- (void)_deleteCurrentItem:(id)arg1;
- (_Bool)_dismissLegacyPopovers;
- (id)ppt_sharingViewController;
- (void)ppt_dismissShareSheetWithCompletion:(id)arg1;
- (void)ppt_presentShareSheetWithCompletion:(id)arg1;
- (void)_handleHideMenuItem:(id)arg1;
- (void)_toggleFavorite:(id)arg1;
- (void)_displayShareSheet:(id)arg1;
- (void)_displayShareSheet:(id)arg1 completion:(id)arg2;
- (void)_displayShareSheet:(id)arg1 completion:(id)arg2 isLockScreenCamera:(void)arg3;
- (id)_initialSlideshowSettings;
- (void)_finishSlideshowConfig:(id)arg1 withSettings:(id)arg2;
- (void)startSlideshowWithSettings:(id)arg1;
- (void)_deferSlideshowWithSettings:(id)arg1;
- (void)_startRemoteSlideshowWithSettings:(id)arg1;
- (void)_startLocalSlideshowWithSettings:(id)arg1;
- (void)_dismissViewControllerInNavigationController:(id)arg1;
- (void)_presentViewControllerInNavigationController:(id)arg1 fromBarButtonItem:(id)arg2;
- (void)_updateCurrentRoute:(id)arg1;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)editPluginSessionAvailabilityDidChange:(id)arg1;
- (void)editPluginSession:(id)arg1 revertToOriginalWithCompletionHandler:(id)arg2;
- (_Bool)editPluginSessionCanRevertToOriginal:(id)arg1;
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(id)arg3;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(id)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(_Bool)arg3 resultHandler:(id)arg4;
- (void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(id)arg2;
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(id)arg2;
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(id)arg2;
- (void)_createVideoEditPluginSessionIfNeeded;
@property(readonly, nonatomic) UIView *commentsView;
- (void)_updateBackgroundColor;
@property(readonly, nonatomic) UIColor *photoBackgroundColor;
@property(readonly, nonatomic) PHCachingImageManager *cachingImageManager;
- (void)didEndNavigationOperation:(long long)arg1 inNavigationController:(id)arg2;
- (void)willBeginNavigationOperation:(long long)arg1 inNavigationController:(id)arg2;
@property(readonly, nonatomic) UIImage *photoImageForZoomTransition;
@property(readonly, nonatomic) UIImage *photoImage;
@property(readonly, nonatomic) struct CGRect photoFrameForZoomTransition;
@property(readonly, nonatomic) struct CGRect photoFrame;
- (struct CGRect)_photoFrameForTileController:(id)arg1;
@property(nonatomic) _Bool deletesDuplicatesWhenNecessary;
@property(nonatomic) _Bool shouldPlayVideoWhenViewAppears;
@property(readonly, nonatomic) PHAssetCollection *currentAssetContainerForZoomTransition;
@property(readonly, nonatomic) PHAssetCollection *currentAssetContainer;
- (void)setAssetCollections:(id)arg1 datasource:(id)arg2 currentImageIndexPath:(id)arg3;
@property(readonly, nonatomic) PLPhotoTileViewController *currentTileForTransitions;
- (id)_currentTile;
@property(readonly, nonatomic) PHAsset *currentAssetForZoomTransition;
@property(readonly, nonatomic) PHAsset *currentAsset;
- (id)_legacyPhotoBrowserControllerForSubclassesOnly;
- (void)_handlePhotoPinchGestureRecognizer:(id)arg1;
- (void)playSlideshowFromAlbumUsingOrigami:(_Bool)arg1;
- (void)setDoneItem:(id)arg1;
- (void)_removeAdjacentCommentsTables;
- (void)_hideComments;
- (void)_revealComments;
- (void)ppt_setOverlaysVisible:(_Bool)arg1;
- (void)ppt_setIsScrubbing:(_Bool)arg1;
- (id)ppt_legacyPhotoBrowserIndexPath;
- (_Bool)ppt_scrubToAbsoluteIndex:(id)arg1 immediately:(_Bool)arg2;
- (_Bool)ppt_scrollToPhotoWithRelativeIndex:(long long)arg1 completion:(id)arg2;
- (id)contentScrollView;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (_Bool)_updateSpec;
- (void)loadView;
- (void)dealloc;
- (id)initWithSpec:(id)arg1 assetAtIndexPath:(id)arg2 assetCollections:(id)arg3 datasource:(id)arg4;

@end

