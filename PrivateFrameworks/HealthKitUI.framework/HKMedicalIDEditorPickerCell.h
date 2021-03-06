/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HealthKitUI/HKMedicalIDEditorCell.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"

@class NSArray, UIPickerView;

@interface HKMedicalIDEditorPickerCell : HKMedicalIDEditorCell <UIPickerViewDataSource, UIPickerViewDelegate>
{
    UIPickerView *_picker;
    long long _chosenValueIndex;
    NSArray *_possibleValues;
}

@property(retain, nonatomic) NSArray *possibleValues; // @synthesize possibleValues=_possibleValues;
@property(nonatomic) long long chosenValueIndex; // @synthesize chosenValueIndex=_chosenValueIndex;
- (void).cxx_destruct;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)commitEditing;
- (void)beginEditing;
- (void)_hidePicker;
- (void)_showPicker;
- (id)formattedValue;

@end

