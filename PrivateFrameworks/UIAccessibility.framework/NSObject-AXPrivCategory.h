/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSObject (AXPrivCategory)
+ (id)_accessibilityTextChecker;
- (id)accessibilityUserDefinedSize;
- (id)accessibilityIdentification;
- (id)accessibilityUserDefinedNotFirstElement;
- (id)accessibilityUserDefinedServesAsFirstElement;
- (id)accessibilityUserDefinedIsMainWindow;
- (id)accessibilityUserDefinedWindowVisible;
- (id)isAccessibilityUserDefinedScrollAncestor;
- (id)isAccessibilityUserDefinedWindow;
- (void)accessibilitySetIdentification:(id)arg1;
- (_Bool)_accessibilityShouldPerformIncrementOrDecrement;
- (void)_accessibilityPostPasteboardTextForOperation:(id)arg1;
- (void)_accessibilityIgnoreNextPostPasteboardTextOperation:(id)arg1;
- (void)_accessibilityPostAnnouncement:(id)arg1;
- (void)_accessibilityPostNotificationHelper:(id)arg1;
- (void)accessibilityPostNotification:(unsigned int)arg1 withObject:(id)arg2 afterDelay:(double)arg3;
- (void)_accessibilityHandleATFocused:(_Bool)arg1;
- (void)_accessibilityIgnoreNextNotification:(unsigned int)arg1;
- (void)_accessibilityAnnouncementComplete:(id)arg1;
- (id)_accessibilitySupportedLanguages;
- (_Bool)accessibilityRequired;
- (int)_accessibilityMapFeatureType;
- (float)_accessibilityDistanceFromEndOfRoad:(struct CGPoint)arg1 forAngle:(float)arg2;
- (float)_accessibilityDistance:(struct CGPoint)arg1 forAngle:(float)arg2 toRoad:(id)arg3;
- (id)_accessibilityUpcomingRoadsForPoint:(struct CGPoint)arg1 forAngle:(float)arg2;
- (id)_accessibilityMapDetailedInfoAtPoint:(struct CGPoint)arg1;
- (_Bool)_accessibilityRoadContainsTrackingPoint:(struct CGPoint)arg1;
- (id)_axDebugTraits;
- (id)_axSuperviews;
- (id)_accessibilityString:(id)arg1 withSpeechHint:(id)arg2;
- (_Bool)_accessibilityLanguageOverriddesUser;
- (id)accessibilitySpeechHint;
- (id)accessibilityURL;
- (_Bool)_accessibilityHitTestsStatusBar;
- (id)_accessibilityAutomaticIdentifier;
- (unsigned long long)_accessibilityDatePickerComponentType;
- (int)_accessibilityPickerType;
- (struct CGRect)_accessibilityGesturePracticeRegion;
- (id)_accessibilityDateTimePickerValues;
- (_Bool)_accessibilityWebSearchResultsActive;
- (_Bool)accessibilityIsComboBox;
- (void)_accessibilityIncreaseSelection:(id)arg1;
- (id)accessibilityInvalidStatus;
- (_Bool)_accessibilityBackingElementIsValid;
- (long long)_accessibilityIndexForPickerString:(id)arg1;
- (void)_accessibilityDecreaseSelection:(id)arg1;
- (id)_accessibilityUserTestingVisibleSections;
- (id)_accessibilityUserTestingVisibleCells;
- (struct CGPoint)_accessibilityMaxScrubberPosition;
- (struct CGPoint)_accessibilityMinScrubberPosition;
- (double)_accessibilityMaxValue;
- (double)_accessibilityMinValue;
- (_Bool)_accessibilityDismissAlternativeKeyPicker;
- (_Bool)_accessibilityDispatchKeyboardAction:(id)arg1;
- (_Bool)_accessibilityHandwritingActivateKeyboardDeleteKey;
- (_Bool)_accessibilityHandwritingActivateKeyboardReturnKey;
- (void)_accessibilityInsertText:(id)arg1 atPosition:(long long)arg2;
- (void)_accessibilityReplaceCharactersAtCursor:(unsigned long long)arg1 withString:(id)arg2;
- (_Bool)_accessibilityHandwritingAttributeAcceptsContractedBraille;
- (_Bool)_accessibilityHandwritingAttributeAcceptsRawInput;
- (_Bool)_accessibilityHandwritingAttributeShouldPlayKeyboardSecureClickSound;
- (_Bool)_accessibilityHandwritingAttributeShouldEchoCharacter;
- (_Bool)_accessibilityHandwritingAttributeCanDeleteCharacter;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSets;
- (int)_accessibilityHandwritingAttributeAllowedCharacterSetsForKeyboardType:(long long)arg1;
- (int)_accessibilityHandwritingAttributePreferredCharacterSet;
- (int)_accessibilityHandwritingAttributePreferredCharacterSetForKeyboardType:(long long)arg1;
- (id)_accessibilityHandwritingAttributes;
- (_Bool)_accessibilitySupportsHandwriting;
- (id)_accessibilityHandwritingAncestor;
- (void)_accessibilityPostValueChangedNotificationWithChangeType:(struct __CFString *)arg1;
- (void)_accessibilityPostValueChangedNotificationWithInsertedText:(id)arg1;
- (void)_accessibilityPostValueChangedNotificationWithChangeType:(struct __CFString *)arg1 insertedText:(id)arg2;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;
- (void)_accessibilityAddMispellingsToAttributedString:(id)arg1;
- (void)_accessibilityConvertStyleAttributesToAccessibility:(id)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (id)_accessibilityTextChecker;
- (id)_accessibilityValueForRange:(struct _NSRange *)arg1;
- (_Bool)__accessibilityReadAllOnFocus;
- (_Bool)_accessibilityReadAllOnFocus;
- (id)_accessibilityMarkerLineEndsForMarkers:(id)arg1;
- (id)_accessibilityMarkersForRange:(struct _NSRange)arg1;
- (id)_accessibilityMarkersForPoints:(id)arg1;
- (id)accessibilityLabelForRange:(struct _NSRange *)arg1;
- (struct CGRect)_accessibilityTextCursorFrame;
- (_Bool)_accessibilityKeyboardSupportsGestureMode;
- (_Bool)_accessibilityBookShowsDualPages;
- (_Bool)_accessibilityKeyboardKeyAllowsTouchTyping;
- (_Bool)_accessibilityShouldAnnounceFontInfo;
- (id)_accessibilityPageContent;
- (void)_accessibilitySetCurrentWordInPageContext:(id)arg1;
- (_Bool)_accessibilityIncludeDuringContentReading;
- (long long)accessibilityLineNumberForPoint:(struct CGPoint)arg1;
- (id)accessibilityPageContent;
- (struct CGPoint)_accessibilityVisibleScrollArea:(_Bool)arg1;
- (_Bool)_accessibilityReadAllContinuesWithScroll;
- (id)_accessibilityDOMAttributes;
- (void)_accessibilityMoveSelectionToMarker:(id)arg1;
- (id)_accessibilityTextMarkerForPosition:(long long)arg1;
- (struct _NSRange)_accessibilitySelectedNSRangeForObject;
- (id)_accessibilityTextMarkerRangeForSelection;
- (struct _NSRange)_accessibilityRangeForTextMarker:(id)arg1;
- (id)_accessibilityPageTextMarkerRange;
- (id)_accessibilityTextMarkerRange;
- (id)_accessibilityPreviousMarker:(id)arg1;
- (id)_accessibilityNextMarker:(id)arg1;
- (id)_accessibiltyAvailableKeyplanes;
- (id)_accessibilityElementStoredUserLabel;
- (id)_accessibilityPhotoDescription;
- (id)_accessibilityLineEndMarker:(id)arg1;
- (id)_accessibilityMarkerForPoint:(struct CGPoint)arg1;
- (id)_accessibilityLineStartMarker:(id)arg1;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (struct _NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint)arg1;
- (long long)_accessibilityLineStartPosition;
- (long long)_accessibilityLineEndPosition;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (_Bool)_accessibilityTriggerDictationFromPath:(id)arg1;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (struct CGRect)accessibilityFrameForLineNumber:(long long)arg1;
- (id)accessibilityContentForLineNumber:(long long)arg1;
- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (id)_accessibilityObjectForTextMarker:(id)arg1;
- (id)accessibilityArrayOfTextForTextMarkers:(id)arg1;
- (id)accessibilityStringForTextMarkers:(id)arg1;
- (struct CGRect)accessibilityBoundsForTextMarkers:(id)arg1;
- (void)_accessibilitySetAnimationsInProgress:(_Bool)arg1;
- (_Bool)_accessibilityAnimationsInProgress;
- (void)_accessibilityUnregister;
- (void)__accessibilityUnregister:(void *)arg1 shouldRelease:(_Bool)arg2;
- (_Bool)accessibilityElementIsFocused;
- (_Bool)_accessibilityShouldReleaseAfterUnregistration;
- (void)accessibilityElementDidLoseFocus;
- (void)accessibilityElementDidBecomeFocused;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityPlayKeyboardClickSound;
- (void)_accessibilityPlaySystemSound:(int)arg1;
- (void)_accessibilitySetIsTourGuideRunning:(_Bool)arg1;
- (_Bool)_accessibilityIsTourGuideRunning;
- (void)_accessibilitySetCameraIrisOpen:(_Bool)arg1;
- (_Bool)_accessibilityCameraIrisOpen;
- (_Bool)_accessibilityHasTextOperations;
- (id)_accessibilityTextOperations;
- (void)_accessibilityCut;
- (void)_accessibilityReplace;
- (void)_accessibilityDelete;
- (void)_accessibilitySelect;
- (void)_accessibilitySelectAll;
- (void)_accessibilityPaste;
- (_Bool)_accessibilityPerformEscape;
- (_Bool)_accessibilityTextOperationAction:(id)arg1;
- (void)accessibilityDecreaseTrackingDetail;
- (void)accessibilityIncreaseTrackingDetail;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (_Bool)_accessibilityPerformCustomActionWithIdentifier:(id)arg1;
- (_Bool)accessibilityPerformCustomAction:(long long)arg1;
- (void)_accessibilitySetCurrentGesture:(id)arg1;
- (id)_accessibilityTextViewTextOperationResponder;
- (_Bool)accessibilityEditOperationAction:(id)arg1;
- (id)accessibilityMenuActions;
- (_Bool)_accessibilityObscuresScreen;
- (void)_setAccessibilityObscuresScreen:(_Bool)arg1;
- (_Bool)_accessibilityIsFrameOutOfBounds;
- (_Bool)_accessibilityOverridesInvalidFrames;
- (long long)_accessibilitySortPriority;
- (void)_accessibilitySetSortPriority:(long long)arg1;
- (struct CGRect)_accessibilityCompareFrameForScrollParent:(id)arg1 frame:(struct CGRect)arg2 orientationNeededForRotation:(long long)arg3;
- (_Bool)_accessibilityOnlyComparesByXAxis;
- (struct CGRect)_accessibilityContentFrame;
- (struct UIEdgeInsets)_accessibilityVisibleContentInset;
- (struct CGAffineTransform)_accessibilityJailTransform;
- (id)_accessibilityDisplayPathForScreenPath:(id)arg1;
- (struct CGPoint)_accessibilityConvertPointToViewSpace:(struct CGPoint)arg1;
- (struct CGPoint)_accessibilityDisplayPointForSceneReferencePoint:(struct CGPoint)arg1;
- (struct CGRect)_accessibilityDisplayRectForSceneReferenceRect:(struct CGRect)arg1;
- (struct CGPoint)_accessibilityConvertSystemBoundedScreenPointToSceneReferenceSpace:(struct CGPoint)arg1;
- (struct CGRect)_accessibilityConvertSystemBoundedScreenRectToSceneReferenceSpace:(struct CGRect)arg1;
- (struct CGRect)_accessibilityVisibleFrame;
- (long long)accessibilityCompareGeometry:(id)arg1;
- (struct CGRect)_handleRotatingFrame:(struct CGRect)arg1 toOrientation:(long long)arg2;
- (void)_handleRotatingFirstFrame:(struct CGRect *)arg1 secondFrame:(struct CGRect *)arg2 toOrientation:(long long)arg3;
- (struct CGRect)_accessibilityConvertPortraitUpFrame:(struct CGRect)arg1 toOrientation:(long long)arg2;
- (long long)_accessibilityCompareElement:(id)arg1 toElement:(id)arg2;
- (long long)_accessibilityCompareGeometryForViewOrDictionary:(id)arg1;
- (long long)_accessibilitySortPriorityWithReturningView:(id *)arg1;
- (_Bool)_accessibilityOverridesInvisibility;
- (void)_accessibilitySetOverridesInvisibility:(_Bool)arg1;
- (double)_accessibilityAllowedGeometryOverlap;
- (void)_accessibilitySetAllowedGeometryOverlap:(double)arg1;
- (void)setAccessibilitySize:(struct CGSize)arg1;
- (id)_accessibilityControlDescendantWithAction:(SEL)arg1;
- (id)_accessibilityControlDescendantWithTarget:(id)arg1;
- (id)_accessibilityFindSubviewDescendantsPassingTest:(id)arg1;
- (id)_accessibilityFindSubviewDescendant:(id)arg1;
- (id)_accessibilityFindDescendant:(id)arg1;
- (id)_accessibilityFindAncestor:(id)arg1 startWithSelf:(void)arg2;
- (id)_accessibilityFindAXDescendants:(id)arg1 byAddingElements:(void)arg2;
- (id)_accessibilityFindAnyAXDescendant:(id)arg1 byAddingElements:(void)arg2;
- (id)_accessibilityAncestorIsAccessibilityElementsHidden;
- (id)_accessibilityAncestorIsKindOf:(Class)arg1;
- (id)_accessibilityViewAncestorIsKindOf:(Class)arg1;
- (_Bool)_accessibilityIsDescendantOfElement:(id)arg1;
- (id)accessibilityViewWithIdentifier:(id)arg1;
- (id)_accessibilityUnignoredDescendant;
- (_Bool)_accessibilityHasDescendantOfType:(Class)arg1;
- (id)_accessibilityDescendantOfType:(Class)arg1;
- (id)_accessibilitySearchSubtreesAfterChildElement:(id)arg1 direction:(int)arg2 searchTraits:(unsigned long long)arg3 allowOutOfBoundsChild:(_Bool)arg4;
- (id)_accessibilitySortedElementsWithin;
- (void)_accessibilityOpaqueElementScrollToDirection:(int)arg1;
- (id)_accessibilityFindElementInDirection:(int)arg1 searchTraits:(unsigned long long)arg2 allowOutOfBoundsChild:(_Bool)arg3;
- (void)_accessibilityScrollOpaqueElementIntoView:(int)arg1 previousScroller:(id)arg2;
- (_Bool)_accessibilityOpaqueElementScrollsContentIntoView;
- (id)_accessibilityOpaqueElementParent;
- (_Bool)isAccessibilityOpaqueElementProvider;
- (void)_accessibilitySetWantsOpaqueElementProviders:(_Bool)arg1;
- (_Bool)_accessibilityWantsOpaqueElementProviders;
- (void)setIsAccessibilityOpaqueElementProvider:(_Bool)arg1;
- (_Bool)_accessibilityDidSetOpaqueElementProvider;
- (_Bool)_accessibilityRetainsCustomRotorActionSetting;
- (id)_accessibilityLastOpaqueElement;
- (id)_accessibilityFirstOpaqueElement;
- (id)_accessibilityOpaqueElementsFrom:(id)arg1 direction:(int)arg2 searchTraits:(unsigned long long)arg3;
- (id)_accessibilityElementsForSearchParameter:(id)arg1;
- (id)_accessibilityAncestorForSiblingsWithTraits:(unsigned long long)arg1;
- (id)accessibilityTitleElement;
- (id)_accessibilityHeaderElement;
- (_Bool)_accessibilitySortCollectionViewLogically;
- (_Bool)_accessibilityIsInternationalKeyboardKey;
- (_Bool)_accessibilityAllowsAlternativeCharacterActivation;
- (id)_accessibilityInputIdentifierForKeyboard;
- (id)_accessibilityRetrieveImagePathLabel:(id)arg1;
- (id)_accessibilityStatusBar;
- (unsigned int)_accessibilityContextId;
- (id)_accessibilityParentView;
- (id)_accessibilityWindow;
- (_Bool)_accessibilityUsesSpecialKeyboardDismiss;
- (id)_accessibilityApplication;
- (void)_setAccessibilityTableCellUsesDetailTextAsValue:(_Bool)arg1;
- (_Bool)_accessibilityTableCellUsesDetailTextAsValue;
- (void)_accessibilityChangeToKeyplane:(id)arg1;
- (id)_accessibilityKeyboardKeyForString:(id)arg1;
- (id)_accessibilityTableViewCellWithRowIndex:(long long)arg1 andColumn:(long long)arg2;
- (_Bool)_accessibilityRespectsTableScrollEnabledFlag;
- (_Bool)_accessibilityHasVariantKeys;
- (id)_accessibilityVariantKeys;
- (_Bool)_accessibilityDidDeleteTableViewCell;
- (_Bool)_accessibilityCanDeleteTableViewCell;
- (_Bool)_accessibilityContainedByTableLogicIsEnabledOutsideOfWebContext;
- (_Bool)_accessibilityCanDismissPopoverController:(id)arg1;
- (_Bool)_accessibilityIsAwayAlertElementNew;
- (_Bool)_accessibilityIsAwayAlertElement;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;
- (_Bool)_accessibilityPerformLabelling:(id)arg1;
- (void)_accessibilityJumpToTableIndex:(id)arg1;
- (void)_accessibilityFindSearchResult:(_Bool)arg1 withString:(id)arg2;
- (_Bool)_accessibilityIsInTableCell;
- (_Bool)_accessibilityIsTableCell;
- (id)_accessibilityResponderElement;
- (_Bool)_accessibilityServesAsFirstResponder;
- (id)_accessibilitySupplementaryFooterViews;
- (id)_accessibilitySupplementaryHeaderViews;
- (_Bool)_accessibilityIsFirstElementForFocus;
- (struct _NSRange)accessibilityColumnRange;
- (struct _NSRange)accessibilityRowRange;
- (id)accessibilityElementForRow:(long long)arg1 andColumn:(long long)arg2;
- (id)_accessibilityRoleDescription;
- (unsigned long long)_accessibilityInheritedTraits;
- (_Bool)_accessibilityShouldInheritTraits;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(int)arg2;
- (id)accessibilityAttributeValue:(int)arg1;
- (id)accessibilityAttributeValue:(int)arg1 forParameter:(id)arg2;
- (id)_accessibilitySpeakThisString;
- (void)_accessibilitySetIsSpeakThisElement:(_Bool)arg1;
- (_Bool)_accessibilityIsSpeakThisElement;
- (void)_accessibilityRawSetIsSpeakThisElement:(id)arg1;
- (id)_accessibilityRawIsSpeakThisElement;
- (id)_accessibilityEquivalenceTag;
- (id)_accessibilityBriefLabel;
- (_Bool)_accessibilityUpdatesOnActivationAfterDelay;
- (void)_setAccessibilityUpdatesOnActivationAfterDelay:(_Bool)arg1;
- (id)_accessibilityVisibleItemInList;
- (id)_accessibilityFirstVisibleItem;
- (id)_accessibilityCustomActionNamesAndIdentifiers;
- (id)_accessibilityAllCustomRotorItemsAtIndex:(long long)arg1;
- (id)_accessibilityAllCustomRotorTitles;
- (void)_accessibilityEnumerateAllCustomRotorTitlesWithAccumulator:(id *)arg1 usingBlock:(id)arg2;
- (id)_accessibilityFirstElementForFocus;
- (void)_setAccessibilityIsNotFirstElement:(_Bool)arg1;
- (_Bool)_accessibilityIsNotFirstElement;
- (void)_setAccessibilityServesAsFirstElement:(_Bool)arg1;
- (_Bool)_accessibilityServesAsFirstElement;
- (_Bool)_accessibilityIsStarkElement;
- (_Bool)_accessibilityIsVisible;
- (struct CGPoint)_accessibilityVisiblePointHitTestingAnyElement:(_Bool)arg1;
- (struct CGPoint)_accessibilityVisiblePoint;
- (_Bool)_accessibilityVisiblePointHonorsScreenBounds;
- (id)_accessibilityTouchContainer;
- (_Bool)_accessibilityIsMap;
- (_Bool)_accessibilityIsTouchContainer;
- (void)_accessibilityAddTrait:(unsigned long long)arg1;
- (void)_accessibilityRemoveTrait:(unsigned long long)arg1;
- (id)_accessibilityCustomActions;
- (_Bool)_accessibilityPerformLegacyCustomAction:(id)arg1;
- (id)_accessibilityViewController;
- (_Bool)_accessibilityOverridesInstructionsHint;
- (_Bool)_accessibilityOpaqueElementProvider;
- (id)accessibilityFlowToElements;
- (id)accessibilityCustomRotorItemsAtIndex:(long long)arg1;
- (id)accessibilityCustomRotorTitles;
- (_Bool)_accessibilityShouldAvoidAnnouncing;
- (_Bool)_accessibilityLastHitTestNearBorder;
- (id)_accessibilityBundleIdentifier;
- (id)accessibilityMathEquation;
- (_Bool)_accessibilityIsMathTouchExplorationView;
- (_Bool)_accessibilityShouldSpeakMathEquationTrait;
- (id)accessibilityMathMLSource;
- (id)accessibilitySecondaryLabel;
- (float)_accessibilityActivationDelay;
- (_Bool)_accessibilityIsUserInteractionEnabled;
- (_Bool)_allowCustomActionHintSpeakOverride;
- (_Bool)_accessibilitySupportsMultipleCustomRotorTitles;
- (id)_accessibilityAppSwitcherApps;
- (id)_accessibilityLaunchableApps;
- (_Bool)_accessibilityIsInFolder;
- (_Bool)_accessibilityIsInAppSwitcher;
- (_Bool)_accessibilityAlwaysSpeakTableHeaders;
- (_Bool)_accessibilityIsTitleElement;
- (_Bool)_accessibilityIsLastSiblingForTrait:(unsigned long long)arg1;
- (_Bool)_accessibilityIsFirstSiblingForTrait:(unsigned long long)arg1;
- (_Bool)_accessibilityIsLastSibling;
- (_Bool)_accessibilityIsFirstSibling;
- (_Bool)_accessibilityElementShouldBeInvalid;
- (_Bool)_accessibilityCanPerformEscapeAction;
- (_Bool)_accessibilitySupportsActivateAction;
- (_Bool)_accessibilityAlwaysOrderedFirst;
- (id)_accessibilitySupportGesturesAttributes;
- (id)accessibilityLinkedElement;
- (id)accessibilityHeaderElements;
- (id)accessibilityPlaceholderValue;
- (_Bool)_accessibilityCanPerformAction:(int)arg1;
- (_Bool)__accessibilitySupportsSecondaryActivateAction;
- (_Bool)__accessibilitySupportsActivateAction;
- (void)_accessibilityUpdateContainerElementReferencesIfNeededForNewElements:(id)arg1 oldElements:(id)arg2;
- (void)set_accessibilityDidUpdateContainerReferenceForAccessibilityElements:(_Bool)arg1;
- (_Bool)_accessibilityDidUpdateContainerReferenceForAccessibilityElements;
- (id)_accessibilityElements;
- (id)_accessibilityPreviousElementsWithCount:(unsigned int)arg1 originalElement:(id)arg2;
- (id)_accessibilityNextElementsWithCount:(unsigned int)arg1 originalElement:(id)arg2;
- (id)_accessibilityContainerInDirection:(_Bool)arg1 originalElement:(id)arg2;
- (id)_accessibilityContainingParentForOrdering;
- (_Bool)_accessibilityHasOrderedChildren;
- (void)accessibilityEnumerateContainerElementsUsingBlock:(id)arg1;
- (void)accessibilityEnumerateContainerElementsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (_Bool)accessibilityShouldEnumerateContainerElementsArrayDirectly;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)_accessibilityResetContainerElements;
- (_Bool)_accessibilityUsesScrollParentForOrdering;
- (_Bool)_accessibilityServesAsContainingParentForOrdering;
- (id)_accessibilityContainerForAccumulatingCustomRotorItems;
- (id)accessibilityContainerElements;
- (id)_accessibilityParentForFindingScrollParent;
- (id)_accessibilityScrollParent;
- (void)_accessibilityScrollDownPage;
- (void)_accessibilityScrollUpPage;
- (void)_accessibilityScrollRightPage;
- (_Bool)_accessibilityScrollPreviousPage;
- (_Bool)_accessibilityScrollNextPage;
- (void)_accessibilityScrollLeftPage;
- (_Bool)_accessibilityHandlePublicScroll:(long long)arg1;
- (void)_accessibilityScrollToPoint:(struct CGPoint)arg1;
- (_Bool)_accessibilityShouldAttemptScrollToFrameOnParentView;
- (_Bool)_accessibilityScrollToVisible;
- (_Bool)_accessibilityCanScrollInAtLeastOneDirection;
- (_Bool)_accessibilityIsScrollable;
- (_Bool)_accessibilityIsEscapable;
- (_Bool)_accessibilityIterateParentsForTestBlock:(id)arg1;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1 alwaysAllowRefreshAction:(_Bool)arg2;
- (id)_accessibilityScrollAncestorForSelector:(SEL)arg1;
- (id)_accessibilityScrollStatus;
- (_Bool)_accessibilityElementVisibilityAffectsLayout;
- (_Bool)_accessibilityShouldSpeakScrollStatusOnEntry;
- (void)setIsAccessibilityScrollAncestor:(_Bool)arg1;
- (id)_accessibilityScrollAncestor;
- (struct CGPoint)__accessibilityVisibleScrollArea:(_Bool)arg1;
- (void)_accessibilityIterateScrollParentsUsingBlock:(id)arg1 includeSelf:(void)arg2;
- (void)_accessibilityIterateScrollParentsUsingBlock:(id)arg1;
- (_Bool)_accessibilityIsWebDocumentView;
- (_Bool)_accessibilityShouldUseViewHierarchyForFindingScrollParent;
- (_Bool)accessibilityScrollToTopSupported;
- (_Bool)accessibilityScrollUpPageSupported;
- (_Bool)accessibilityScrollDownPageSupported;
- (_Bool)accessibilityScrollRightPageSupported;
- (_Bool)accessibilityScrollLeftPageSupported;
- (_Bool)_accessibilityScrollToFrame:(struct CGRect)arg1 forView:(id)arg2;
- (_Bool)_accessibilityIsScrollAncestor;
- (_Bool)_accessibilityScrollingEnabled;
- (long long)_accessibilityPageControlIndex;
- (long long)_accessibilityPageControlCount;
- (void)accessibilityScrollLeftPage;
- (void)accessibilityScrollRightPage;
- (void)accessibilityScrollDownPage;
- (void)accessibilityScrollUpPage;
- (struct CGRect)accessibilityFrameForScrolling;
- (void)_setAccessibilityIsMainWindow:(_Bool)arg1;
- (_Bool)_accessibilityIsMainWindow;
- (void)_setAccessibilityWindowVisible:(_Bool)arg1;
- (_Bool)_accessibilityWindowVisible;
- (void)setIsAccessibilityWindow:(_Bool)arg1;
- (_Bool)accessibilityIsWindow;
- (_Bool)_accessibilitySelfFoundByHitTesting;
- (id)_accessibilityBaseHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_accessibilityHitTestSupplementaryViews:(id)arg1 point:(struct CGPoint)arg2 withEvent:(id)arg3;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_accessibilityFuzzyHitTestElements;
- (_Bool)_accessibilityHitTestReverseOrder;
- (_Bool)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (_Bool)accessibilityActivate;
- (_Bool)accessibilityStartStopToggle;
- (_Bool)_accessibilitySecondaryActivate;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
@end

