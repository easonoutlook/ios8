/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSAttributedString, NSDateFormatter, NSDictionary, UIColor, UIFont, UIImage;

@interface CKUIBehavior : NSObject
{
    long long _HUDStyle;
    double _waveformMaxWidth;
}

+ (id)sharedBehaviors;
@property(readonly, nonatomic) double waveformMaxWidth; // @synthesize waveformMaxWidth=_waveformMaxWidth;
@property(nonatomic) long long HUDStyle; // @synthesize HUDStyle=_HUDStyle;
@property(readonly, nonatomic) double photoPickerMaxPhotoWidth;
@property(readonly, nonatomic) double photoPickerMaxZoomedPhotoHeight;
@property(readonly, nonatomic) double photoPickerMaxPhotoHeight;
@property(readonly, nonatomic) _Bool photoPickerShouldZoomOnSelection;
@property(readonly, nonatomic) struct UIEdgeInsets photoPickerSectionInsets;
@property(readonly, nonatomic) double photoPickerInterItemSpacing;
@property(readonly, nonatomic) unsigned long long numberOfButtonsInPhotoPicker;
@property(readonly, nonatomic) double photoPickerPopoverWidth;
@property(readonly, nonatomic) double attachmentBrowserHeaderLabelPadding;
@property(readonly, nonatomic) struct UIEdgeInsets attachmentBrowserFeedLayoutSectionInset;
@property(readonly, nonatomic) struct UIEdgeInsets attachmentBrowserGridSectionInset;
@property(readonly, nonatomic) double attachmentBrowserGridMinimumLineSpacing;
@property(readonly, nonatomic) double attachmentBrowserGridInterItemSpacing;
@property(readonly, nonatomic) struct CGSize attachmentBrowserDefaultSizeForSquare;
@property(readonly, nonatomic) UIColor *recipientsDividerColor;
@property(readonly, nonatomic) double dividerHeight;
@property(readonly, nonatomic) UIFont *audioHintFont;
@property(readonly, nonatomic) UIFont *characterCountFont;
@property(readonly, nonatomic) UIColor *entryFieldAudioRecordingBaloonColor;
@property(readonly, nonatomic) UIColor *entryFieldTextColor;
@property(readonly, nonatomic) UIColor *entryFieldDividerColor;
@property(readonly, nonatomic) UIColor *entryFieldBackgroundColor;
@property(readonly, nonatomic) UIColor *entryFieldCoverBorderColor;
@property(readonly, nonatomic) UIColor *entryFieldCoverFillColor;
@property(readonly, nonatomic) UIColor *entryFieldGrayColor;
- (id)red_sendButtonColor;
- (id)siri_sendButtonColor;
- (id)blue_sendButtonColor;
- (id)green_sendButtonColor;
- (id)gray_sendButtonColor;
- (id)sendButtonColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) double entryFieldLineFragmentPadding;
@property(readonly, nonatomic) double entryFieldDividerHeight;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewCoverInsets;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewVerticalAlignmentInsets;
@property(readonly, nonatomic) struct UIEdgeInsets entryViewMarginInsets;
@property(readonly, nonatomic) _Bool entryFieldShouldUseBackdropView;
@property(readonly, nonatomic) long long keyboardAppearance;
@property(readonly, nonatomic) unsigned long long entryFieldWaveformUpdateFrequency;
@property(readonly, nonatomic) double maxAudioRecordingDuration;
@property(readonly, nonatomic) double minAudioRecordingDuration;
@property(readonly, nonatomic) _Bool shouldAlwaysShowAudioButton;
- (double)toFieldPreferredHeight;
- (id)red_recipientTextColor;
- (id)siri_recipientTextColor;
- (id)blue_recipientTextColor;
- (id)green_recipientTextColor;
- (id)gray_recipientTextColor;
- (id)recipientTextColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) _Bool presentsFullscreenInViewService;
@property(readonly, nonatomic) _Bool shouldRefreshAlternateAddressesSheet;
@property(readonly, nonatomic) _Bool shouldAutomaticallyCheckAvailabilityOfAlternateAddresses;
@property(readonly, nonatomic) _Bool shouldShowDisclosureChevronInRecipientAtoms;
@property(readonly, nonatomic) _Bool shouldHomogenizeAtomsForPreferredService;
@property(readonly, nonatomic) UIImage *textDocumentIcon;
@property(readonly, nonatomic) UIImage *errorDocumentIcon;
@property(readonly, nonatomic) UIImage *genericDocumentIcon;
@property(readonly, nonatomic) UIFont *previewTitleFont;
@property(readonly, nonatomic) UIColor *waveformDisabledColor;
@property(readonly, nonatomic) UIColor *waveformUnplayedColor;
- (id)red_progressViewColor;
- (id)siri_progressViewColor;
- (id)blue_progressViewColor;
- (id)green_progressViewColor;
- (id)gray_progressViewColor;
- (id)progressViewColorForColorType:(BOOL)arg1;
- (id)red_waveformColor;
- (id)siri_waveformColor;
- (id)blue_waveformColor;
- (id)green_waveformColor;
- (id)gray_waveformColor;
- (id)waveformColorForColorType:(BOOL)arg1;
@property(readonly, nonatomic) UIColor *attachmentBalloonTextColor;
@property(readonly, nonatomic) UIColor *attachmentBalloonActionColor;
- (double)transcriptWaveformWidthForDuration:(double)arg1;
@property(readonly, nonatomic) unsigned long long waveformPowerLevelWidthIncrement;
@property(readonly, nonatomic) unsigned long long waveformGapWidth;
@property(readonly, nonatomic) unsigned long long waveformPowerLevelWidth;
@property(readonly, nonatomic) double waveformHeight;
- (struct UIEdgeInsets)thumbnailContentAlignmentInsetsForOrientation:(BOOL)arg1;
@property(readonly, nonatomic) double previewTitleBarHeight;
@property(readonly, nonatomic) struct UIEdgeInsets minimumPlayButtonInsets;
- (struct CGSize)mapThumbnailFillSizeForWidth:(double)arg1;
- (struct CGSize)thumbnailFillSizeForWidth:(double)arg1 imageSize:(struct CGSize)arg2;
@property(readonly, nonatomic) double contactBalloonMinWidth;
@property(readonly, nonatomic) struct CGSize attachmentBalloonSize;
@property(readonly, nonatomic) struct CGSize documentIconSize;
@property(readonly, nonatomic) double waveformMinLinearPowerLevel;
@property(readonly, nonatomic) double waveformMinDbPowerLevel;
@property(readonly, nonatomic) unsigned long long waveformMinPowerLevelsCount;
@property(readonly, nonatomic) unsigned long long waveformMaxPowerLevelsCount;
@property(readonly, nonatomic) double waveformMaxWidthDuration;
@property(readonly, nonatomic) _Bool supportsPassbookAttachments;
- (struct CGSize)locationShareBalloonSizeForWidth:(double)arg1 offerState:(long long)arg2;
@property(readonly, nonatomic) double locationShareBalloonContactImageDiameter;
- (double)locationShareBalloonLabelMaxHeightForOfferState:(long long)arg1;
@property(readonly, nonatomic) double locationShareBalloonButtonHeight;
- (id)red_chevronImage;
- (id)siri_chevronImage;
- (id)blue_chevronImage;
- (id)green_chevronImage;
- (id)gray_chevronImage;
- (id)chevronImageForColorType:(BOOL)arg1;
- (id)systemGrayChevronImage;
- (id)whiteChevronImage;
@property(readonly, nonatomic) UIFont *audioBalloonTimeFont;
@property(readonly, nonatomic) UIFont *balloonSubjectFont;
@property(readonly, nonatomic) UIFont *balloonTextFont;
- (id)red_balloonOverlayColor;
- (id)siri_balloonOverlayColor;
- (id)blue_balloonOverlayColor;
- (id)green_balloonOverlayColor;
- (id)gray_balloonOverlayColor;
- (id)balloonOverlayColorForColorType:(BOOL)arg1;
- (id)red_balloonTextLinkColor;
- (id)siri_balloonTextLinkColor;
- (id)blue_balloonTextLinkColor;
- (id)green_balloonTextLinkColor;
- (id)gray_balloonTextLinkColor;
- (id)balloonTextLinkColorForColorType:(BOOL)arg1;
- (id)red_balloonTextColor;
- (id)siri_balloonTextColor;
- (id)blue_balloonTextColor;
- (id)green_balloonTextColor;
- (id)gray_balloonTextColor;
- (id)balloonTextColorForColorType:(BOOL)arg1;
- (id)red_unfilledBalloonColor;
- (id)siri_unfilledBalloonColor;
- (id)blue_unfilledBalloonColor;
- (id)green_unfilledBalloonColor;
- (id)gray_unfilledBalloonColor;
- (id)unfilledBalloonColorForColorType:(BOOL)arg1;
- (id)red_balloonColors;
- (id)siri_balloonColors;
- (id)blue_balloonColors;
- (id)green_balloonColors;
- (id)gray_balloonColors;
- (id)balloonColorsForColorType:(BOOL)arg1;
@property(readonly, nonatomic) double audioBalloonTimeInset;
@property(readonly, nonatomic) double audioBalloonWaveformTimeSpace;
- (double)audioBalloonTimeWidthForDuration:(double)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets balloonMaskFrameInsets;
@property(readonly, nonatomic) struct UIEdgeInsets balloonMaskFrameCapInsets;
@property(readonly, nonatomic) struct UIEdgeInsets balloonMaskAlignmentRectInsets;
@property(readonly, nonatomic) struct UIEdgeInsets skinnyBalloonMaskCapInsets;
@property(readonly, nonatomic) struct UIEdgeInsets balloonMaskCapInsets;
@property(readonly, nonatomic) struct CGSize skinnyBalloonMaskSize;
@property(readonly, nonatomic) struct CGSize balloonMaskSize;
@property(readonly, nonatomic) double skinnyBalloonWidthDifference;
@property(readonly, nonatomic) double balloonMaskTailWidth;
@property(readonly, nonatomic) _Bool shouldUseDynamicGradient;
@property(readonly, nonatomic) UIImage *locationShareActionIcon;
@property(readonly, nonatomic) NSDictionary *drawerTranscriptTextAttributes;
@property(readonly, nonatomic) NSDictionary *stampTranscriptBoldTextAttributes;
@property(readonly, nonatomic) NSDictionary *stampTranscriptTextAttributes;
@property(readonly, nonatomic) NSDictionary *senderTranscriptTextAttributes;
- (id)statusTranscriptBoldTextAttributesForOrientation:(BOOL)arg1;
- (id)statusTranscriptTextAttributesForOrientation:(BOOL)arg1;
- (id)_rightStatusTranscriptBoldTextAttributes;
- (id)_leftStatusTranscriptBoldTextAttributes;
- (id)_rightStatusTranscriptTextAttributes;
- (id)_leftStatusTranscriptTextAttributes;
@property(readonly, nonatomic) UIFont *transcriptBoldTextFont;
@property(readonly, nonatomic) UIFont *transcriptTextFont;
@property(readonly, nonatomic) UIColor *transcriptTextColor;
@property(readonly, nonatomic) UIColor *transcriptBackgroundColor;
@property(readonly, nonatomic) double entryContentViewPortraitWidth;
@property(readonly, nonatomic) double entryCoverViewPortraitWidth;
- (double)composeBalloonMaxWidthForEntryContentViewWidth:(double)arg1;
- (double)rightBalloonMaxWidthForEntryContentViewWidth:(double)arg1;
- (double)leftBalloonMaxWidthForTranscriptWidth:(double)arg1 marginInsets:(struct UIEdgeInsets)arg2;
@property(readonly, nonatomic) double contactPhotoBalloonMargin;
- (double)balloonBalloonTranscriptSpace:(unsigned char)arg1;
@property(readonly, nonatomic) double largeTranscriptSpace;
@property(readonly, nonatomic) double mediumTranscriptSpace;
@property(readonly, nonatomic) double smallTranscriptSpace;
@property(readonly, nonatomic) double bottomTranscriptSpace;
@property(readonly, nonatomic) double topTranscriptSpace;
- (double)timestampBodyLeadingFraction:(double)arg1;
- (double)timestampBodyLeading;
- (void)invalidateTranscriptDrawerWidth;
- (double)transcriptDrawerWidthForMarginInsets:(struct UIEdgeInsets)arg1;
- (double)transcriptDrawerOverlapForMarginInsets:(struct UIEdgeInsets)arg1;
@property(readonly, nonatomic) struct UIEdgeInsets contactPhotoTranscriptInsets;
@property(readonly, nonatomic) struct UIEdgeInsets stampTranscriptInsets;
@property(readonly, nonatomic) struct UIEdgeInsets senderTranscriptInsets;
@property(readonly, nonatomic) struct UIEdgeInsets balloonTranscriptInsets;
@property(readonly, nonatomic) double previewMaxWidth;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptMarginInsets;
@property(readonly, nonatomic) struct UIEdgeInsets statusButtonContentEdgeInsets;
@property(readonly, nonatomic) struct CGSize statusSaveButtonTranscriptTextSize;
@property(readonly, nonatomic) NSAttributedString *statusSaveButtonTranscriptText;
@property(readonly, nonatomic) double transcriptBoldTextHeight;
@property(readonly, nonatomic) struct UIEdgeInsets transcriptBoldTextAlignmentInsets;
@property(readonly, nonatomic) double transcriptDrawerContactImagePadding;
@property(readonly, nonatomic) double transcriptDrawerContactImageDiameter;
@property(readonly, nonatomic) double transcriptContactImageDiameter;
@property(readonly, nonatomic) _Bool shouldUseDynamicScrolling;
@property(readonly, nonatomic) _Bool shouldShowContactPhotosInTranscript;
@property(readonly, nonatomic) _Bool supportsTypingIndicatorAnimation;
@property(readonly, nonatomic) UIFont *readerFont;
@property(readonly, nonatomic) UIFont *transcriptHeaderTextFont;
@property(readonly, nonatomic) UIColor *dimmingViewBackgroundColor;
@property(readonly, nonatomic) UIColor *transcriptSeparatorColor;
@property(readonly, nonatomic) double updateTranscriptInsetsAnimationDuration;
@property(readonly, nonatomic) double editingTransitionAnimationDuration;
@property(readonly, nonatomic) double resizeMessageEntryViewAnimationDuration;
@property(readonly, nonatomic) double throwMessageAnimationDuration;
@property(readonly, nonatomic) double scrollInNewMessageAnimationDuration;
@property(readonly, nonatomic) double fadeInBubbleAnimationDuration;
- (double)_transcriptAnimationScaleFactor;
@property(readonly, nonatomic) _Bool shouldUseSendAnimation;
@property(readonly, nonatomic) _Bool shouldDimTranscript;
@property(readonly, nonatomic) _Bool shouldBackfillTranscript;
@property(readonly, nonatomic) UIImage *forwardImage;
@property(readonly, nonatomic) UIFont *conversationListDateFont;
@property(readonly, nonatomic) UIFont *conversationListSummaryFont;
@property(readonly, nonatomic) UIFont *conversationListGroupSenderFont;
@property(readonly, nonatomic) UIFont *conversationListSenderFont;
@property(readonly, nonatomic) double conversationListMultipleContactsImageDiameter;
@property(readonly, nonatomic) double conversationListContactImageDiameter;
@property(readonly, nonatomic) _Bool shouldShowContactPhotosInConversationList;
@property(readonly, nonatomic) _Bool usesPersistentConversationSelection;
@property(readonly, nonatomic) _Bool selectNewConversationOnDeletion;
@property(readonly, nonatomic) _Bool selectNewConversationOnStateRestore;
@property(readonly, nonatomic) _Bool showPendingInConversationList;
@property(readonly, nonatomic) UIImage *chevronImage;
@property(readonly, nonatomic) UIColor *lightGrayColor;
@property(readonly, nonatomic) UIColor *appTintColor;
@property(readonly, nonatomic) double senderSummaryConversationListSpace;
@property(readonly, nonatomic) double bottomConversationListSpace;
@property(readonly, nonatomic) double topConversationListSpace;
- (double)conversationListSummaryBodyLeading;
- (double)conversationListSenderBodyLeading;
@property(readonly, nonatomic) double transcriptPortraitWidth;
- (double)leftSplitPaneWidthForUIInterfaceOrientation:(long long)arg1;
@property(readonly, nonatomic) _Bool showMMSSetup;
@property(readonly, nonatomic) _Bool photosIsWhitelisted;
@property(readonly, nonatomic) _Bool cameraIsWhitelisted;
@property(readonly, nonatomic) _Bool mailIsWhitelisted;
@property(readonly, nonatomic) _Bool faceTimeAudioIsWhitelisted;
@property(readonly, nonatomic) _Bool faceTimeVideoIsWhitelisted;
@property(readonly, nonatomic) _Bool phoneIsWhitelisted;
@property(readonly, nonatomic) _Bool canAccessPhotos;
@property(readonly, nonatomic) _Bool canAccessContacts;
@property(readonly, nonatomic) NSDateFormatter *timestampDateFormatter;
@property(readonly, nonatomic) unsigned long long conversationCacheSize;
@property(readonly, nonatomic) unsigned long long defaultConversationSummaryMessageCount;
@property(readonly, nonatomic) unsigned long long defaultConversationViewingMessageCount;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property(readonly, nonatomic) double transcriptHeaderViewMaxRows;
@property(readonly, nonatomic) _Bool isAccessibilityPreferredContentSizeCategory;
@property(readonly, nonatomic) _Bool joystickUsesWindow;
@property(readonly, nonatomic) _Bool usesJoystick;
@property(readonly, nonatomic) _Bool presentForwardingUIModally;
@property(readonly, nonatomic) _Bool shouldUseTranslucentBars;
@property(readonly, nonatomic) _Bool showsChevronImage;
@property(readonly, nonatomic) _Bool presentsReaderController;
@property(readonly, nonatomic) _Bool usesPopovers;
@property(readonly, nonatomic) _Bool presentsQuickLookController;
@property(readonly, nonatomic) _Bool lowClearanceInLandscape;
@property(readonly, nonatomic) _Bool shouldReconfigureNewComposeOnRotation;
@property(readonly, nonatomic) _Bool usesUncollapsedSplitview;
@property(readonly, nonatomic) double locationValidInterval;
@property(readonly, nonatomic) long long locationShareEODHour;
@property(readonly, nonatomic) double locationShareOneHourTimeInterval;
@property(readonly, nonatomic) double muteEightHourTimeInterval;
@property(readonly, nonatomic) double muteOneHourTimeInterval;

@end

