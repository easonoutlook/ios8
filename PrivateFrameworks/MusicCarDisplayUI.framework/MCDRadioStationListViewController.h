/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MusicCarDisplayUI/MCD_OLD_TableViewController.h>

@class NSArray, NSMutableDictionary;

@interface MCDRadioStationListViewController : MCD_OLD_TableViewController
{
    NSMutableDictionary *_stationArtworkRequests;
    NSArray *_stations;
}

@property(retain, nonatomic) NSArray *stations; // @synthesize stations=_stations;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)initWithQuery:(id)arg1 player:(id)arg2 serviceProvider:(id)arg3;

@end

