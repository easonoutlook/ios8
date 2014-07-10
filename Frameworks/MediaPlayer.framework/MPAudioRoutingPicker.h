/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIAlertView.h"

#import "MPAVRoutingControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MPAVRoutingController, NSArray;

@interface MPAudioRoutingPicker : UIAlertView <MPAVRoutingControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    MPAVRoutingController *_routingController;
    _Bool _ignoringInteractionEvents;
    NSArray *_routes;
}

- (void).cxx_destruct;
- (_Bool)_pickRouteAtIndex:(unsigned long long)arg1 withPassword:(id)arg2;
- (_Bool)requiresPortraitOrientation;
- (void)willMoveToSuperview:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)routingControllerAvailableRoutesDidChange:(id)arg1;
- (void)dealloc;
- (void)setAVPlayer:(id)arg1;
- (id)initWithAVPlayer:(id)arg1;

@end

