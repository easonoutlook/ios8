/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PUAvalancheReviewControllerSpec;

@interface PUPhotoBrowserControllerSpec : NSObject
{
    PUAvalancheReviewControllerSpec *_avalancheReviewControllerSpec;
}

@property(readonly, nonatomic) PUAvalancheReviewControllerSpec *avalancheReviewControllerSpec; // @synthesize avalancheReviewControllerSpec=_avalancheReviewControllerSpec;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool wantsCompactCommentsLayout;
@property(readonly, nonatomic) _Bool shouldShowBackButtonTitle;
@property(readonly, nonatomic) _Bool wantsSubtitleForPhotobrowserTitleInLandscape;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations;
@property(readonly, nonatomic) int photoThumbnailFormat;
@property(readonly, nonatomic) _Bool shouldUsePopovers;
@property(readonly, nonatomic) _Bool shouldShowPhotoScrubber;
@property(readonly, nonatomic) _Bool isInCamera;
@property(readonly, nonatomic) _Bool shouldShowDeleteItem;
@property(readonly, nonatomic) _Bool shouldShowShareItem;
@property(readonly, nonatomic) _Bool shouldShowEditItem;
@property(readonly, nonatomic) _Bool shouldShowAirplayItem;
@property(readonly, nonatomic) _Bool shouldShowSlideshowItem;
- (id)newPhotoBrowserZoomTransition;
- (id)newPhotoBrowserControllerForPhotoAtIndexPath:(id)arg1 assetCollections:(id)arg2 datasource:(id)arg3;

@end

