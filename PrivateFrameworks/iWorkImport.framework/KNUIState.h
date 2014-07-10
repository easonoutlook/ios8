/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class KNMacUILayout, KNSlideCollectionSelection, NSMutableDictionary, NSSet;

// Not exported
@interface KNUIState : NSObject <NSCopying>
{
    KNSlideCollectionSelection *mSlideTreeSelection;
    double mIPadCanvasViewScale;
    struct CGPoint mIPadCanvasOffset;
    double mDesktopCanvasViewScale;
    struct CGPoint mDesktopCanvasOffset;
    _Bool mHasPhoneCanvasViewScale;
    double mPhoneCanvasViewScale;
    _Bool mHasPhoneCanvasOffset;
    struct CGPoint mPhoneCanvasOffset;
    _Bool mHasPhone568CanvasViewScale;
    double mPhone568CanvasViewScale;
    _Bool mHasPhone568CanvasOffset;
    struct CGPoint mPhone568CanvasOffset;
    KNMacUILayout *mDocumentUILayout;
    _Bool mSlideViewFitsContentInWindow;
    double mLightTableZoomScale;
    _Bool mLightTableHidesSkippedSlides;
    struct CGPoint mDesktopMainWindowOrigin;
    struct CGSize mDesktopMainContentSize;
    double mDesktopNavigatorViewWidth;
    double mDesktopOutlineViewWidth;
    double mDesktopPresenterNotesViewHeight;
    NSMutableDictionary *mChartUIState;
    NSSet *mCollapsedSlideNodes;
    _Bool mShowSlideGuides;
    _Bool mShowMasterGuides;
    _Bool mShowsComments;
    _Bool mShowsRuler;
}

@property(nonatomic) _Bool showsRuler; // @synthesize showsRuler=mShowsRuler;
@property(nonatomic) _Bool showsComments; // @synthesize showsComments=mShowsComments;
@property(nonatomic) _Bool showSlideGuides; // @synthesize showSlideGuides=mShowSlideGuides;
@property(nonatomic) _Bool showMasterGuides; // @synthesize showMasterGuides=mShowMasterGuides;
@property(copy, nonatomic) NSSet *collapsedSlideNodes; // @synthesize collapsedSlideNodes=mCollapsedSlideNodes;
@property(nonatomic) double desktopPresenterNotesHeight; // @synthesize desktopPresenterNotesHeight=mDesktopPresenterNotesViewHeight;
@property(nonatomic) double desktopOutlineViewWidth; // @synthesize desktopOutlineViewWidth=mDesktopOutlineViewWidth;
@property(nonatomic) double desktopNavigatorViewWidth; // @synthesize desktopNavigatorViewWidth=mDesktopNavigatorViewWidth;
@property(nonatomic) struct CGSize desktopMainContentSize; // @synthesize desktopMainContentSize=mDesktopMainContentSize;
@property(nonatomic) struct CGPoint desktopMainWindowOrigin; // @synthesize desktopMainWindowOrigin=mDesktopMainWindowOrigin;
@property(nonatomic) _Bool lightTableHidesSkippedSlides; // @synthesize lightTableHidesSkippedSlides=mLightTableHidesSkippedSlides;
@property(nonatomic) double lightTableZoomScale; // @synthesize lightTableZoomScale=mLightTableZoomScale;
@property(nonatomic) _Bool slideViewFitsContentInWindow; // @synthesize slideViewFitsContentInWindow=mSlideViewFitsContentInWindow;
@property(copy, nonatomic) KNMacUILayout *documentUILayout; // @synthesize documentUILayout=mDocumentUILayout;
@property(retain, nonatomic) KNSlideCollectionSelection *slideTreeSelection; // @synthesize slideTreeSelection=mSlideTreeSelection;
- (id).cxx_construct;
- (id)debugDescription;
- (id)archivedUIStateInContext:(id)arg1;
@property(nonatomic) struct CGPoint canvasOffset;
@property(nonatomic) double canvasViewScale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)saveToArchive:(struct UIStateArchive *)arg1 archiver:(id)arg2 context:(id)arg3;
- (void)loadFromArchive:(const struct UIStateArchive *)arg1 unarchiver:(id)arg2 context:(id)arg3;
- (void)setUIState:(id)arg1 forChart:(id)arg2;
- (id)UIStateForChart:(id)arg1;

@end

