/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

#import "SKStoreProductViewControllerDelegate-Protocol.h"

@class NSArray, NSDictionary, NSURL, PKLinkedAppUserRatingView, SKStoreProductViewController, SSSoftwareLibraryItem, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface PKLinkedAppView : UITableViewCell <SKStoreProductViewControllerDelegate>
{
    _Bool _lookupInitiated;
    _Bool _appInstalled;
    _Bool _appNotAvailable;
    NSArray *_storeIDs;
    NSDictionary *_foundStoreItem;
    SSSoftwareLibraryItem *_foundLibraryItem;
    UIImageView *_iconView;
    UILabel *_tapToOpen;
    UILabel *_appName;
    UIButton *_viewButton;
    UILabel *_appPublisher;
    PKLinkedAppUserRatingView *_userRatingView;
    UILabel *_price;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_loadingLabel;
    SKStoreProductViewController *_productViewController;
    NSURL *_appLaunchURL;
}

@property(retain, nonatomic) NSURL *appLaunchURL; // @synthesize appLaunchURL=_appLaunchURL;
@property(retain, nonatomic) SKStoreProductViewController *productViewController; // @synthesize productViewController=_productViewController;
@property(nonatomic) _Bool appNotAvailable; // @synthesize appNotAvailable=_appNotAvailable;
@property(retain, nonatomic) UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(retain, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property(retain, nonatomic) UILabel *price; // @synthesize price=_price;
@property(retain, nonatomic) PKLinkedAppUserRatingView *userRatingView; // @synthesize userRatingView=_userRatingView;
@property(retain, nonatomic) UILabel *appPublisher; // @synthesize appPublisher=_appPublisher;
@property(retain, nonatomic) UIButton *viewButton; // @synthesize viewButton=_viewButton;
@property(retain, nonatomic) UILabel *appName; // @synthesize appName=_appName;
@property(retain, nonatomic) UILabel *tapToOpen; // @synthesize tapToOpen=_tapToOpen;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) _Bool appInstalled; // @synthesize appInstalled=_appInstalled;
@property(retain, nonatomic) SSSoftwareLibraryItem *foundLibraryItem; // @synthesize foundLibraryItem=_foundLibraryItem;
@property(retain, nonatomic) NSDictionary *foundStoreItem; // @synthesize foundStoreItem=_foundStoreItem;
@property(retain, nonatomic) NSArray *storeIDs; // @synthesize storeIDs=_storeIDs;
@property(nonatomic) _Bool lookupInitiated; // @synthesize lookupInitiated=_lookupInitiated;
- (void)productViewControllerDidFinish:(id)arg1;
- (id)_priceForItem:(id)arg1;
- (int)_bindingTypeForNewsstandItem:(id)arg1;
- (int)_iconOptionsForItem:(id)arg1;
- (int)_iconVariantForImage:(id)arg1 item:(id)arg2;
- (void)_buttonPressed:(id)arg1;
- (struct CGSize)_sizeFromImage:(id)arg1;
- (id)_imageForSize:(struct CGSize)arg1 fromArtwork:(id)arg2 requireStrictMatch:(_Bool)arg3;
- (struct CGSize)_desiredSizeForNewsstandItem:(id)arg1;
- (_Bool)_itemArtNeedsShine:(id)arg1;
- (id)_newsstandArtworkForItem:(id)arg1;
- (_Bool)_itemIsNewsstandApp:(id)arg1;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize)arg2 requireStrictMatch:(_Bool)arg3;
- (id)_iconURLFromArtwork:(id)arg1 withDesiredSize:(struct CGSize)arg2;
- (_Bool)_anyAppIsInstalled:(id)arg1;
- (void)_cleanupViews;
- (void)_layoutLockupView;
- (void)_layoutNotAvailableView;
- (void)_layoutLoadingView;
- (void)layoutSubviews;
- (void)performStoreLookup;
- (void)reloadWithDelay:(double)arg1;
- (void)reload;
- (void)dealloc;
- (id)initWithStoreIDs:(id)arg1 appLaunchURL:(id)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

