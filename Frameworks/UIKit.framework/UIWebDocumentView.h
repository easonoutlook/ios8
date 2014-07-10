/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIWebTiledView.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAutoscrollContainer-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIKeyInput-Protocol.h"
#import "UIKeyboardInput-Protocol.h"
#import "UIModalViewDelegate-Protocol.h"
#import "UITextAutoscrolling-Protocol.h"
#import "UITextInputPrivate-Protocol.h"
#import "UITextInputTokenizer-Protocol.h"
#import "UIWebFileUploadPanelDelegate-Protocol.h"
#import "_UIRotatingActionSheetDelegate-Protocol.h"
#import "_UIWebDoubleTapDelegate-Protocol.h"

@class CALayer, DOMHTMLElement, DOMNode, DOMRange, NSArray, NSDictionary, NSString, NSTimer, UIAutoscroll, UIColor, UIImage, UILongPressGestureRecognizer, UIPanGestureRecognizer, UITapGestureRecognizer, UITextChecker, UITextInputTraits, UITextInteractionAssistant, UITextPosition, UITextRange, UIView, UIWebFileUploadPanel, UIWebPlaybackTargetPicker, UIWebRotatingSheet, UIWebSelectionAssistant, WebHistoryItem, WebThreadSafeUndoManager, WebView, _UITextServiceSession, _UIWebHighlightLongPressGestureRecognizer, _UIWebViewportHandler;

@interface UIWebDocumentView : UIWebTiledView <UIActionSheetDelegate, _UIRotatingActionSheetDelegate, UITextAutoscrolling, UIAutoscrollContainer, UIGestureRecognizerDelegate, UIKeyboardInput, UITextInputPrivate, UIKeyInput, UIModalViewDelegate, UITextInputTokenizer, _UIWebDoubleTapDelegate, UIWebFileUploadPanelDelegate>
{
    WebView *_webView;
    id m_parentTextView;
    id _delegate;
    id _textSuggestionDelegate;
    struct CGRect _doubleTapRect;
    struct CGRect _mainDocumentDoubleTapRect;
    struct CGPoint _scrollPoint;
    struct CGPoint _doubleTapStartPosition;
    double _doubleTapStartTime;
    struct CGSize _pendingSize;
    long long _orientation;
    DOMHTMLElement *_standaloneEditingElement;
    struct CGPoint _mouseDownPoint;
    double _mouseDownTime;
    UIAutoscroll *_autoscroll;
    struct __CFDictionary *_plugInViews;
    long long m_selectionGranularity;
    CALayer *_contentLayersHostingLayer;
    CALayer *_flattenedRotatingContentLayer;
    NSArray *_additionalSubviews;
    UITextInputTraits *_traits;
    id <UITextInputDelegate> _inputDelegate;
    UITapGestureRecognizer *_singleTapGestureRecognizer;
    UITapGestureRecognizer *_doubleTapGestureRecognizer;
    UITapGestureRecognizer *_twoFingerDoubleTapGestureRecognizer;
    _UIWebHighlightLongPressGestureRecognizer *_highlightLongPressGestureRecognizer;
    UILongPressGestureRecognizer *_longPressGestureRecognizer;
    UIPanGestureRecognizer *_twoFingerPanGestureRecognizer;
    struct {
        NSTimer *timer;
        struct CGPoint location;
        _Bool isBlocked;
        _Bool isCancelled;
        _Bool isOnWebThread;
        _Bool isDisplayingHighlight;
        _Bool attemptedClick;
        struct CGPoint lastPanTranslation;
        DOMNode *element;
        id delegate;
        UIWebRotatingSheet *interactionSheet;
        NSArray *elementActions;
        _Bool allowsImageSheet;
        _Bool allowsDataDetectorsSheet;
        _Bool allowsLinkSheet;
        _Bool acceptsFirstResponder;
        double documentScale;
    } _interaction;
    _UIWebViewportHandler *_viewportHandler;
    int _documentType;
    float _documentScale;
    float _previousDocumentScale;
    struct CGSize _fixedLayoutOriginRoundingDelta;
    struct CGSize _fixedLayoutSizeRoundingDelta;
    unsigned int _mouseDownCount;
    unsigned long long _dataDetectorTypes;
    unsigned int _webCoreNeedsSetNeedsDisplay:1;
    unsigned int _webCoreNeedsDraw:1;
    unsigned int _ignoresFocusingMouse:1;
    unsigned int _ignoresKeyEvents:1;
    unsigned int _autoresizes:1;
    unsigned int _ignoresViewportOverflowWhenAutoresizing:1;
    unsigned int _shouldIgnoreCustomViewport:1;
    unsigned int _updatingSize:1;
    unsigned int _scalesToFit:1;
    unsigned int _updatesScrollView:1;
    unsigned int _hasCustomScale:1;
    unsigned int _shouldRestoreScrollPosition:1;
    unsigned int _pageNeedsReset:1;
    unsigned int _hasScrollPoint:1;
    unsigned int _gesturesDisabled:1;
    unsigned int _doubleTapRectIsReplaced:1;
    unsigned int _standaloneEditableView:1;
    unsigned int _widgetEditingView:1;
    unsigned int _mouseDragged:1;
    unsigned int _mouseReentrancyGuard:1;
    unsigned int _isShowingFullScreenPlugIn:1;
    unsigned int _isSettingRedrawFrame:1;
    unsigned int _needsScrollNotifications:1;
    unsigned int _loadsSynchronously:1;
    unsigned int _mouseDown:1;
    unsigned int _usePreTimberlineTransparencyBehavior:1;
    unsigned int _geolocationDialogAllowed:1;
    unsigned int _usingMinimalTilesDuringLoading:1;
    unsigned int _sheetsCount:2;
    unsigned int _didFirstVisuallyNonEmptyLayout:1;
    unsigned int _loadInProgress:1;
    unsigned int _uiwdvIsResigningFirstResponder:1;
    unsigned int _sizeUpdatesSuspended:1;
    unsigned int _sizeUpdateOccurredWhileSuspended:1;
    unsigned int _shouldOnlyRecognizeGesturesOnActiveElements:1;
    unsigned int _ignoresFocusEventFromFirstResponderChange:1;
    unsigned int _shouldCloseWebViewAtDealloc:1;
    unsigned int _shouldRemoveUserStyleSheet:1;
    unsigned int _hasDrawnTiles:1;
    unsigned int _showingTextStyleOptions:1;
    unsigned int _subviewCachesNeedUpdate:1;
    unsigned int _avoidFixedPositionUpdateViaDidScroll:1;
    unsigned int _inspectorSearchingForNode:1;
    unsigned int _previousScrollWasScrollToTop:1;
    unsigned int _pageIsLoadedFromPageCache:1;
    unsigned int _shouldSendWillShowInteractionHighlight:1;
    WebThreadSafeUndoManager *_undoManager;
    UIWebSelectionAssistant *_webSelectionAssistant;
    UITextInteractionAssistant *_textSelectionAssistant;
    UITextChecker *_textChecker;
    struct UIEdgeInsets _caretInsets;
    UIWebFileUploadPanel *_fileUploadPanel;
    int _selectionAffinity;
    UIWebPlaybackTargetPicker *_playbackTargetPicker;
    struct _UIWebViewportConfiguration _defaultViewportConfigurations[5];
    _UITextServiceSession *_definitionSession;
    _UITextServiceSession *_learnSession;
    WebHistoryItem *_latestCommittedPageLoadHistoryItem;
    _Bool _suppressesIncrementalRendering;
    _Bool _wantsMinimalUI;
    DOMRange *_rangeToRestoreAfterDictation;
    unsigned long long _renderTreeSize;
    unsigned long long _renderTreeSizeThresholdForReset;
    struct CGRect _exposedScrollViewRect;
}

