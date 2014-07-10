/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableView.h"

@class NSOperationQueue, SKUIClientContext, SKUIIPhoneTrendingSearchPageView, SKUILoadTrendingSearchPageOperation, SKUITrendingSearchPage;

@interface SKUISearchFieldTableView : UITableView
{
    SKUITrendingSearchPage *_page;
    SKUILoadTrendingSearchPageOperation *_loadOp;
    NSOperationQueue *_opQueue;
    SKUIClientContext *_clientContext;
    SKUIIPhoneTrendingSearchPageView *_pageView;
    _Bool _visible;
    id <SKUITrendingSearchPageViewDelegate> _trendingSearchDelegate;
}

@property(nonatomic) __weak id <SKUITrendingSearchPageViewDelegate> trendingSearchDelegate; // @synthesize trendingSearchDelegate=_trendingSearchDelegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_reloadView;
- (void)_setTrendingResponse:(id)arg1 error:(id)arg2;
- (void)_reloadData;
- (void)layoutSubviews;
@property(nonatomic) _Bool trendingSearchesVisible;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2;

@end

