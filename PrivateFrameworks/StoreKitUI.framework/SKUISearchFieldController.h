/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SKUITrendingSearchPageViewDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSOperationQueue, NSString, SKUIClientContext, SKUICompletionList, SKUISearchBar, SKUISearchDisplayController, SSVLoadURLOperation, UISearchBar, UIViewController;

@interface SKUISearchFieldController : NSObject <UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate, UISearchBarDelegate, SKUITrendingSearchPageViewDelegate>
{
    NSString *_baseHintsURLString;
    SKUIClientContext *_clientContext;
    SKUICompletionList *_completionList;
    id <SKUISearchFieldDelegate> _delegate;
    SSVLoadURLOperation *_loadOperation;
    long long _numberOfSearchResults;
    NSOperationQueue *_operationQueue;
    SKUISearchBar *_searchBar;
    NSString *_searchBarAccessoryText;
    SKUISearchDisplayController *_searchDisplayController;
    NSString *_trendingSearchURLString;
}

@property(copy, nonatomic) NSString *trendingSearchURLString; // @synthesize trendingSearchURLString=_trendingSearchURLString;
@property(copy, nonatomic) NSString *searchHintsURLString; // @synthesize searchHintsURLString=_baseHintsURLString;
@property(copy, nonatomic) NSString *searchBarAccessoryText; // @synthesize searchBarAccessoryText=_searchBarAccessoryText;
@property(nonatomic) long long numberOfSearchResults; // @synthesize numberOfSearchResults=_numberOfSearchResults;
@property(nonatomic) __weak id <SKUISearchFieldDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (void)_setResponse:(id)arg1 error:(id)arg2;
- (void)_reloadData;
- (void)_loadResultsForURL:(id)arg1 withMetricsEvent:(id)arg2;
- (void)_loadResultsForSearchTerm:(id)arg1 withMetricsEvent:(id)arg2;
- (void)_reloadTrendingVisibility;
- (id)URLForTrendingSearchPageView:(id)arg1;
- (void)trendingSearchPageView:(id)arg1 didSelectSearch:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (Class)_resultsTableViewClass;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginTouches:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
@property(nonatomic) _Bool showsResultsForEmptyField;
- (void)setSearchTerm:(id)arg1;
@property(nonatomic) _Bool displaysSearchBarInNavigationBar;
@property(readonly, nonatomic) UISearchBar *searchBar;
@property(readonly, nonatomic) UIViewController *contentsController;
- (void)dealloc;
- (id)initWithContentsController:(id)arg1;

@end

