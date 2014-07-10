/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "RUSearchDataSourceDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSError, NSMutableArray, NSString, RUMetricsController, RUSearchDataSource, RadioSearchStationResult, SKUICircleProgressIndicator, SSMetricsPageEvent, UILabel, UITableView, UIView;

@interface RUSearchViewController : UIViewController <RUSearchDataSourceDelegate, UISearchBarDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SKUICircleProgressIndicator *_activityIndicatorView;
    RadioSearchStationResult *_addingStationResult;
    RUSearchDataSource *_dataSource;
    SSMetricsPageEvent *_lastPageEvent;
    NSError *_lastSearchError;
    UILabel *_loadingLabel;
    struct CGRect _keyboardFrame;
    RUMetricsController *_metricsController;
    UILabel *_noResultsLabel;
    NSMutableArray *_queuedMetricsOperations;
    NSMutableArray *_resultCategories;
    NSString *_searchTerm;
    long long _seeingMoreCategoryType;
    _Bool _displaysCoreSeedName;
    _Bool _excludeFeaturedStations;
    _Bool _showsAddingIndicator;
    id <RUSearchViewControllerDelegate> _delegate;
    UITableView *_tableView;
    UIView *_tableViewBackgroundView;
}

@property(retain, nonatomic) UIView *tableViewBackgroundView; // @synthesize tableViewBackgroundView=_tableViewBackgroundView;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) _Bool showsAddingIndicator; // @synthesize showsAddingIndicator=_showsAddingIndicator;
@property(nonatomic) _Bool excludeFeaturedStations; // @synthesize excludeFeaturedStations=_excludeFeaturedStations;
@property(nonatomic) _Bool displaysCoreSeedName; // @synthesize displaysCoreSeedName=_displaysCoreSeedName;
@property(nonatomic) __weak id <RUSearchViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateVisibleHeadersState;
- (void)_updateViewForHorizontalSizeClassChange;
- (id)_statusLabelFont;
- (void)_setShowingLoading:(_Bool)arg1;
- (id)_sectionHeaderTitleFontWithEmphasis:(_Bool)arg1;
- (void)_reloadForSearchTerm:(id)arg1 canUpdateDataSourceResults:(_Bool)arg2;
- (id)_parentPageType;
- (id)_parentPageDescription;
- (void)_layoutSearchSubviews;
- (id)_impressionsWithStationDictionaries:(id)arg1 fieldsMap:(id)arg2;
- (id)_firstValueForKeyInImpressionsMap:(id)arg1 withStationDictionary:(id)arg2;
- (id)_currentVisibleStationDictionaries;
- (id)_createPageEventForCurrentState;
- (void)_configureSectionHeader:(id)arg1 forResultCategory:(id)arg2;
- (void)_addMetricsControllerOperationBlock:(id)arg1;
- (void)_keyboardWillChangeFrameNotification:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_applicationWillEnterForegroundNotification:(id)arg1;
- (void)_clearButtonAction:(id)arg1;
- (void)updateResultsForSearchTerm:(id)arg1;
- (void)removeAddingIndicator;
- (void)traitCollectionDidChange:(id)arg1;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)_configureSeeMoreCell:(id)arg1 forResultCategory:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)searchDisplayController:(id)arg1 willUnloadSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willShowSearchResultsTableView:(id)arg2;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayController:(id)arg1 didLoadSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchDataSource:(id)arg1 willStartSearchRequest:(id)arg2;
- (void)searchDataSource:(id)arg1 didFinishUpdatingResult:(id)arg2 forRequest:(id)arg3 withError:(id)arg4;
- (id)contentScrollView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

@end

