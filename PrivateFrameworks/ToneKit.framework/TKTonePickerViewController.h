/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "MPMediaPickerControllerDelegate-Protocol.h"
#import "TKToneClassicsTableViewControllerDelegate-Protocol.h"
#import "TKTonePickerControllerDelegate-Protocol.h"
#import "TKTonePickerControllerDelegateInternal-Protocol.h"
#import "TKVibrationPickerViewControllerDelegate-Protocol.h"
#import "TKVibrationPickerViewControllerDismissalDelegate-Protocol.h"

@class MPMediaPickerController, MPMusicPlayerController, NSIndexPath, NSMutableArray, NSNumber, NSString, TKTonePickerController, TKTonePickerTableViewCellLayoutManager, TKVibrationPickerViewController, UIBarButtonItem, UIImage, UIView;

@interface TKTonePickerViewController : UITableViewController <TKTonePickerControllerDelegate, TKTonePickerControllerDelegateInternal, TKToneClassicsTableViewControllerDelegate, TKVibrationPickerViewControllerDelegate, TKVibrationPickerViewControllerDismissalDelegate, MPMediaPickerControllerDelegate>
{
    _Bool _showsStoreButtonInNavigationBar;
    _Bool _needsScrollPositionReset;
    _Bool _showsMedia;
    id <TKTonePickerViewControllerDelegate> _delegate;
    TKTonePickerController *_tonePickerController;
    UIImage *_checkmarkImage;
    TKTonePickerTableViewCellLayoutManager *_tableViewCellLayoutManager;
    UIBarButtonItem *_storeBarButtonItem;
    TKVibrationPickerViewController *_vibrationPickerViewController;
    id <TKTonePickerStyleProvider> _styleProvider;
    NSIndexPath *_selectedClassicAlertTonesIndexPath;
    NSIndexPath *_selectedClassicRingtonesIndexPath;
    UIView *_defaultSectionHeaderView;
    UIView *_mediaSectionHeaderView;
    NSMutableArray *_regularToneSectionHeaderViews;
    NSMutableArray *_mediaItems;
    MPMediaPickerController *_mediaPickerController;
    MPMusicPlayerController *_storedMusicPlayer;
}

