/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UINavigationController.h"

@class TKVibrationPickerViewController;

@interface ABVibrationPickerController : UINavigationController
{
    TKVibrationPickerViewController *_vibrationPicker;
}

@property(readonly, nonatomic) TKVibrationPickerViewController *vibrationPicker; // @synthesize vibrationPicker=_vibrationPicker;
- (void)cancelButton:(id)arg1;
- (void)doneButton:(id)arg1;
- (void)dealloc;
- (id)initWithAlertType:(int)arg1 selectedVibrationIdentifier:(id)arg2;

// Remaining properties
@property(nonatomic) id <ABPickerControllerDelegate> delegate;

@end

