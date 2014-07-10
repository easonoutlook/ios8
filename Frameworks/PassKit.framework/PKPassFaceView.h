/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PassKit/WLEasyToHitCustomView.h>

@class CAFilter, NSArray, NSMutableArray, NSMutableSet, PKBarcodeStickerView, PKPass, PKPassColorProfile, PKPassFaceTemplate, UIImage, UIImageView, UIView;

@interface PKPassFaceView : WLEasyToHitCustomView
{
    PKPass *_pass;
    PKPassColorProfile *_colorProfile;
    UIView *_contentView;
    UIImageView *_backgroundView;
    UIImage *_faceImage;
    UIImage *_partialFaceImage;
    CAFilter *_dimmingFilter;
    NSMutableArray *_headerBucketViews;
    NSMutableArray *_bodyBucketViews;
    PKBarcodeStickerView *_barcodeView;
    unsigned long long _contentViewCreatedRegions;
    unsigned long long _invariantViewCreatedRegions;
    PKPassFaceTemplate *_faceTemplate;
    _Bool _allowBackgroundPlaceHolders;
    _Bool _clipsContent;
    NSArray *_buckets;
    long long _style;
    id <PKPassFaceDelegate> _delegate;
    long long _backgroundMode;
    unsigned long long _visibleRegions;
    double _clippedContentHeight;
    NSMutableSet *_headerInvariantViews;
    NSMutableSet *_bodyInvariantViews;
    NSMutableSet *_headerContentViews;
    NSMutableSet *_bodyContentViews;
}

+ (id)newBackFaceViewForStyle:(long long)arg1 tall:(_Bool)arg2;
+ (id)newFrontFaceViewForStyle:(long long)arg1;
+ (Class)_faceClassForStyle:(long long)arg1 front:(_Bool)arg2;
@property(readonly, nonatomic) NSMutableSet *bodyContentViews; // @synthesize bodyContentViews=_bodyContentViews;
@property(readonly, nonatomic) NSMutableSet *headerContentViews; // @synthesize headerContentViews=_headerContentViews;
@property(readonly, nonatomic) NSMutableSet *bodyInvariantViews; // @synthesize bodyInvariantViews=_bodyInvariantViews;
@property(readonly, nonatomic) NSMutableSet *headerInvariantViews; // @synthesize headerInvariantViews=_headerInvariantViews;
@property(retain, nonatomic) NSMutableArray *headerBucketViews; // @synthesize headerBucketViews=_headerBucketViews;
@property(nonatomic) double clippedContentHeight; // @synthesize clippedContentHeight=_clippedContentHeight;
@property(nonatomic) _Bool clipsContent; // @synthesize clipsContent=_clipsContent;
@property(nonatomic) unsigned long long visibleRegions; // @synthesize visibleRegions=_visibleRegions;
@property(nonatomic) long long backgroundMode; // @synthesize backgroundMode=_backgroundMode;
@property(nonatomic) _Bool allowBackgroundPlaceHolders; // @synthesize allowBackgroundPlaceHolders=_allowBackgroundPlaceHolders;
@property(nonatomic) id <PKPassFaceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long style; // @synthesize style=_style;
@property(readonly, retain, nonatomic) NSArray *buckets; // @synthesize buckets=_buckets;
- (void)_handleTimeOrLocaleChange:(id)arg1;
- (id)_relevantBuckets;
- (void)_setShowsBackgroundView:(_Bool)arg1;
- (void)_setContentViewsAlpha:(double)arg1;
- (void)_setShowsBodyViews:(_Bool)arg1;
- (void)_setShowsHeaderViews:(_Bool)arg1;
- (void)_flushContentViewsForRegions:(unsigned long long)arg1;
- (void)_createContentViewsForRegions:(unsigned long long)arg1;
- (void)_createInvariantViewsForRegions:(unsigned long long)arg1;
- (void)prepareForFlip;
- (void)createBodyContentViews;
- (void)createHeaderContentViews;
- (void)createBodyInvariantViews;
- (void)createHeaderInvariantViews;
@property(readonly, nonatomic) struct CGSize contentSize;
@property(readonly, nonatomic) _Bool isFrontFace;
- (id)passFaceTemplate;
- (long long)_validityStateForPass:(id)arg1;
- (void)presentDiff:(id)arg1 completion:(id)arg2;
@property(readonly, nonatomic) PKBarcodeStickerView *barcodeView;
- (struct CGRect)barcodeFrame;
- (void)_positionBarcodeView;
- (void)layoutSubviews;
@property(readonly, nonatomic) struct UIEdgeInsets shadowInsets;
- (void)createContentViewsWithFade:(_Bool)arg1;
- (void)setDimmer:(double)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) _Bool bodyContentCreated;
@property(readonly, nonatomic) PKPassColorProfile *colorProfile; // @synthesize colorProfile=_colorProfile;
@property(readonly, nonatomic) PKPass *pass; // @synthesize pass=_pass;
@property(readonly, nonatomic) struct CGRect contentBounds;
@property(readonly, nonatomic) UIView *contentView;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setPass:(id)arg1 colorProfile:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
