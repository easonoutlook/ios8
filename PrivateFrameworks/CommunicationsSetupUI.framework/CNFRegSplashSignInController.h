/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CommunicationsSetupUI/CNFRegSignInController.h>

@class CNFRegSigninLearnMoreView;

@interface CNFRegSplashSignInController : CNFRegSignInController
{
    CNFRegSigninLearnMoreView *_signInView;
}

- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)_existingLearnMoreViewForSection:(long long)arg1;
- (id)_existingLearnMoreViewForSpecifier:(id)arg1;
- (void)_setFieldsEnabled:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)passwordIsEmpty;
- (void)setPasswordText:(id)arg1;
- (id)passwordTextField;
- (_Bool)usernameIsEmpty;
- (void)setUsernameText:(id)arg1;
- (id)usernameTextField;
- (void)viewDidLoad;
- (id)specifierList;
- (void)viewWillAppear:(_Bool)arg1;

@end

