/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIControl.h>

@class UISegmentedControl, _UIDocumentPickerViewServiceViewController;

// Not exported
@interface _UIDocumentPickerSortOrderView : UIControl
{
    _UIDocumentPickerViewServiceViewController *_serviceViewController;
    UISegmentedControl *_sortOrder;
}

@property(retain, nonatomic) UISegmentedControl *sortOrder; // @synthesize sortOrder=_sortOrder;
@property(nonatomic) _UIDocumentPickerViewServiceViewController *serviceViewController; // @synthesize serviceViewController=_serviceViewController;
- (void)valueChanged:(id)arg1;
@property(nonatomic) int value;
- (id)initWithFrame:(struct CGRect)arg1;

@end