@property(retain, nonatomic, setter=_setStoredMusicPlayer:) MPMusicPlayerController *_storedMusicPlayer; // @synthesize _storedMusicPlayer;
@property(retain, nonatomic, setter=_setMediaPickerController:) MPMediaPickerController *_mediaPickerController; // @synthesize _mediaPickerController;
@property(retain, nonatomic, setter=_setMediaItems:) NSMutableArray *_mediaItems; // @synthesize _mediaItems;
@property(nonatomic) _Bool showsMedia; // @synthesize showsMedia=_showsMedia;
@property(nonatomic, setter=_setNeedsScrollPositionReset:) _Bool _needsScrollPositionReset; // @synthesize _needsScrollPositionReset;
@property(retain, nonatomic, setter=_setRegularToneSectionHeaderViews:) NSMutableArray *_regularToneSectionHeaderViews; // @synthesize _regularToneSectionHeaderViews;
@property(retain, nonatomic, setter=_setMediaSectionHeaderView:) UIView *_mediaSectionHeaderView; // @synthesize _mediaSectionHeaderView;
@property(retain, nonatomic, setter=_setDefaultSectionHeaderView:) UIView *_defaultSectionHeaderView; // @synthesize _defaultSectionHeaderView;
@property(retain, nonatomic, setter=_setSelectedClassicRingtonesIndexPath:) NSIndexPath *_selectedClassicRingtonesIndexPath; // @synthesize _selectedClassicRingtonesIndexPath;
@property(retain, nonatomic, setter=_setSelectedClassicAlertTonesIndexPath:) NSIndexPath *_selectedClassicAlertTonesIndexPath; // @synthesize _selectedClassicAlertTonesIndexPath;
@property(retain, nonatomic, setter=_setStyleProvider:) id <TKTonePickerStyleProvider> _styleProvider; // @synthesize _styleProvider;
@property(retain, nonatomic, setter=_setVibrationPickerViewController:) TKVibrationPickerViewController *_vibrationPickerViewController; // @synthesize _vibrationPickerViewController;
@property(retain, nonatomic, setter=_setStoreBarButtonItem:) UIBarButtonItem *_storeBarButtonItem; // @synthesize _storeBarButtonItem;
@property(nonatomic, setter=_setShowsStoreButtonInNavigationBar:) _Bool _showsStoreButtonInNavigationBar; // @synthesize _showsStoreButtonInNavigationBar;
@property(retain, nonatomic, setter=_setTableViewCellLayoutManager:) TKTonePickerTableViewCellLayoutManager *_tableViewCellLayoutManager; // @synthesize _tableViewCellLayoutManager;
@property(retain, nonatomic, setter=_setCheckmarkImage:) UIImage *_checkmarkImage; // @synthesize _checkmarkImage;
@property(retain, nonatomic, setter=_setTonePickerController:) TKTonePickerController *_tonePickerController; // @synthesize _tonePickerController;
@property(nonatomic) id <TKTonePickerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)vibrationPickerViewControllerWasDismissed:(id)arg1;
- (void)vibrationPickerViewController:(id)arg1 selectedVibrationWithIdentifier:(id)arg2;
- (void)tonePickerControllerRequestsPresentingVibrationPicker:(id)arg1;
- (void)tonePickerControllerRequestsPresentingToneStore:(id)arg1;
- (void)tonePickerController:(id)arg1 requestsPresentingToneClassicsPickerForItem:(id)arg2;
- (void)tonePickerControllerDidStopPlaying:(id)arg1 withFadeOutDuration:(double)arg2;
- (void)tonePickerControllerRequestsPresentingMediaItemPicker:(id)arg1;
- (void)tonePickerController:(id)arg1 didSelectMediaItemAtIndex:(unsigned long long)arg2 selectionDidChange:(_Bool)arg3;
- (unsigned long long)tonePickerController:(id)arg1 indexOfMediaItemWithIdentifier:(id)arg2;
- (id)tonePickerController:(id)arg1 titleOfMediaItemAtIndex:(unsigned long long)arg2;
- (id)tonePickerController:(id)arg1 identifierOfMediaItemAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfMediaItemsInTonePickerController:(id)arg1;
- (void)tonePickerControllerRequestsMediaItemsRefresh:(id)arg1;
- (_Bool)tonePickerControllerShouldShowMedia:(id)arg1;
- (void)tonePickerController:(id)arg1 selectedMediaItemWithIdentifier:(id)arg2;
- (void)tonePickerController:(id)arg1 selectedToneWithIdentifier:(id)arg2;
- (void)tonePickerController:(id)arg1 didUpdateDetailText:(id)arg2 ofTonePickerItem:(id)arg3;
- (void)tonePickerController:(id)arg1 didUpdateCheckedStatus:(_Bool)arg2 ofTonePickerItem:(id)arg3;
- (void)tonePickerControllerDidReloadTones:(id)arg1;
- (void)toneClassicsTableView:(id)arg1 willDimissWithNewSelectedIndexPath:(id)arg2;
- (long long)preselectedIndexForToneClassicsTableView:(id)arg1;
- (id)toneIdentifiersForToneClassicsTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)mediaPicker:(id)arg1 didPickMediaItems:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)_playMediaItemWithIdentifier:(id)arg1;
- (void)_togglePlayMediaItemWithIdentifier:(id)arg1;
@property(readonly, nonatomic) MPMusicPlayerController *_musicPlayer;
- (void)_didSelectMediaItemWithIdentifier:(id)arg1;
- (id)_mediaItemForIdentifier:(id)arg1;
- (unsigned long long)_addMediaIdentifierToList:(id)arg1;
- (void)removeMediaItems:(id)arg1;
- (void)addMediaItems:(id)arg1;
@property(copy, nonatomic) NSNumber *selectedMediaIdentifier;
- (id)selectedIdentifier:(_Bool *)arg1;
@property(nonatomic, getter=isMediaAtTop) _Bool mediaAtTop;
- (void)_handleMediaLibraryDidChangeNotification;
- (void)_resetScrollingPosition;
- (void)_reloadData;
- (void)_configureTextColorOfLabelInCell:(id)arg1 checked:(_Bool)arg2;
- (void)_didSelectToneWithIdentifier:(id)arg1;
- (void)_goToStore;
- (void)_getTitle:(id *)arg1 customHeaderView:(id *)arg2 forHeaderInSection:(long long)arg3;
- (void)_pushClassicsToneTableViewController;
- (void)applicationWillSuspend;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)_updateStyleOfTableView:(id)arg1 forStyleProvider:(id)arg2;
@property(retain, nonatomic) id <TKTonePickerStyleProvider> styleProvider;
@property(copy, nonatomic) NSString *selectedVibrationIdentifier;
@property(nonatomic) _Bool showsVibrations;
- (void)_configureNavigationBarIfNeeded;
@property(nonatomic) _Bool showsStoreButtonInNavigationBar;
@property(copy, nonatomic) NSString *selectedToneIdentifier;
@property(nonatomic) _Bool showsNothingSelected;
@property(copy, nonatomic) NSString *noneString;
@property(nonatomic, getter=isNoneAtTop) _Bool noneAtTop;
@property(nonatomic) _Bool showsNone;
@property(copy, nonatomic) NSString *defaultToneIdentifier;
@property(nonatomic) _Bool showsDefault;
@property(copy, nonatomic) NSString *accountIdentifier;
@property(readonly, nonatomic) int alertType;
- (void)dealloc;
- (id)initWithAlertType:(int)arg1;
- (id)initWithStyle:(long long)arg1;

@end

