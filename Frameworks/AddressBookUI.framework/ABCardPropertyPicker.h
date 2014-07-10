/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "ABStyleProviding-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, UITableView;

@interface ABCardPropertyPicker : UIView <UITableViewDataSource, UITableViewDelegate, ABStyleProviding>
{
    UITableView *_tableView;
    NSArray *_allProperties;
    NSArray *_policies;
    id _delegate;
}

@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)styleProvider;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)deselectAllRowsWithAnimation:(_Bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setProperties:(struct __CFArray *)arg1;
- (_Bool)propertyIsAllowed:(int)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 policies:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
