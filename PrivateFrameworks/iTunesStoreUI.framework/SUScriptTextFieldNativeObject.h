/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iTunesStoreUI/SUScriptNativeObject.h>

#import <iTunesStoreUI/SUScriptTextFieldDelegate-Protocol.h>

@class NSString, SUScriptTextFieldDelegate;

@interface SUScriptTextFieldNativeObject : SUScriptNativeObject <SUScriptTextFieldDelegate>
{
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

- (void)_setNativeObjectDelegate:(id)arg1;
- (void)_sendScriptDidChange;
- (id)_nativeObjectDelegate;
- (void)_textDidEndEditingOnExit:(id)arg1;
- (void)_textDidChange:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)setupNativeObject;
- (void)destroyNativeObject;
@property(nonatomic) double width;
@property(copy, nonatomic) NSString *value;
@property(copy, nonatomic) NSString *placeholder;
@property(nonatomic) long long keyboardType;
@property(nonatomic) long long autocorrectionType;
@property(nonatomic) long long autocapitalizationType;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)dealloc;

@end

