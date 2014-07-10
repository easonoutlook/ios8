/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Preferences/PSSetupController.h>

#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSString, PSLanguageSelector;

@interface PSInternationalLanguageSetupController : PSSetupController <UIActionSheetDelegate, UIAlertViewDelegate>
{
    NSString *_languageToSet;
    _Bool _notOfficialLanguage;
    _Bool _useOfficialLanguages;
    PSLanguageSelector *_languageSelector;
}

@property(retain, nonatomic) PSLanguageSelector *languageSelector; // @synthesize languageSelector=_languageSelector;
- (void)changeLanguageWithIndex:(unsigned long long)arg1 tag:(unsigned long long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (_Bool)disablesAutomaticKeyboardDismissal;
- (void)setupController;
- (_Bool)useOfficialLanguages;
- (id)language:(id)arg1;
- (void)setLanguage:(id)arg1 specifier:(id)arg2;
- (void)setNotOfficialLanguage:(_Bool)arg1;
- (void)didFinishCommit;
- (void)updatePreferredLanguageList;
- (void)saveLanguage:(_Bool)arg1;
- (void)saveLanguageMoveToTop;
- (void)commit;
- (void)rotateView:(id)arg1 toOrientation:(long long)arg2;
- (void)showBlackViewWithLabel:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithOfficialLanguages;

@end

