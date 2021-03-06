/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebUI/WBSFormDataController.h>

#import "UIActionSheetDelegate-Protocol.h"

@interface WBUFormDataController : WBSFormDataController <UIActionSheetDelegate>
{
    _Bool _savePending;
}

+ (_Bool)_isDevicePasscodeSet;
+ (_Bool)_isKeychainSyncEnabled;
- (void)prepareMeCard;
- (void)textDidChangeInForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (void)didFillFormWithGeneratedPassword:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (_Bool)_updateCredentialsWithGeneratedPasswordForForm:(id)arg1 inWebView:(id)arg2 frame:(id)arg3;
- (_Bool)webView:(id)arg1 frame:(id)arg2 willNavigateFromForm:(id)arg3 bySubmitting:(_Bool)arg4 usernameIsAutoFilled:(_Bool)arg5 passwordIsAutoFilled:(_Bool)arg6 submissionHandler:(id)arg7;
- (_Bool)_webView:(id)arg1 willSubmitLoginFormWithMetadata:(id)arg2 fromFrame:(id)arg3 usernameIsAutoFilled:(_Bool)arg4 passwordIsAutoFilled:(_Bool)arg5 submissionHandler:(id)arg6;
- (_Bool)_webView:(id)arg1 saveCredentialsForURL:(id)arg2 formWithMetadata:(id)arg3 fromFrame:(id)arg4 username:(id)arg5 password:(id)arg6 usernameIsAutoFilled:(_Bool)arg7 passwordIsAutoFilled:(_Bool)arg8 submissionHandler:(id)arg9;
- (id)_relatedCredentialMatchesToUpdateForUser:(id)arg1 protectionSpace:(id)arg2 oldCredential:(id *)arg3 matchesForCurrentHost:(id *)arg4;
- (void)_showPasswordPromptForWebView:(id)arg1 formType:(unsigned long long)arg2 username:(id)arg3 isGeneratedPassword:(_Bool)arg4 host:(id)arg5 hasCredentialForCurrentHost:(_Bool)arg6 existingCredentialMatchesForCurrentHost:(id)arg7 otherSubdomainCredentialMatches:(id)arg8 completionHandler:(id)arg9;
- (_Bool)_webView:(id)arg1 willSubmitStandardFormWithMetadata:(id)arg2 fromFrame:(id)arg3 submissionHandler:(id)arg4;
- (_Bool)_webView:(id)arg1 formSubmission:(_Bool)arg2 willSubmitNewAccountOrChangePasswordFormWithMetadata:(id)arg3 fromFrame:(id)arg4 submissionHandler:(id)arg5;
- (_Bool)_webView:(id)arg1 saveUsernameAndGeneratedPasswordFromForm:(id)arg2 inFrame:(id)arg3 confirmOverwritingCurrentPassword:(_Bool)arg4 submissionHandler:(id)arg5;
- (_Bool)_webView:(id)arg1 saveUsernameAndGeneratedPasswordForURL:(id)arg2 fromForm:(id)arg3 inFrame:(id)arg4 username:(id)arg5 password:(id)arg6 confirmOverwritingCurrentPassword:(_Bool)arg7 submissionHandler:(id)arg8;
- (id)_credentialMatchesEligibleForUpdateForURL:(id)arg1 username:(id)arg2 oldPassword:(id)arg3;
- (_Bool)_webView:(id)arg1 willSubmitFormContainingCreditCardData:(id)arg2 fromFrame:(id)arg3 submissionHandler:(id)arg4;
- (void)_showCreditCardPromptForWebView:(id)arg1 completionHandler:(id)arg2;
- (void)saveUnsubmittedGeneratedPasswordInFrame:(id)arg1 form:(id)arg2 closingWebView:(_Bool)arg3;
- (void)clearAllFormCredentials;
- (void)gatherValuesForForm:(id)arg1 inFrame:(id)arg2 completionHandler:(id)arg3;
- (id)autoFillValuesForLoginForm:(id)arg1 inFrame:(id)arg2 potentialMatches:(id *)arg3;
- (void)_autoFillPreferencesDidChange;
- (void)_applicationWillEnterForeground:(id)arg1;
- (_Bool)mayFillCreditCardDataInFrame:(id)arg1;
- (_Bool)shouldAutoFillFromCreditCardDataInFrame:(id)arg1;
@property(nonatomic) _Bool shouldAutoFillFromAddressBook;
@property(nonatomic) _Bool shouldAutoFillFromCreditCardData;
@property(nonatomic) _Bool shouldAutoFillPasswords;
- (_Bool)shouldAutoFillFromPreviousData;
- (_Bool)_shouldSaveCreditCardDataInWebView:(id)arg1 frame:(id)arg2;
- (_Bool)_shouldSaveUsernamesAndPasswordsInWebView:(id)arg1;
- (_Bool)shouldAutoGeneratePasswordsInWebView:(id)arg1;
- (id)addressBookMatchesForProperty:(id)arg1 key:(id)arg2 label:(id)arg3;
- (id)_addressBookMatchesForProxyProperty:(id)arg1;
- (id)_meCard;
- (void)saveCompletionDBSoon;
- (id)completionDBPath;
- (void)dealloc;
- (id)init;

@end

