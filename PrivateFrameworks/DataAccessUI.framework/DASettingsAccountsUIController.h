/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "ACUIViewController.h"

#import "DAValidityCheckConsumer-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class DAAccount;

@interface DASettingsAccountsUIController : ACUIViewController <DAValidityCheckConsumer, UIActionSheetDelegate, UIAlertViewDelegate>
{
    DAAccount *_account;
    _Bool _didSetFullHostURL;
    _Bool _needsSave;
    _Bool _attemptedValidation;
    _Bool _isSettingUpNewAccount;
    _Bool _accountNeedsAdd;
    _Bool _validatedSuccessfully;
    _Bool _confirmedUnvalidatedAccount;
    _Bool _haveRegisteredForAccountsChanged;
    _Bool _transitioningToFinishedAccountSetup;
}

@property(nonatomic) _Bool transitioningToFinishedAccountSetup; // @synthesize transitioningToFinishedAccountSetup=_transitioningToFinishedAccountSetup;
@property(nonatomic) _Bool haveRegisteredForAccountsChanged; // @synthesize haveRegisteredForAccountsChanged=_haveRegisteredForAccountsChanged;
@property(nonatomic) _Bool confirmedUnvalidatedAccount; // @synthesize confirmedUnvalidatedAccount=_confirmedUnvalidatedAccount;
@property(nonatomic) _Bool validatedSuccessfully; // @synthesize validatedSuccessfully=_validatedSuccessfully;
@property(nonatomic) _Bool accountNeedsAdd; // @synthesize accountNeedsAdd=_accountNeedsAdd;
@property(nonatomic) _Bool isSettingUpNewAccount; // @synthesize isSettingUpNewAccount=_isSettingUpNewAccount;
@property(retain, nonatomic) DAAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool attemptedValidation; // @synthesize attemptedValidation=_attemptedValidation;
@property(nonatomic) _Bool needsSave; // @synthesize needsSave=_needsSave;
@property(nonatomic) _Bool didSetFullHostURL; // @synthesize didSetFullHostURL=_didSetFullHostURL;
- (void).cxx_destruct;
- (void)deleteAccountButtonTapped;
- (id)localizedAccountTitleString;
- (id)localizedAccountSetupTitleString;
- (id)localizedConfirmSaveUnvalidatedAccountMessageString;
- (id)localizedConfirmSaveUnvalidatedAccountTitleString;
- (id)localizedValidationFailureTitleString;
- (id)lastGroupSpecifierInSpecifiers:(id)arg1;
- (id)currentlyEditingCell;
- (int)indexOfCurrentlyEditingCell;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (void)hideProgressWithPrompt:(id)arg1;
- (_Bool)isRunningFromMobileMailApp;
- (void)operationsHelper:(id)arg1 didSaveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)_saveAccountDismissWhenDone:(_Bool)arg1;
- (void)_finishSaveAccountDismissWhenDone:(_Bool)arg1;
- (void)operationsHelper:(id)arg1 didRemoveAccount:(id)arg2 withSuccess:(_Bool)arg3 error:(id)arg4;
- (void)_deleteAccount;
- (void)_dismissAndUpdateParent;
- (id)accountBooleanPropertyWithSpecifier:(id)arg1;
- (void)setAccountBooleanProperty:(id)arg1 withSpecifier:(id)arg2;
- (id)accountPropertyWithSpecifier:(id)arg1;
- (void)setAccountProperty:(id)arg1 withSpecifier:(id)arg2;
- (void)setHostString:(id)arg1;
- (id)_defaultAccountDescription;
- (void)propertyValueChanged:(id)arg1;
- (_Bool)haveEnoughValues;
- (_Bool)transitionsAfterInitialSetup;
- (_Bool)dismissesAfterInitialSetup;
- (void)updateDoneButton;
- (void)setNeedsSaveAndValidation:(_Bool)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)doneButtonTapped:(id)arg1;
- (void)finishedAccountSetup;
- (void)account:(id)arg1 isValid:(_Bool)arg2 validationError:(id)arg3;
- (void)_beginAccountValidation;
- (void)_confirmSaveUnvalidatedAccount;
- (void)didConfirmSaveUnvalidatedAccount:(_Bool)arg1;
- (void)didConfirmTryWithoutSSL:(_Bool)arg1;
- (void)showSSLFailureView;
- (void)showIdenticalAccountFailureView;
- (_Bool)validateAccount;
- (void)viewWillAppear:(_Bool)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)accountSpecifiers;
- (id)specifiers;
- (id)newDefaultAccount;
- (id)daAccountWithBackingAccountInfo:(id)arg1;
- (id)accountFromSpecifier;
- (void)reloadAccount;
- (void)_accountsChanged:(id)arg1;

@end

