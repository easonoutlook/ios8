/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIViewController.h>

#import "UIGestureRecognizerDelegatePrivate-Protocol.h"
#import "UINavigationBarDelegate-Protocol.h"

@class NSArray, NSString, NSUUID, UIGestureRecognizer, UINavigationBar, UINavigationTransitionView, UIPanGestureRecognizer, UITapGestureRecognizer, UIToolbar, UIView, _UIAnimationCoordinator, _UIBarPanGestureRecognizer, _UIBarTapGestureRecognizer, _UINavigationControllerPalette, _UINavigationInteractiveTransition, _UINavigationParallaxTransition;

@interface UINavigationController : UIViewController <UIGestureRecognizerDelegatePrivate, UINavigationBarDelegate>
{
    UIView *_containerView;
    UINavigationBar *_navigationBar;
    Class _navigationBarClass;
    UIToolbar *_toolbar;
    UIView *_navigationTransitionView;
    double _bottomInsetDelta;
    double _statusBarHeightForHideShow;
    UIViewController *_disappearingViewController;
    id <UINavigationControllerDelegate> _delegate;
    long long _savedNavBarStyleBeforeSheet;
    long long _savedToolBarStyleBeforeSheet;
    UITapGestureRecognizer *_backGestureRecognizer;
    _UINavigationControllerPalette *_topPalette;
    _UINavigationControllerPalette *_freePalette;
    _UINavigationControllerPalette *_transitioningTopPalette;
    struct {
        unsigned int isAppearingAnimated:1;
        unsigned int isAlreadyPoppingNavigationItem:1;
        unsigned int isNavigationBarHidden:1;
        unsigned int isToolbarShown:1;
        unsigned int needsDeferredTransition:1;
        unsigned int isTransitioning:1;
        unsigned int paletteTransitionPending:1;
        unsigned int lastOperation:4;
        unsigned int lastOperationAnimated:1;
        unsigned int deferredTransition:8;
        unsigned int didPreloadKeyboardAnimation:1;
        unsigned int didHideBottomBar:1;
        unsigned int didExplicitlyHideTabBar:1;
        unsigned int isChangingOrientationForPop:1;
        unsigned int pretendNavBarHidden:1;
        unsigned int avoidMovingNavBarOffscreenBeforeUnhiding:1;
        unsigned int searchBarHidNavBar:1;
        unsigned int useSystemPopoverBarAppearance:1;
        unsigned int isCustomTransition:1;
        unsigned int isBuiltinTransition:1;
        unsigned int resetDidHideOnCancel:1;
        unsigned int delegateWillShowViewController:1;
        unsigned int delegateDidShowViewController:1;
        unsigned int delegateTransitionController:1;
        unsigned int delegateTransitionControllerEx:1;
        unsigned int delegateInteractionController:1;
        unsigned int delegateInteractionControllerEx:1;
        unsigned int delegateShouldCrossFadeNavigationBar:1;
        unsigned int delegateShouldCrossFadeBottomBars:1;
        unsigned int delegateShouldUseBuiltinInteractionController:1;
        unsigned int delegateSupportedInterfaceOrientations:1;
        unsigned int delegatePreferredInterfaceOrientationForPresentation:1;
        unsigned int delegateLayoutTransitioningClass:1;
        unsigned int navigationBarHidesCompletelyOffscreen:1;
        unsigned int clipUnderlapWhileTransitioning:1;
        unsigned int isCrossfadingOutTabBar:1;
        unsigned int isCrossfadingInTabBar:1;
        unsigned int skipContentInsetCalculation:1;
        unsigned int neverInWindow:1;
        unsigned int useCurrentStatusBarHeight:1;
        unsigned int allowUserInteractionDuringTransition:1;
        unsigned int enableBackButtonDuringTransition:1;
        unsigned int allowsGroupBlending:1;
        unsigned int allowNestedNavigationControllers:1;
        unsigned int nestedNavigationBarWasHidden:1;
        unsigned int nestedToolbarWasHidden:1;
        unsigned int isNested:1;
        unsigned int searchHidNavigationBar:1;
        unsigned int skipPresentationCheck:1;
    } _navigationControllerFlags;
    _Bool _interactiveTransition;
    _Bool _condensesBarsWhenKeyboardAppears;
    _Bool _condensesBarsOnSwipe;
    _Bool _hidesBarsWhenVerticallyCompact;
    _Bool _hidesBarsOnTap;
    _Bool __usingBuiltinAnimator;
    _Bool __barAnimationWasCancelled;
    Class _toolbarClass;
    double _customNavigationTransitionDuration;
    id <UIViewControllerAnimatedTransitioning> __transitionController;
    _UINavigationParallaxTransition *__cachedTransitionController;
    id <UIViewControllerInteractiveTransitioning> __interactionController;
    _UINavigationInteractiveTransition *__cachedInteractionController;
    NSUUID *__toolbarAnimationId;
    NSUUID *__navbarAnimationId;
    id __updateNavigationBarHandler;
    id __keyboardCondenseNotificationToken;
    _UIBarPanGestureRecognizer *__barCondenseGesture;
    _UIAnimationCoordinator *__barCondenseAnimationCoordinator;
    _UIBarTapGestureRecognizer *__barHideGesture;
    long long _builtinTransitionStyle;
    double _builtinTransitionGap;
    NSString *__backdropGroupName;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
+ (_Bool)_directlySetsContentOverlayInsetsForChildren;
+ (_Bool)doesOverrideSupportedInterfaceOrientations;
+ (_Bool)doesOverridePreferredInterfaceOrientationForPresentation;
@property(retain, nonatomic, getter=_backdropGroupName, setter=_setBackdropGroupName:) NSString *_backdropGroupName; // @synthesize _backdropGroupName=__backdropGroupName;
@property(nonatomic, getter=_builtinTransitionGap, setter=_setBuiltinTransitionGap:) double builtinTransitionGap; // @synthesize builtinTransitionGap=_builtinTransitionGap;
@property(nonatomic, getter=_builtinTransitionStyle, setter=_setBuiltinTransitionStyle:) long long builtinTransitionStyle; // @synthesize builtinTransitionStyle=_builtinTransitionStyle;
@property(retain, nonatomic, setter=_setBarHideGesture:) _UIBarTapGestureRecognizer *_barHideGesture; // @synthesize _barHideGesture=__barHideGesture;
@property(retain, nonatomic, setter=_setBarCondenseAnimationCoordinator:) _UIAnimationCoordinator *_barCondenseAnimationCoordinator; // @synthesize _barCondenseAnimationCoordinator=__barCondenseAnimationCoordinator;
@property(retain, nonatomic, setter=_setBarCondenseGesture:) _UIBarPanGestureRecognizer *_barCondenseGesture; // @synthesize _barCondenseGesture=__barCondenseGesture;
@property(retain, nonatomic, setter=_setKeyboardCondenseNotificationToken:) id _keyboardCondenseNotificationToken; // @synthesize _keyboardCondenseNotificationToken=__keyboardCondenseNotificationToken;
@property(copy, nonatomic, setter=_setUpdateNavigationBarHandler:) id _updateNavigationBarHandler; // @synthesize _updateNavigationBarHandler=__updateNavigationBarHandler;
@property(nonatomic, setter=_setBarAnimationWasCancelled:) _Bool _barAnimationWasCancelled; // @synthesize _barAnimationWasCancelled=__barAnimationWasCancelled;
@property(retain, nonatomic, setter=_setNavbarAnimationId:) NSUUID *_navbarAnimationId; // @synthesize _navbarAnimationId=__navbarAnimationId;
@property(retain, nonatomic, setter=_setToolbarAnimationId:) NSUUID *_toolbarAnimationId; // @synthesize _toolbarAnimationId=__toolbarAnimationId;
@property(nonatomic, getter=_isUsingBuiltinAnimator, setter=_setUsingBuiltinAnimator:) _Bool _usingBuiltinAnimator; // @synthesize _usingBuiltinAnimator=__usingBuiltinAnimator;
@property(retain, nonatomic, setter=_setCachedInteractionController:) _UINavigationInteractiveTransition *_cachedInteractionController; // @synthesize _cachedInteractionController=__cachedInteractionController;
@property(retain, nonatomic, setter=_setInteractionController:) id <UIViewControllerInteractiveTransitioning> _interactionController; // @synthesize _interactionController=__interactionController;
@property(retain, nonatomic, setter=_setCachedTransitionController:) _UINavigationParallaxTransition *_cachedTransitionController; // @synthesize _cachedTransitionController=__cachedTransitionController;
@property(retain, nonatomic, setter=_setTransitionController:) id <UIViewControllerAnimatedTransitioning> _transitionController; // @synthesize _transitionController=__transitionController;
@property(nonatomic) _Bool hidesBarsOnTap; // @synthesize hidesBarsOnTap=_hidesBarsOnTap;
@property(nonatomic) _Bool hidesBarsWhenVerticallyCompact; // @synthesize hidesBarsWhenVerticallyCompact=_hidesBarsWhenVerticallyCompact;
@property(nonatomic) _Bool condensesBarsOnSwipe; // @synthesize condensesBarsOnSwipe=_condensesBarsOnSwipe;
@property(nonatomic) _Bool condensesBarsWhenKeyboardAppears; // @synthesize condensesBarsWhenKeyboardAppears=_condensesBarsWhenKeyboardAppears;
@property(retain, nonatomic) UIViewController *disappearingViewController; // @synthesize disappearingViewController=_disappearingViewController;
@property(nonatomic, getter=isInteractiveTransition) _Bool interactiveTransition; // @synthesize interactiveTransition=_interactiveTransition;
@property(nonatomic) id <UINavigationControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) double customNavigationTransitionDuration; // @synthesize customNavigationTransitionDuration=_customNavigationTransitionDuration;
@property(nonatomic, setter=_setToolbarClass:) Class _toolbarClass; // @synthesize _toolbarClass;
- (id)moreListTableCell;
- (id)moreListSelectedImage;
- (id)moreListImage;
- (id)_moreListTitle;
- (void)_didResignContentViewControllerOfPopover:(id)arg1;
- (void)_didBecomeContentViewControllerOfPopover:(id)arg1;
- (void)_willBecomeContentViewControllerOfPopover:(id)arg1;
- (id)_viewForContentInPopover;
- (_Bool)isModalInPopover;
- (void)_prepareForPresentationInPopover:(id)arg1;
- (void)_prepareForDismissalInPopover:(id)arg1;
- (struct CGRect)_frameForContainerViewInSheetForBounds:(struct CGRect)arg1 displayingTopView:(_Bool)arg2 andBottomView:(_Bool)arg3;
- (struct CGSize)preferredContentSize;
- (struct CGSize)contentSizeForViewInPopover;
- (void)setPreferredContentSize:(struct CGSize)arg1;
- (void)setContentSizeForViewInPopover:(struct CGSize)arg1;
- (struct CGSize)_adjustedContentSizeForPopover:(struct CGSize)arg1;
- (void)_layoutTopViewControllerOutOfSheet;
- (void)_layoutTopViewControllerInSheetWithPopoverView:(id)arg1;
- (void)_layoutTopViewControllerInSheet;
- (void)updateTabBarItemForViewController:(id)arg1;
- (id)tabBarItem;
- (id)defaultPNGName;
@property(nonatomic, getter=isNavigationBarCondensed) _Bool navigationBarCondensed;
- (void)_setBarsCondensed:(_Bool)arg1;
- (void)_setBarsHidden:(_Bool)arg1;
- (void)_gestureRecognizedToggleVisibility:(id)arg1;
- (_Bool)_useCrossFadeForGestureHiding;
- (_Bool)_shouldHideBarsForTraits:(id)arg1;
- (void)_configureHideGesture;
- (id)_existingToolbarWithItems;
@property(readonly, nonatomic) UITapGestureRecognizer *barHideGestureRecognizer;
- (void)_makeBarHideGestureIfNecessary;
- (void)_gestureRecognizedCondense:(id)arg1;
- (void)_configureCondenseGesture;
@property(readonly, retain, nonatomic) UIPanGestureRecognizer *barCondenseGestureRecognizer;
- (void)_makeBarCondenseGestureIfNecessary;
- (void)_configureKeyboardCondense;
- (void)_configureBarsAutomaticActions;
- (void)navigationBarDidChangeOpacity:(id)arg1;
- (void)navigationBarDidResizeForPrompt:(id)arg1;
- (void)navigationBar:(id)arg1 buttonClicked:(int)arg2;
- (_Bool)navigationBar:(id)arg1 shouldPopItem:(id)arg2;
- (id)_findViewControllerToPopToForNavigationItem:(id)arg1;
- (long long)_positionForBar:(id)arg1;
- (void)updateTitleForViewController:(id)arg1;
- (id)rotatingSnapshotViewForWindow:(id)arg1;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)willAnimateSecondHalfOfRotationFromInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)didAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1;
- (void)willAnimateFirstHalfOfRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)_getRotationContentSettings:(CDStruct_010f855d *)arg1;
- (_Bool)_shouldUseOnePartRotation;
- (id)rotatingFooterView;
- (id)rotatingHeaderView;
- (_Bool)_isSupportedInterfaceOrientation:(long long)arg1;
- (_Bool)_shouldSynthesizeSupportedOrientations;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)_doesTopViewControllerSupportInterfaceOrientation:(long long)arg1;
- (_Bool)_allowsAutorotation;
- (void)_presentationTransitionUnwrapViewController:(id)arg1;
- (void)_presentationTransitionWrapViewController:(id)arg1 forTransitionContext:(id)arg2;
- (void)makeModalViewControllerTopViewController;
- (id)popToViewControllerWithSnapbackIdentifier:(id)arg1 animated:(_Bool)arg2;
- (id)popToViewController:(id)arg1 transition:(int)arg2;
- (id)popToViewController:(id)arg1 animated:(_Bool)arg2;
- (id)popToRootViewControllerWithTransition:(int)arg1;
- (id)popToRootViewControllerAnimated:(_Bool)arg1;
- (id)popViewControllerWithTransition:(int)arg1;
- (id)popViewControllerWithAnimationTransition:(long long)arg1 duration:(double)arg2 curve:(long long)arg3;
- (id)_popViewControllerWithTransition:(int)arg1 allowPoppingLast:(_Bool)arg2;
- (void)_popViewControllerAndUpdateInterfaceOrientationAnimated:(_Bool)arg1;
- (_Bool)isAlreadyPoppingNavItem;
- (double)_customNavigationTransitionDuration;
- (_Bool)_isInteractiveCustomNavigationTransition;
- (_Bool)_willPerformCustomNavigationTransitionForPush;
- (_Bool)_willPerformCustomNavigationTransitionForPop;
- (_Bool)_shouldPopFromLandscapeToPortraitOrientation;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_snapshotView;
- (void)_tabBarControllerDidFinishShowingTabBar:(id)arg1 isHidden:(_Bool)arg2;
- (void)_hideOrShowBottomBarIfNeededWithTransition:(int)arg1;
- (void)_updateBottomBarHiddenState;
- (void)_resetBottomBarHiddenState;
- (_Bool)_shouldBottomBarBeHidden;
- (id)popViewControllerAnimated:(_Bool)arg1;
- (id)_findViewControllerToPopTo;
- (id)_nthChildViewControllerFromTop:(unsigned long long)arg1;
- (void)pushViewController:(id)arg1 transition:(int)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2 forceImmediate:(_Bool)arg3;
- (void)pushViewController:(id)arg1 animated:(_Bool)arg2;
- (void)_prepareForNormalDisplayWithNavigationController:(id)arg1;
- (void)_prepareForNestedDisplayWithNavigationController:(id)arg1;
- (void)showViewController:(id)arg1 sender:(id)arg2;
- (id)separateSecondaryViewControllerForSplitViewController:(id)arg1;
- (void)collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2;
- (void)_executeNavigationHandler:(id)arg1 deferred:(void)arg2;
- (id)_customInteractionController:(id)arg1;
- (_Bool)_shouldUseBuiltinInteractionController;
- (void)__viewWillLayoutSubviews;
- (id)_customTransitionController:(_Bool)arg1;
- (_Bool)_isPerformingLayoutToLayoutTransition;
- (void)_propagateContentAdjustmentsForControllersWithSharedViews;
- (id)_builtinInteractionController;
- (id)_builtinTransitionController;
- (void)_clearLastOperation;
- (int)_deferredTransition;
- (void)_startDeferredTransitionIfNeeded;
- (void)_startDeferredTransitionIfNeeded:(id)arg1;
- (void)_startTransition:(int)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
- (void)_updateScrollViewFromViewController:(id)arg1 toViewController:(id)arg2;
- (long long)_navigationTransitionForUITransition:(int)arg1;
- (void)_layoutViewController:(id)arg1;
- (void)_didGainChildScrollView:(id)arg1;
- (void)_computeAndApplyScrollContentInsetDeltaForViewController:(id)arg1;
- (struct UIEdgeInsets)_expectedContentInsetDeltaForViewController:(id)arg1;
- (double)_scrollViewTopContentInsetForViewController:(id)arg1;
- (double)_topBarHeight;
- (double)_scrollViewBottomContentInsetForViewController:(id)arg1;
- (void)_layoutTopViewController;
- (struct CGRect)_frameForWrapperViewForViewController:(id)arg1;
- (struct CGRect)_frameForViewController:(id)arg1;
- (_Bool)_shouldStatusBarInsetViewController:(id)arg1;
- (_Bool)_shouldLayoutViewControllerForTransparentStatusBar:(id)arg1;
- (_Bool)_shouldChildViewControllerUseFullScreenLayout:(id)arg1;
- (void)_updatePaletteBackground;
- (_Bool)_shouldToolBar:(id)arg1 insetViewController:(id)arg2;
- (_Bool)_shouldToolBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(_Bool *)arg3;
- (_Bool)_shouldTabBar:(id)arg1 insetViewController:(id)arg2;
- (_Bool)_shouldTabBar:(id)arg1 insetViewController:(id)arg2 orOverlayContent:(_Bool *)arg3;
- (_Bool)_shouldNavigationBarInsetViewController:(id)arg1;
- (_Bool)_shouldNavigationBarInsetViewController:(id)arg1 orOverlayContent:(_Bool *)arg2;
- (_Bool)_isNavigationBarEffectivelyVisible;
- (_Bool)_shouldNavigationBarInsetViewControllerPreInnsbruck:(id)arg1;
- (_Bool)_isNavigationBarVisible;
- (_Bool)_hasTranslucentNavigationBarIncludingViewController:(id)arg1;
- (void)_updateLayoutForStatusBarAndInterfaceOrientation;
- (void)_updateBarsForCurrentInterfaceOrientation;
- (_Bool)wasLastOperationAnimated;
- (long long)lastOperation;
@property(nonatomic) _Bool needsDeferredTransition;
- (void)setNeedsDeferredTransition;
- (void)_setCustomTransition:(_Bool)arg1;
- (_Bool)isBuiltinTransition;
- (_Bool)isCustomTransition;
- (double)navigationTransitionView:(id)arg1 durationForTransition:(long long)arg2;
- (void)_navigationTransitionView:(id)arg1 didCancelTransition:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 wrapperView:(id)arg5;
- (void)navigationTransitionView:(id)arg1 didEndTransition:(long long)arg2 fromView:(id)arg3 toView:(id)arg4;
- (void)navigationTransitionView:(id)arg1 didStartTransition:(long long)arg2;
- (id)_transitionAnimationContext;
- (_Bool)_isTransitioning;
- (void)didShowViewController:(id)arg1 animated:(_Bool)arg2;
- (void)willShowViewController:(id)arg1 animated:(_Bool)arg2;
- (id)_deepestUnambiguousResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)_gestureRecognizerShouldBegin:(id)arg1;
- (id)_screenEdgePanGestureRecognizer;
- (void)_performBackGesture:(id)arg1;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (id)segueForUnwindingToViewController:(id)arg1 fromViewController:(id)arg2 identifier:(id)arg3;
- (id)viewControllerForUnwindSegueAction:(SEL)arg1 fromViewController:(id)arg2 withSender:(id)arg3;
- (void)_updateToolbarItemsFromViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)editing;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (void)viewDidUnload;
- (void)purgeMemoryForReason:(int)arg1;
- (_Bool)_viewControllerWasSelected;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)_viewControllerForDisappearCallback;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(_Bool)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)isShown;
@property(readonly, nonatomic) UIGestureRecognizer *interactivePopGestureRecognizer;
- (void)loadView;
- (void)_navigationBarDidChangeStyle:(id)arg1;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (long long)preferredStatusBarStyle;
- (void)_hideShowToolbarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_setToolbarHidden:(_Bool)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;
- (void)_positionToolbarHidden:(_Bool)arg1 edge:(unsigned long long)arg2;
- (void)_positionToolbarHidden:(_Bool)arg1 edge:(unsigned long long)arg2 crossFade:(_Bool)arg3;
- (void)_positionToolbarHidden:(_Bool)arg1;
- (void)setToolbarHidden:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isToolbarHidden) _Bool toolbarHidden;
@property(readonly, nonatomic) UIToolbar *toolbar;
- (void)setToolbar:(id)arg1;
- (void)_configureToolbar;
- (void)_setVisualAltitudeForBar:(id)arg1;
- (id)_existingToolbar;
- (id)_existingNavigationBar;
- (void)_sendNavigationBarToBack;
@property(nonatomic) _Bool avoidMovingNavBarOffscreenBeforeUnhiding;
- (void)setSearchBarHidNavBar:(_Bool)arg1;
- (_Bool)searchBarHidNavBar;
@property(nonatomic) _Bool pretendNavBarHidden;
- (void)_hideShowNavigationBarDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3;
- (void)_setNavigationBarHidden:(_Bool)arg1 edge:(unsigned long long)arg2 duration:(double)arg3;
- (void)_positionTopBar:(id)arg1 hidden:(_Bool)arg2 edge:(unsigned long long)arg3 center:(struct CGPoint)arg4 offset:(double)arg5;
- (_Bool)_searchHidNavigationBar;
- (void)_setSearchHidNavigationBar:(_Bool)arg1;
- (void)_setNavigationBarHidesCompletelyOffscreen:(_Bool)arg1;
- (struct CGPoint)_computeTopBarCenter:(id)arg1 hidden:(_Bool)arg2 edge:(unsigned long long)arg3 center:(struct CGPoint)arg4 offset:(double)arg5;
- (_Bool)_reallyWantsFullScreenLayout;
- (void)_positionNavigationBarHidden:(_Bool)arg1;
- (void)_setNavigationBarHidden:(_Bool)arg1 edgeIfNotNavigating:(unsigned long long)arg2 duration:(double)arg3;
- (void)_repositionPaletteWithNavigationBarHidden:(_Bool)arg1 duration:(double)arg2;
- (void)_positionPaletteHidden:(_Bool)arg1 edge:(unsigned long long)arg2;
- (void)_positionPaletteHidden:(_Bool)arg1 edge:(unsigned long long)arg2 initialOffset:(double)arg3;
- (void)_positionNavigationBarHidden:(_Bool)arg1 edge:(unsigned long long)arg2;
- (void)_positionNavigationBarHidden:(_Bool)arg1 edge:(unsigned long long)arg2 initialOffset:(double)arg3;
- (void)setNavigationBarHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)_animationParametersForHidingNavigationBar:(_Bool)arg1 lastOperation:(long long)arg2 edge:(unsigned long long *)arg3 duration:(double *)arg4;
- (_Bool)_clipUnderlapWhileTransitioning;
- (void)_setClipUnderlapWhileTransitioning:(_Bool)arg1;
@property(nonatomic, getter=isNavigationBarHidden) _Bool navigationBarHidden;
- (void)setNavigationBar:(id)arg1;
- (id)_backdropBarGroupName;
- (id)_navigationBarHiddenByDefault:(_Bool)arg1;
@property(readonly, nonatomic) UINavigationBar *navigationBar;
- (id)_viewsWithDisabledInteractionGivenTransitionContext:(id)arg1;
- (void)setNavigationBarClass:(Class)arg1;
- (Class)navigationBarClass;
- (void)_startCustomTransition:(id)arg1;
- (id)_keyboardAnimationStyle;
- (int)_keyboardDirectionForTransition:(long long)arg1;
- (void)_startToolbarTransitionIfNecessary:(id)arg1 animated:(_Bool)arg2;
- (id)_transitionCoordinator;
- (_Bool)_shouldCrossFadeBottomBars;
- (_Bool)_shouldCrossFadeNavigationBar;
- (double)durationForTransition:(int)arg1;
- (void)_cancelInteractiveTransition:(double)arg1 transitionContext:(id)arg2;
- (void)_finishInteractiveTransition:(double)arg1 transitionContext:(id)arg2;
- (void)_updateInteractiveTransition:(double)arg1;
- (void)_updateInteractiveBarTransition:(id)arg1 withUUID:(id)arg2 percent:(double)arg3 isFinished:(_Bool)arg4 didComplete:(_Bool)arg5 completionSpeed:(double)arg6 completionCurve:(long long)arg7;
- (void)_startInteractiveNavbarTransition;
- (void)_startInteractiveToolbarTransition;
- (id)_startInteractiveBarTransition:(id)arg1;
- (_Bool)_navbarIsAppearingInteractively;
- (_Bool)_toolbarIsAnimatingInteractively;
- (void)_setContentInset:(struct UIEdgeInsets)arg1;
- (void)_setClipsToBounds:(_Bool)arg1;
@property(readonly, nonatomic) UINavigationTransitionView *navigationTransitionView;
- (void)_setViewControllers_7_0:(id)arg1 transition:(int)arg2 animated:(_Bool)arg3;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2;
- (void)_setViewControllers:(id)arg1 transition:(int)arg2 animated:(_Bool)arg3;
- (id)_navigationBarForNestedNavigationController;
- (id)_outermostNavigationController;
- (void)_updateInteractivePopGestureEnabledState;
- (id)_lastNavigationItems;
- (id)_navigationItems;
- (id)navigationItem;
@property(nonatomic, getter=_isNestedNavigationController, setter=_setIsNestedNavigationController:) _Bool isNestedNavigationController;
@property(nonatomic, getter=_allowNestedNavigationControllers, setter=_setAllowNestedNavigationControllers:) _Bool allowNestedNavigationControllers;
- (void)setViewControllers:(id)arg1 animated:(_Bool)arg2;
- (int)_transitionForOldViewControllers:(id)arg1 newViewControllers:(id)arg2;
@property(copy, nonatomic) NSArray *viewControllers;
- (_Bool)_isPresentationContextByDefault;
@property(readonly, nonatomic) UIViewController *previousViewController;
@property(readonly, retain, nonatomic) UIViewController *visibleViewController;
- (long long)modalTransitionStyle;
@property(readonly, nonatomic) UIViewController *bottomViewController;
@property(readonly, retain, nonatomic) UIViewController *topViewController;
- (_Bool)_usesTransitionController;
- (void)setEnableBackButtonDuringTransition:(_Bool)arg1;
- (_Bool)enableBackButtonDuringTransition;
- (void)setAllowUserInteractionDuringTransition:(_Bool)arg1;
- (_Bool)allowUserInteractionDuringTransition;
- (_Bool)_useCurrentStatusBarHeight;
- (void)_setUseCurrentStatusBarHeight:(_Bool)arg1;
@property(nonatomic, getter=_didExplicitlyHideTabBar, setter=_setDidExplicitlyHideTabBar:) _Bool didHideTabBar;
@property(nonatomic, getter=_isCrossfadingInTabBar, setter=_setCrossfadingInTabBar:) _Bool crossfadingInTabBar;
@property(nonatomic, getter=_isCrossfadingOutTabBar, setter=_setCrossfadingOutTabBar:) _Bool crossfadingOutTabBar;
- (void)dealloc;
- (void)_releaseContainerViews;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)_shouldPersistViewWhenCoding;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_confirmBarAccessMethods;
- (id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2;
- (id)initWithRootViewController:(id)arg1;
- (void)decodeRestorableStateWithCoder:(id)arg1;
- (void)encodeRestorableStateWithCoder:(id)arg1;
@property _Bool isExpanded;
@property(retain) UIViewController *detailViewController;
- (void)_startPaletteTransitionIfNecessary:(id)arg1 animated:(_Bool)arg2;
- (void)detachPalette:(id)arg1;
- (void)detachPalette:(id)arg1 isInPaletteTransition:(_Bool)arg2;
- (id)existingPaletteForEdge:(unsigned long long)arg1;
- (void)_detachPalette:(id)arg1;
- (void)attachPalette:(id)arg1 isPinned:(_Bool)arg2;
- (id)paletteForEdge:(unsigned long long)arg1 size:(struct CGSize)arg2;
- (id)_pinningBarForPalette:(id)arg1;
- (struct CGRect)_boundsForPalette:(id)arg1 size:(struct CGSize)arg2;
- (struct CGRect)_frameForPalette:(id)arg1;
- (id)_topPalette;
- (void)_prepareCollectionViewControllers:(id)arg1 forSharingInRange:(id)arg2;
- (void)_prepareCollectionViewControllerForSharing:(id)arg1;
- (void)_prepareCollectionViewController:(id)arg1 forSharingWithCollectionViewController:(id)arg2;
- (id)_additionalViewControllersToCheckForUserActivity;

@end

