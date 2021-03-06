/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "SKUIContentRatingArtworkLoaderObserver-Protocol.h"

@class NSOperationQueue, SKUIClientContext, SKUIContentRatingArtworkResourceLoader, SKUIProductInformationView, SKUIProductPageItem, SKUIProductPageProductInfo;

@interface SKUIProductPageInformationViewController : UIViewController <SKUIContentRatingArtworkLoaderObserver>
{
    SKUIClientContext *_clientContext;
    SKUIContentRatingArtworkResourceLoader *_contentRatingArtworkLoader;
    SKUIProductInformationView *_informationView;
    SKUIProductPageItem *_item;
    SKUIProductPageProductInfo *_productInfo;
    NSOperationQueue *_operationQueue;
}

@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) SKUIProductPageItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_updateLinesWithRatingImage:(id)arg1;
- (id)_informationLinesWithProductInfo:(id)arg1;
- (id)_informationLinesWithItem:(id)arg1 ratingImage:(id)arg2;
- (id)_contentRatingResourceLoader;
- (void)contentRatingArtworkLoader:(id)arg1 didLoadImage:(id)arg2 forContentRating:(id)arg3;
- (void)loadView;
- (void)dealloc;
- (id)initWithProductInformation:(id)arg1 clientContext:(id)arg2;
- (id)initWithItem:(id)arg1 clientContext:(id)arg2;

@end

