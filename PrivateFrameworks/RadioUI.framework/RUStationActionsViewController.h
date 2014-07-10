/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "MCProfileConnectionObserver-Protocol.h"
#import "RUStationTrackInfoViewDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MPAVItem, NSArray, NSMutableArray, RUInnerShadowHeaderFooterView, RUStationTrackInfoView, RUStationTuningView, RadioStation, UILabel, UISwitch, UITableView, UITableViewCell;

@interface RUStationActionsViewController : UIViewController <RUStationTrackInfoViewDelegate, MCProfileConnectionObserver, SKStoreProductViewControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UILabel *_copyrightLabel;
    long long _currentAction;
    _Bool _isProfileExplicitContentRestricted;
    UILabel *_navigationTitleLabel;
    _Bool _needsTrackInfoViewHeightReset;
    UISwitch *_playExplicitTracksSwitch;
    NSArray *_playbackQueue;
    RadioStation *_station;
    NSMutableArray *_stationActionGroups;
    UITableViewCell *_stationTuningCell;
    RUStationTuningView *_stationTuningView;
    UITableView *_tableView;
    RUInnerShadowHeaderFooterView *_topShadowView;
    RUStationTrackInfoView *_trackInfoView;
    _Bool _showsDoneButton;
    MPAVItem *_item;
    id <RUStationActionsViewControllerDelegate> _delegate;
}

@property(nonatomic) _Bool showsDoneButton; // @synthesize showsDoneButton=_showsDoneButton;
@property(nonatomic) __weak id <RUStationActionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(readonly, nonatomic) RadioStation *station; // @synthesize station=_station;
- (void).cxx_destruct;
- (void)_updateViewForHorizontalSizeClassChangeAllowingTableReload:(_Bool)arg1;
- (void)_updateTableFooterView;
- (void)_updateIsProfileExplicitContentRestrictedForProfileConnection:(id)arg1;
- (void)_updateAvailableActions;
- (long long)_stationActionForIndexPath:(id)arg1;
- (id)_sectionHeaderTitleLabelFont;
- (double)_sectionHeaderHeight;
- (id)_newShadowViewWithFrame:(struct CGRect)arg1;
- (id)_newSectionHeaderWithFrame:(struct CGRect)arg1 title:(id)arg2;
- (void)_layoutTopShadowView;
- (id)_indexPathForStationAction:(long long)arg1;
- (void)_didReceiveRadioAccountDidDeauthenticateNotification:(id)arg1;
- (void)_addDerivedStationUsingArtist:(_Bool)arg1 withCompletionHandler:(id)arg2;
- (void)_userDefaultExplicitTracksEnabledDidChangeNotification:(id)arg1;
- (void)_radioModelDidChangeNotification:(id)arg1;
- (void)_contentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_avItemStoreIDDidChangeNotification:(id)arg1;
- (void)_showStoreSheetAction:(id)arg1;
- (void)_playExplicitSwitchAction:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)tableViewDidFinishReload:(id)arg1;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)profileConnectionDidReceiveRestrictionChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)profileConnectionDidReceiveEffectiveSettingsChangedNotification:(id)arg1 userInfo:(id)arg2;
- (void)trackInfoViewDidTapStoreButton:(id)arg1;
- (void)trackInfoViewDidTapArtwork:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)contentScrollView;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (void)dealloc;
- (id)initWithStation:(id)arg1 item:(id)arg2 playbackQueue:(id)arg3;
- (id)init;

@end

