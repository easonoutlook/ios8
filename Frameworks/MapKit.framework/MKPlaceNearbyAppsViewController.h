/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewController.h"

#import "MKPlaceViewNearbyAppsCellDelegate-Protocol.h"

@class NSArray;

// Not exported
@interface MKPlaceNearbyAppsViewController : UITableViewController <MKPlaceViewNearbyAppsCellDelegate>
{
    id <MKPlaceNearbyAppsViewControllerDelegate> _nearbyAppsDelegate;
    NSArray *_storeItems;
}

@property(retain, nonatomic) NSArray *storeItems; // @synthesize storeItems=_storeItems;
@property(nonatomic) __weak id <MKPlaceNearbyAppsViewControllerDelegate> nearbyAppsDelegate; // @synthesize nearbyAppsDelegate=_nearbyAppsDelegate;
- (void).cxx_destruct;
- (void)nearbyAppsCell:(id)arg1 showStorePageWithURL:(id)arg2 storeID:(id)arg3;
- (void)nearbyAppsCell:(id)arg1 openAppWithBundleID:(id)arg2 storeID:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)init;

@end