+ (id)standardTextViewPreferences;
+ (_Bool)hasLandscapeOrientation;
+ (void)initialize;
+ (double)getTimestamp;
+ (Class)layerClass;
+ (id)_sharedHighlightView;
+ (id)_createDefaultHighlightView;
@property(nonatomic) unsigned long long renderTreeSizeThresholdForReset; // @synthesize renderTreeSizeThresholdForReset=_renderTreeSizeThresholdForReset;
@property(readonly, nonatomic) unsigned long long renderTreeSize; // @synthesize renderTreeSize=_renderTreeSize;
@property(readonly, nonatomic) _Bool wantsMinimalUI; // @synthesize wantsMinimalUI=_wantsMinimalUI;
@property(nonatomic) struct CGRect exposedScrollViewRect; // @synthesize exposedScrollViewRect=_exposedScrollViewRect;
@property(nonatomic) _Bool suppressesIncrementalRendering; // @synthesize suppressesIncrementalRendering=_suppressesIncrementalRendering;
@property(retain, nonatomic) DOMRange *rangeToRestoreAfterDictation; // @synthesize rangeToRestoreAfterDictation=_rangeToRestoreAfterDictation;
- (void)willZoomToLocation:(struct CGPoint)arg1 atScale:(double)arg2 forDuration:(double)arg3;
- (_Bool)shouldSelectionAssistantReceiveDoubleTapAtPoint:(struct CGPoint)arg1 forScale:(double)arg2;
- (void)willZoomToMinimumScale;
- (_Bool)considerHeightForDoubleTap;
- (CDStruct_39925896)doubleTapScalesForSize:(struct CGSize)arg1;
- (struct CGRect)rectOfInterestForPoint:(struct CGPoint)arg1;
- (double)minimumScaleForSize:(struct CGSize)arg1;
- (struct CGRect)visibleContentRect;
- (double)currentDocumentScale;
- (double)zoomedDocumentScale;
- (id)contentView;
- (id)enclosingScrollView;
- (_Bool)_isInspectorSearchingForNode;
- (_Bool)_shouldResetForNewPage;
- (int)documentType;
- (id)_documentUrl;
- (id)selectionRectsForRange:(id)arg1;
@property(nonatomic) long long selectionGranularity;
@property(nonatomic) long long selectionAffinity;
- (void)setBaseWritingDirection:(long long)arg1 forRange:(id)arg2;
- (long long)baseWritingDirectionForPosition:(id)arg1 inDirection:(long long)arg2;
- (id)characterRangeByExtendingPosition:(id)arg1 inDirection:(long long)arg2;
- (id)positionWithinRange:(id)arg1 farthestInDirection:(long long)arg2;
- (id)characterRangeAtPoint:(struct CGPoint)arg1;
- (id)closestPositionToPoint:(struct CGPoint)arg1 withinRange:(id)arg2;
- (id)closestPositionToPoint:(struct CGPoint)arg1;
@property(copy, nonatomic) NSDictionary *markedTextStyle;
- (struct CGRect)caretRectForPosition:(id)arg1;
@property(nonatomic) id <UITextInputDelegate> inputDelegate;
@property(readonly, nonatomic) id <UITextInputTokenizer> tokenizer;
- (struct CGRect)_lastRectForRange:(id)arg1;
- (struct CGRect)firstRectForRange:(id)arg1;
- (id)rangeEnclosingPosition:(id)arg1 withGranularity:(long long)arg2 inDirection:(long long)arg3;
- (void)_scrollRectToVisible:(struct CGRect)arg1 animated:(_Bool)arg2;
- (_Bool)isPosition:(id)arg1 withinTextUnit:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 toBoundary:(long long)arg2 inDirection:(long long)arg3;
- (_Bool)isPosition:(id)arg1 atBoundary:(long long)arg2 inDirection:(long long)arg3;
- (id)positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3;
- (id)_positionFromPosition:(id)arg1 inDirection:(long long)arg2 offset:(long long)arg3 withAffinityDownstream:(_Bool)arg4;
- (id)positionFromPosition:(id)arg1 offset:(long long)arg2;
- (long long)offsetFromPosition:(id)arg1 toPosition:(id)arg2;
- (long long)comparePosition:(id)arg1 toPosition:(id)arg2;
- (void)replaceRange:(id)arg1 withText:(id)arg2;
- (id)rangeOfEnclosingWord:(id)arg1;
- (id)textRangeFromPosition:(id)arg1 toPosition:(id)arg2;
- (id)textInRange:(id)arg1;
@property(readonly, nonatomic) UITextPosition *endOfDocument;
@property(readonly, nonatomic) UITextPosition *beginningOfDocument;
- (void)unmarkText;
@property(readonly, nonatomic) UITextRange *markedTextRange;
- (void)setSelectedTextRange:(id)arg1 withAffinityDownstream:(_Bool)arg2;
@property(copy) UITextRange *selectedTextRange;
- (_Bool)hasText;
- (id)_textSelectingContainer;
- (_Bool)hasSimpleTextOnlyStructure;
- (_Bool)containsOnlySelectableElements;
- (void)setTileUpdatesDisabled:(_Bool)arg1;
- (void)_restoreFlattenedContentLayers;
- (void)_flattenAndSwapContentLayersInRect:(struct CGRect)arg1;
- (void *)_createIOSurfaceFromRect:(struct CGRect)arg1;
- (_Bool)_shouldFlattenContentLayersForRect:(struct CGRect)arg1;
- (unsigned int)_contentSizeInExposedRect:(struct CGRect)arg1 topLayer:(id)arg2 visibleLayerCount:(int *)arg3;
- (double)maximumDoubleTapScale;
- (void)didEndZoom;
- (void)didZoom;
- (void)willStartZoom;
- (void)scrollViewWasRemoved;
- (void)didEndScroll;
- (void)_updateFixedPositioningObjectsLayoutAfterVisibleGeometryChange;
- (void)_updateFixedPositioningObjectsLayoutAfterScroll;
- (void)_updateFixedPositioningObjectsLayoutDuringScroll;
- (void)willStartScrollToTop;
- (void)willStartScroll;
- (void)useSelectionAssistantWithMode:(int)arg1;
- (void)setBecomesEditableWithGestures:(_Bool)arg1;
- (_Bool)becomesEditableWithGestures;
- (_Bool)playsNicelyWithGestures;
- (struct CGRect)autoscrollContentFrame;
- (struct CGRect)autoscrollDragFrame;
- (struct CGRect)visibleContentFrame;
- (struct CGRect)visibleFrame;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)inPopover;
- (_Bool)isCaretInEmptyParagraph;
- (id)webSelectionAssistant;
- (void)makeTextWritingDirectionLeftToRight:(id)arg1;
- (void)makeTextWritingDirectionRightToLeft:(id)arg1;
- (void)_promptForReplace:(id)arg1;
- (void)replace:(id)arg1;
- (void)decreaseSize:(id)arg1;
- (void)increaseSize:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)paste:(id)arg1;
- (_Bool)_isDisplayingShortcutViewController;
- (void)_addShortcut:(id)arg1;
- (void)_insertAttributedTextWithoutClosingTyping:(id)arg1;
- (_Bool)_isDisplayingReferenceLibraryViewController;
- (void)_define:(id)arg1;
- (struct CGRect)_shortcutPresentationRect;
- (void)_showTextStyleOptions:(id)arg1;
- (void)toggleUnderline:(id)arg1;
- (void)toggleItalics:(id)arg1;
- (void)toggleBoldface:(id)arg1;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (struct CGRect)_selectionClipRect;
- (void)updateSelection;
- (void)endSelectionChange;
- (void)beginSelectionChange;
- (_Bool)isEditing;
- (_Bool)isEditable;
@property(readonly, nonatomic) UITextInteractionAssistant *interactionAssistant;
- (id)selectionView;
- (void)takeTraitsFrom:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)textInputTraits;
- (void)webView:(id)arg1 willAddPlugInView:(id)arg2;
- (_Bool)hasPlugInSubviews;
- (_Bool)isShowingFullScreenPlugInUI;
- (void)didRemovePlugInView:(id)arg1;
- (void)webView:(id)arg1 didHideFullScreenForPlugInView:(id)arg2;
- (void)webView:(id)arg1 willShowFullScreenForPlugInView:(id)arg2;
- (id)webView:(id)arg1 plugInViewWithArguments:(id)arg2 fromPlugInPackage:(id)arg3;
- (void)setPaused:(_Bool)arg1 withEvents:(_Bool)arg2;
- (void)setPaused:(_Bool)arg1;
- (void)handleKeyWebEvent:(id)arg1;
- (_Bool)requiresKeyEvents;
- (void)setBottomBufferHeight:(double)arg1;
- (id)automaticallySelectedOverlay;
- (void)keyboardInputChangedSelection:(id)arg1;
- (_Bool)keyboardInputChanged:(id)arg1;
- (_Bool)keyboardInputShouldDelete:(id)arg1;
- (_Bool)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(_Bool)arg3;
- (_Bool)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)implementationWebView;
- (struct CGRect)convertCaretRect:(struct CGRect)arg1;
- (void)setCaretChangeListener:(id)arg1;
- (_Bool)hasContent;
- (id)text;
- (void)setText:(id)arg1;
- (void)selectAll;
- (_Bool)selectionAtWordStart;
- (_Bool)selectionAtDocumentStart;
- (_Bool)hasSelection;
- (void)extendCurrentSelection:(int)arg1;
- (id)rangeByExtendingCurrentSelection:(int)arg1;
- (id)rangeByMovingCurrentSelection:(int)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinityDownstream:(_Bool)arg2;
- (id)selectedDOMRange;
- (struct _NSRange)selectionRange;
- (void)replaceSelectionWithWebArchive:(id)arg1 selectReplacement:(_Bool)arg2 smartReplace:(_Bool)arg3;
- (int)wordOffsetInRange:(id)arg1;
- (id)nextUnperturbedDictationResultBoundaryFromPosition:(id)arg1;
- (id)rectsForNSRange:(struct _NSRange)arg1;
- (id)textColorForCaretSelection;
- (id)fontForCaretSelection;
- (unsigned short)characterAfterCaretSelection;
- (unsigned short)characterInRelationToCaretSelection:(int)arg1;
- (void)confirmMarkedText:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)replaceCurrentWordWithText:(id)arg1;
- (void)replaceRangeWithTextWithoutClosingTyping:(id)arg1 replacementText:(id)arg2;
- (void)clearMarkedText;
- (id)dictationInterpretations;
- (void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(_Bool)arg2;
- (struct CGRect)frameForDictationResultPlaceholder:(id)arg1;
- (id)insertDictationResultPlaceholder;
- (_Bool)hasRangedSelection;
- (id)dictationResultMetadataForRange:(id)arg1;
- (id)metadataDictionariesForDictationResults;
- (void)insertDictationResult:(id)arg1 withCorrectionIdentifier:(id)arg2;
- (_Bool)isEditingSingleLineElement;
- (void)insertText:(id)arg1;
- (void)deleteBackward;
- (void)disableClearsOnInsertion;
- (void)deleteFromInput;
- (void)addInputString:(id)arg1;
- (void)addInputString:(id)arg1 withFlags:(unsigned long long)arg2;
- (id)delegate;
- (void)setContinuousSpellCheckingEnabled:(_Bool)arg1;
- (void)_setParentTextView:(id)arg1;
- (id)_parentTextView;
- (id)undoManager;
- (id)undoManagerForWebView:(id)arg1;
- (void)_undoManagerDidRedo:(id)arg1;
- (void)_undoManagerDidUndo:(id)arg1;
- (void)setInteractionAssistantGestureRecognizers;
- (void)ensureSelection;
- (_Bool)clearWKFirstResponder;
- (_Bool)makeWKFirstResponder;
- (id)_responderForBecomeFirstResponder;
- (_Bool)resignFirstResponder;
- (void)deferredBecomeFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canResignFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)updateKeyboardStateOnResponderChanges;
- (_Bool)isWidgetEditingView;
- (void)setIsWidgetEditingView:(_Bool)arg1;
- (id)standaloneEditingElement;
- (void)setStandaloneEditingElement:(id)arg1;
- (_Bool)isStandaloneEditableView;
- (void)setIsStandaloneEditableView:(_Bool)arg1;
- (id)textFormElement;
- (id)formElement;
- (void)_clearAllConsoleMessages;
- (void)_resetFormDataForFrame:(id)arg1;
- (void)assistFormNode:(id)arg1;
- (_Bool)doubleTapRectIsReplaced;
- (struct CGRect)doubleTapRect;
- (void)_handleTwoFingerDoubleTapAtLocation:(struct CGPoint)arg1;
- (void)_handleDoubleTapAtLocation:(struct CGPoint)arg1;
- (void)_handleSingleTapZoomPostClickAtLocation:(struct CGPoint)arg1;
- (_Bool)_handleSingleTapZoomPreClickAtLocation:(struct CGPoint)arg1;
@property(nonatomic, getter=isDoubleTapEnabled) _Bool doubleTapEnabled;
@property(nonatomic) _Bool mediaPlaybackAllowsAirPlay;
@property(nonatomic) _Bool shouldOnlyRecognizeGesturesOnActiveElements;
- (void)sendOrientationEventForOrientation:(long long)arg1;
- (void)didRotateInteractionSheet;
- (void)willRotateInteractionSheet;
- (void)updateInteractionElements;
- (void)redrawScaledDocument;
- (void)_reshapePlugInViews;
- (id)checkSpellingOfString:(id)arg1;
- (void)_renderUnbufferedInContext:(struct CGContext *)arg1;
- (void)webViewDidDrawTiles:(id)arg1;
- (id)subviews;
- (_Bool)_shouldUpdateSubviewCachesForPlugins;
- (void)_updateSubviewCaches;
- (id)_collectAdditionalSubviews;
- (void)_setSubviewCachesNeedUpdate:(_Bool)arg1;
- (void)webViewDidCommitCompositingLayerChanges:(id)arg1;
- (void)_webthread_webView:(id)arg1 attachRootLayer:(id)arg2;
- (void)revealedSelectionByScrollingWebFrame:(id)arg1;
- (_Bool)isUnperturbedDictationResultMarker:(id)arg1;
- (void)showPlaybackTargetPicker:(_Bool)arg1 fromRect:(struct CGRect)arg2;
- (long long)getPasteboardChangeCount;
- (id)readDataFromPasteboard:(id)arg1 withIndex:(long long)arg2;
- (id)supportedPasteboardTypesForCurrentSelection;
- (id)_supportedPasteboardTypesForCurrentSelection;
- (_Bool)performsTwoStepPaste:(id)arg1;
- (_Bool)fragmentContainsRichContent:(id)arg1;
- (_Bool)hasRichlyEditableSelection;
- (_Bool)isInsideRichlyEditableTextWidget;
- (long long)getPasteboardItemsCount;
- (void)writeDataToPasteboard:(id)arg1;
- (void)_updateFixedPositionContent;
- (struct CGRect)_adjustedLayoutRectForFixedPositionObjects;
- (void)_updateFixedPositionedObjectsLayoutRectUsingWebThread:(_Bool)arg1 synchronize:(_Bool)arg2;
- (struct CGRect)_layoutRectForFixedPositionObjects;
- (struct CGRect)_documentViewVisibleRect;
- (void)_updateWebKitExposedScrollViewRect;
- (void)_notifyContentHostingLayersOfScaleChange;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_notifyPlugInViewsOfScaleChange;
- (void)_notifyPlugInViewsOfDidZoom;
- (void)_notifyPlugInViewsOfDidEndZooming;
- (void)_notifyPlugInViewsOfWillBeginZooming;
- (_Bool)_isSubviewOfPlugInView:(id)arg1;
- (void)_didScroll;
- (void)_cancelLongPressGestureRecognizer;
- (void)setTilingArea:(int)arg1;
- (void)setIgnoresKeyEvents:(_Bool)arg1;
- (void)setIgnoresFocusingMouse:(_Bool)arg1;
- (_Bool)cancelTouchTracking;
- (_Bool)cancelMouseTracking;
- (struct CGImage *)newSnapshotWithRect:(struct CGRect)arg1;
- (struct CGImage *)createSnapshotWithRect:(struct CGRect)arg1;
- (void)setOpaque:(_Bool)arg1;
- (void)setDrawsBackground:(_Bool)arg1;
- (void)setSmoothsFonts:(_Bool)arg1;
- (void)layoutSubviews;
- (void)forceLayout;
- (void)_showPendingContentLayers;
- (_Bool)webView:(id)arg1 shouldScrollToPoint:(struct CGPoint)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 restoreStateFromHistoryItem:(id)arg2 forFrame:(id)arg3 force:(_Bool)arg4;
- (void)webView:(id)arg1 saveStateToHistoryItem:(id)arg2 forFrame:(id)arg3;
- (void)saveStateToCurrentHistoryItem;
- (void)_saveStateToHistoryItem:(id)arg1;
- (void)_resetForNewPage;
- (void)_restoreScrollPointForce:(_Bool)arg1;
- (_Bool)updatesScrollView;
- (void)setUpdatesScrollView:(_Bool)arg1;
- (void)fileUploadPanelDidDismiss:(id)arg1;
- (void)setAllowsUserScaling:(_Bool)arg1 forDocumentTypes:(int)arg2;
- (void)setMaximumScale:(float)arg1 forDocumentTypes:(int)arg2;
- (void)setMinimumScale:(float)arg1 forDocumentTypes:(int)arg2;
- (void)setInitialScale:(float)arg1 forDocumentTypes:(int)arg2;
- (void)setViewportSize:(struct CGSize)arg1 forDocumentTypes:(int)arg2;
- (void)setMinimumSize:(struct CGSize)arg1 updateCurrentViewportConfigurationSize:(_Bool)arg2;
- (void)setMinimumSize:(struct CGSize)arg1;
- (void)setIgnoresViewportOverflowWhenAutoresizing:(_Bool)arg1;
- (void)setAutoresizes:(_Bool)arg1;
- (struct CGRect)documentBounds;
- (void)_WAKViewSizeDidChange:(id)arg1;
- (void)webViewDidReceiveMobileDocType:(id)arg1;
- (void)webView:(id)arg1 didCommitLoadForFrame:(id)arg2;
- (void)webView:(id)arg1 didChangeLocationWithinPageForFrame:(id)arg2;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2 forFrame:(id)arg3;
- (void)webView:(id)arg1 didFirstVisuallyNonEmptyLayoutInFrame:(id)arg2;
- (void)webViewDidRestoreFromPageCache:(id)arg1;
- (void)webView:(id)arg1 runOpenPanelForFileButtonWithResultListener:(id)arg2 allowMultipleFiles:(_Bool)arg3 acceptMIMETypes:(id)arg4;
- (void)webViewDidEndOverflowScroll:(id)arg1;
- (void)webViewDidStartOverflowScroll:(id)arg1;
- (void)_editableSelectionLayoutChangedByScrolling:(_Bool)arg1;
- (void)_selectionLayoutChangedByScrolling:(_Bool)arg1;
- (void)webThreadWebViewDidLayout:(id)arg1 byScrolling:(_Bool)arg2;
- (void)webView:(id)arg1 didFinishLoadForFrame:(id)arg2;
- (void)resetTilingAfterLoadComplete;
- (void)sendScrollEventIfNecessaryWasUserScroll:(_Bool)arg1;
- (void)sendScrollEventIfNecessary;
- (_Bool)needsScrollNotifications;
- (void)webView:(id)arg1 needsScrollNotifications:(id)arg2 forFrame:(id)arg3;
- (_Bool)isClassicViewportMode;
- (void)webView:(id)arg1 didReceiveViewportArguments:(id)arg2;
- (void)_applyViewportArguments:(id)arg1;
@property(nonatomic) _Bool shouldIgnoreCustomViewport;
- (void)_clearDoubleTapRect;
- (void)_updateSize;
@property(nonatomic) _Bool sizeUpdatesSuspended;
- (void)_setDocumentType:(int)arg1;
- (void)_setDocumentType:(int)arg1 overrideCustomConfigurations:(_Bool)arg2 viewportArguments:(id)arg3;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromFrame:(id)arg2;
- (struct CGRect)convertRect:(struct CGRect)arg1 toFrame:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromFrame:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 toFrame:(id)arg2;
- (void)viewportHandler:(id)arg1 didChangeViewportSize:(struct CGSize)arg2;
- (void)viewportHandlerDidChangeScales:(id)arg1;
- (void)_updateScrollViewBoundaryZoomScales;
- (double)_zoomedDocumentScale;
- (float)minimumScale;
- (float)maximumScale;
- (float)initialScale;
- (float)minimumScaleForMinimumSize:(struct CGSize)arg1;
- (float)_documentScale;
- (void)_setDocumentScale:(float)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setUsePreTimberlineTransparencyBehavior;
- (unsigned long long)dataDetectorTypes;
- (void)setDataDetectorTypes:(unsigned long long)arg1;
- (unsigned long long)effectiveDataDetectorTypes;
- (_Bool)_dataDetectionIsActivated;
- (_Bool)detectsPhoneNumbers;
- (void)setDetectsPhoneNumbers:(_Bool)arg1;
- (void)setUserStyleSheet:(id)arg1;
- (id)_focusedOrMainFrame;
- (id)_groupName;
- (id)webView;
- (_Bool)loadsSynchronously;
- (void)setLoadsSynchronously:(_Bool)arg1;
- (void)loadData:(id)arg1 MIMEType:(id)arg2 textEncodingName:(id)arg3 baseURL:(id)arg4;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadRequest:(id)arg1;
- (void)_cleanUpFrameStateAndLoad:(id)arg1;
- (void)_runLoadBlock:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)stopLoading:(id)arg1;
- (void)didMoveToSuperview;
- (void)willMoveToSuperview:(id)arg1;
- (_Bool)hasDrawnTiles;
- (_Bool)didFirstVisuallyNonEmptyLayout;
- (void)dealloc;
- (void)setTypingAttributes:(id)arg1;
- (id)typingAttributes;
- (void)_setTextColor:(id)arg1;
- (void)_setFont:(id)arg1;
- (void)_dismissViewControllerAnimated:(_Bool)arg1 completion:(id)arg2;
- (_Bool)_presentViewController:(id)arg1 animated:(_Bool)arg2 completion:(id)arg3;
- (void)_removeShortcutController:(_Bool)arg1;
- (void)_removeDefinitionController:(_Bool)arg1;
- (void)_inspectorDidStopSearchingForNode:(id)arg1;
- (void)_inspectorDidStartSearchingForNode:(id)arg1;
- (void)_resetShowingTextStyle:(id)arg1;
- (id)initWithWebView:(id)arg1 frame:(struct CGRect)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initSimpleHTMLDocumentWithStyle:(id)arg1 frame:(struct CGRect)arg2 preferences:(id)arg3 groupName:(id)arg4;
- (struct CGRect)webViewFrameForUIFrame:(struct CGRect)arg1;
- (void)_restoreViewportSettingsWithSize:(struct CGSize)arg1;
- (id)scriptingInfoWithChildren;
- (id)_scriptingInfoForForm:(id)arg1;
- (id)_scriptingInfoForLink:(id)arg1;
@property(getter=_acceptsFirstResponder, setter=_setAcceptsFirstResponder:) _Bool _acceptsFirstResponder;
- (id)_doubleTapGestureRecognizer;
- (id)superviewForSheet;
- (struct CGPoint)interactionLocation;
- (id)interactionElement;
- (void)setAllowsLinkSheet:(_Bool)arg1;
- (void)setAllowsDataDetectorsSheet:(_Bool)arg1;
- (void)setAllowsImageSheet:(_Bool)arg1;
- (id)interactionDelegate;
- (void)setInteractionDelegate:(id)arg1;
- (_Bool)supportsTwoFingerScrollingAtTouchLocation:(struct CGPoint)arg1 andLocation:(struct CGPoint)arg2;
- (void)sendScrollWheelEvents;
- (void)_cleanupSheet;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (id)_targetURL;
- (void)cancelInteractionWithImmediateDisplay:(_Bool)arg1;
- (void)deferInteraction;
- (void)cancelInteraction;
- (void)completeInteraction;
- (void)resetInteraction;
- (void)highlightApproximateNodeAndDisplayInfoSheet;
- (void)hideTapHighlight;
- (void)highlightApproximateNodeInverted:(_Bool)arg1;
- (id)deepestNodeAtViewportLocation:(struct CGPoint)arg1;
- (id)approximateNodeAtViewportLocation:(struct CGPoint *)arg1;
- (void)webViewDidPreventDefaultForEvent:(id)arg1;
- (void)webView:(id)arg1 didObserveDeferredContentChange:(int)arg2 forFrame:(id)arg3;
- (void)attemptClick:(id)arg1;
- (void)_sendMouseMoveAndAttemptClick:(id)arg1;
- (void)performClick:(id)arg1;
- (void)_syntheticMouseEventNotHandledAtLocation:(struct CGPoint)arg1;
- (void)_twoFingerPanRecognized:(id)arg1;
- (void)_longPressRecognized:(id)arg1;
- (void)_highlightLongPressRecognized:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (SEL)_actionForLongPressOnElement:(id)arg1;
- (void)_twoFingerDoubleTapRecognized:(id)arg1;
- (void)_doubleTapRecognized:(id)arg1;
- (void)_singleTapRecognized:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 canBePreventedByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)installGestureRecognizers;
- (_Bool)willInteractWithLocation:(struct CGPoint)arg1;
- (_Bool)isInInteraction;
- (_Bool)startActionSheet;
- (void)validateInteractionWithLocation:(struct CGPoint)arg1;
- (void)tapInteractionWithLocation:(struct CGPoint)arg1;
- (void)continueInteractionWithLocation:(struct CGPoint)arg1;
- (void)startInteractionWithLocation:(struct CGPoint)arg1;
- (void)_resetInteractionWithLocation:(struct CGPoint)arg1;
- (void)performInteractionSelector:(SEL)arg1 afterDelay:(double)arg2;
- (void)clearInteractionTimer;
- (struct CGRect)presentationRectInHostViewForSheet:(id)arg1;
- (struct CGRect)initialPresentationRectInHostViewForSheet:(id)arg1;
- (id)hostViewForSheet:(id)arg1;
- (struct CGRect)_presentationRectForSheetGivenPoint:(struct CGPoint)arg1 inHostView:(id)arg2;
- (void)_showDataDetectorsSheet;
- (void)actionDidFinish;
- (void)_showLinkSheet;
- (void)_showImageSheet;
- (void)_createSheetWithElementActions:(id)arg1 showLinkTitle:(_Bool)arg2;
- (void)drawPage:(unsigned long long)arg1 withPaginationInfo:(id)arg2;
- (void)_drawPDFPagesForPage:(unsigned long long)arg1 withPaginationInfo:(id)arg2;
- (void)endPrintMode;
- (id)beginPrintModeForFrame:(id)arg1 withSize:(struct CGSize)arg2 startOffset:(double)arg3 minimumLayoutWidth:(double)arg4 maximumLayoutWidth:(double)arg5 tileClippedContent:(_Bool)arg6;
- (id)beginPrintModeWithSize:(struct CGSize)arg1 startOffset:(double)arg2 minimumLayoutWidth:(double)arg3 maximumLayoutWidth:(double)arg4 tileClippedContent:(_Bool)arg5;
- (id)beginPrintModeForFrame:(id)arg1 withWidth:(double)arg2 height:(double)arg3 startOffset:(double)arg4 shrinkToFit:(_Bool)arg5 tileClippedContent:(_Bool)arg6;
- (id)beginPrintModeWithWidth:(double)arg1 height:(double)arg2 startOffset:(double)arg3 shrinkToFit:(_Bool)arg4 tileClippedContent:(_Bool)arg5;
- (id)beginPrintModeWithWidth:(double)arg1 height:(double)arg2 startOffset:(double)arg3 shrinkToFit:(_Bool)arg4;
- (id)_beginPrintModeForPDFView:(id)arg1 withSize:(struct CGSize)arg2 startOffset:(double)arg3 minimumLayoutWidth:(double)arg4 maximumLayoutWidth:(double)arg5;
- (id)_beginPrintModeForHTMLView:(id)arg1 withSize:(struct CGSize)arg2 startOffset:(double)arg3 minimumLayoutWidth:(double)arg4 maximumLayoutWidth:(double)arg5 tileClippedContent:(_Bool)arg6;
- (_Bool)isInPrintMode;
- (struct CGPoint)constrainedPoint:(struct CGPoint)arg1;
- (_Bool)mouseEventsChangeSelection;
- (id)positionAtStartOrEndOfWord:(id)arg1;
- (id)asText;
- (struct CGRect)visibleBounds;
- (id)webVisiblePositionForPoint:(struct CGPoint)arg1;
- (void)setSelectionWithPoint:(struct CGPoint)arg1;
- (void)scrollSelectionToVisible:(_Bool)arg1;
- (void)cancelAutoscroll;
- (void)startAutoscroll:(struct CGPoint)arg1;
- (struct CGRect)contentFrameForView:(id)arg1;
@property(nonatomic) struct CGPoint autoscrollContentOffset;
- (_Bool)selectionIsCaretInDisplayBlockElementAtOffset:(int)arg1;
- (void)setSelectionToStart;
- (void)setSelectionToEnd;
- (void)setRangedSelectionWithExtentPoint:(struct CGPoint)arg1;
- (void)smartExtendRangedSelection:(int)arg1;
- (id)selectionRects;
- (id)selectionRectsForDOMRange:(id)arg1;
- (id)textInDOMRange:(id)arg1;
- (void)setSelectedDOMRange:(id)arg1 affinity:(int)arg2;
- (id)wordAtPoint:(struct CGPoint)arg1;
- (void)setSelectionWithFirstPoint:(struct CGPoint)arg1 secondPoint:(struct CGPoint)arg2;
- (void)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(_Bool)arg2 allowFlipping:(_Bool)arg3;
- (_Bool)setRangedSelectionExtentPoint:(struct CGPoint)arg1 baseIsStart:(_Bool)arg2;
- (void)setRangedSelectionInitialExtentToCurrentSelectionEnd;
- (void)setRangedSelectionInitialExtentToCurrentSelectionStart;
- (void)clearRangedSelectionInitialExtent;
- (void)setRangedSelectionBaseToCurrentSelectionEnd;
- (void)setRangedSelectionBaseToCurrentSelectionStart;
- (void)setRangedSelectionBaseToCurrentSelection;
- (void)setBaseWritingDirection:(long long)arg1;
- (void)toggleBaseWritingDirection;
- (long long)selectionBaseWritingDirection;
- (struct CGRect)caretRectForVisiblePosition:(id)arg1;
- (struct CGRect)caretRect;
- (struct UIEdgeInsets)caretInsets;
- (void)setCaretInsets:(struct UIEdgeInsets)arg1;
- (void)collapseSelection;
@property(readonly, nonatomic) int selectionState;
- (unsigned long long)offsetInMarkedTextForSelection:(id)arg1;
- (struct CGRect)closestCaretRectInMarkedTextRangeForPoint:(struct CGPoint)arg1;
- (_Bool)hasMarkedText;
- (_Bool)hasEditableSelection;
- (void)clearSelection;
- (void)selectionChanged:(id)arg1;
- (void)selectionChanged;
- (struct CGPoint)convertPointToSelectedFrameCoordinates:(struct CGPoint)arg1;
- (struct CGRect)convertRectFromSelectedFrameCoordinates:(struct CGRect)arg1;
- (void)selectWord;
- (Class)_printFormatterClass;

