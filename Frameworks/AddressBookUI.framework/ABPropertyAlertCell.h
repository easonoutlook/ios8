/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBookUI/ABPropertySimpleCell.h>

#import "ABPickerControllerDelegate-Protocol.h"

@class ABPropertyGroupAlertItem;

@interface ABPropertyAlertCell : ABPropertySimpleCell <ABPickerControllerDelegate>
{
}

+ (_Bool)wantsChevron;
- (void)pickerDidCancel:(id)arg1;
- (void)picker:(id)arg1 didPickItem:(id)arg2;
- (void)performDefaultAction;
- (_Bool)shouldPerformDefaultAction;
@property(readonly, nonatomic) ABPropertyGroupAlertItem *alertItem;

@end

