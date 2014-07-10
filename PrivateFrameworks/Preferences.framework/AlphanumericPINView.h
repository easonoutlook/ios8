/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PINView.h>

#import "UITableViewDataSource-Protocol.h"

@class AlphanumericPINTableViewCell, UITableView, UITextField;

@interface AlphanumericPINView : PINView <UITableViewDataSource>
{
    UITextField *_passcodeField;
    AlphanumericPINTableViewCell *_cell;
    UITableView *_table;
}

- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)deleteLastCharacter;
- (void)appendString:(id)arg1;
- (void)setStringValue:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (_Bool)canBecomeFirstResponder;
- (_Bool)isFirstResponder;
- (void)hidePasscodeField:(_Bool)arg1;
- (void)okButtonPressed:(id)arg1;
- (id)stringValue;
- (void)dealloc;
- (void)showError:(id)arg1 animate:(_Bool)arg2;
- (_Bool)keyboardInputChanged:(id)arg1;
- (void)setBlocked:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