// Remaining properties
@property(nonatomic) _Bool acceptsEmoji; // @dynamic acceptsEmoji;
@property(nonatomic) _Bool acceptsFloatingKeyboard;
@property(nonatomic) _Bool acceptsSplitKeyboard;
@property(nonatomic) long long autocapitalizationType; // @dynamic autocapitalizationType;
@property(copy, nonatomic) NSString *autocorrectionContext;
@property(nonatomic) long long autocorrectionType; // @dynamic autocorrectionType;
@property(nonatomic) _Bool contentsIsSingleValue; // @dynamic contentsIsSingleValue;
@property(nonatomic) _Bool deferBecomingResponder;
@property(nonatomic) _Bool displaySecureTextUsingPlainText;
@property(nonatomic) int emptyContentReturnKeyType;
@property(nonatomic) _Bool enablesReturnKeyAutomatically; // @dynamic enablesReturnKeyAutomatically;
@property(nonatomic) _Bool enablesReturnKeyOnNonWhiteSpaceContent;
@property(nonatomic) _Bool forceEnableDictation;
@property(retain, nonatomic) UIColor *insertionPointColor; // @dynamic insertionPointColor;
@property(nonatomic) unsigned long long insertionPointWidth; // @dynamic insertionPointWidth;
@property(nonatomic) _Bool isSingleLineDocument; // @dynamic isSingleLineDocument;
@property(nonatomic) long long keyboardAppearance; // @dynamic keyboardAppearance;
@property(nonatomic) long long keyboardType; // @dynamic keyboardType;
@property(nonatomic) _Bool learnsCorrections;
@property(copy, nonatomic) NSString *responseContext;
@property(nonatomic) _Bool returnKeyGoesToNextResponder;
@property(nonatomic) long long returnKeyType; // @dynamic returnKeyType;
@property(nonatomic, getter=isSecureTextEntry) _Bool secureTextEntry; // @dynamic secureTextEntry;
@property(retain, nonatomic) UIColor *selectionBarColor; // @dynamic selectionBarColor;
@property(retain, nonatomic) UIImage *selectionDragDotImage; // @dynamic selectionDragDotImage;
@property(retain, nonatomic) UIColor *selectionHighlightColor; // @dynamic selectionHighlightColor;
@property(nonatomic) int shortcutConversionType; // @dynamic shortcutConversionType;
@property(nonatomic) long long spellCheckingType; // @dynamic spellCheckingType;
@property(nonatomic) _Bool suppressReturnKeyStyling;
@property(readonly, nonatomic) UIView *textInputView;
@property(nonatomic) int textLoupeVisibility; // @dynamic textLoupeVisibility;
@property(nonatomic) int textSelectionBehavior; // @dynamic textSelectionBehavior;
@property(nonatomic) id textSuggestionDelegate; // @dynamic textSuggestionDelegate;
@property(nonatomic) struct __CFCharacterSet *textTrimmingSet; // @dynamic textTrimmingSet;
@property(nonatomic) _Bool useInterfaceLanguageForLocalization;

@end

