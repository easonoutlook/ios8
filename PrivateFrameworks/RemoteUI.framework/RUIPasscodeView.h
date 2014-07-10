/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <RemoteUI/RUIElement.h>

#import "RUIPasscodeFieldDelegate-Protocol.h"
#import "RUITableFooterDelegate-Protocol.h"

@class RUIObjectModel, RUIPasscodeField, UILabel, UIView;

@interface RUIPasscodeView : RUIElement <RUITableFooterDelegate, RUIPasscodeFieldDelegate>
{
    UIView *_view;
    UILabel *_label;
    UIView *_footer;
    RUIObjectModel *_objectModel;
    RUIPasscodeField *_passcodeField;
}

@property(readonly, nonatomic) RUIPasscodeField *passcodeField; // @synthesize passcodeField=_passcodeField;
@property(nonatomic) __weak RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
- (void).cxx_destruct;
- (void)submitPIN;
- (void)passcodeField:(id)arg1 enteredPasscode:(id)arg2;
- (void)footerView:(id)arg1 activatedLinkWithURL:(id)arg2;
- (void)viewDidLayout;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)populatePostbackDictionary:(id)arg1;
- (id)passcodeView;

@end

