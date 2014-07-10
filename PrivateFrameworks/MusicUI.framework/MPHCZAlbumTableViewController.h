/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicUI/MusicAlbumsDetailViewController.h>

#import "MPTransportControlsTarget-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class MPTransportControls, MPUCoverZoomViewController, UIPinchGestureRecognizer, UIView;

@interface MPHCZAlbumTableViewController : MusicAlbumsDetailViewController <MPTransportControlsTarget, UIGestureRecognizerDelegate>
{
    MPUCoverZoomViewController *_coverZoomViewController;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    UIView *_tapView;
    MPTransportControls *_transportControlsView;
}

+ (Class)_albumsDetailTableHeaderViewClass;
+ (_Bool)_supportsSearch;
@property(nonatomic) __weak MPUCoverZoomViewController *coverZoomViewController; // @synthesize coverZoomViewController=_coverZoomViewController;
- (void).cxx_destruct;
- (void)_itemDidChangeNotification:(id)arg1;
- (void)_tapAction:(id)arg1;
- (void)_pinchAction:(id)arg1;
- (_Bool)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayFooterView:(id)arg2 forSection:(long long)arg3;
- (void)tableView:(id)arg1 willDisplayHeaderView:(id)arg2 forSection:(long long)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)_createTableViewBackgroundView;
- (id)_createTableView;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)dealloc;
- (id)initWithEntity:(id)arg1;

@end

