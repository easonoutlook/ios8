/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface UIKeyboardPreferencesController : NSObject
{
}

+ (void)handleSpecificHardwareKeyboard;
+ (id)sharedPreferencesController;
- (_Bool)spaceConfirmationEnabled;
- (double)rivenSizeFactor:(double)arg1;
- (_Bool)costlyCapture;
- (_Bool)typologyEnabled;
- (void)setLanguageAwareInputModeLastUsed:(id)arg1;
- (void)saveInputModes:(id)arg1;
- (void)setValue:(id)arg1 forKey:(int)arg2;
- (void)touchSynchronizePreferencesTimer;
- (void)synchronizePreferences;
- (void)releaseDontSynchronizePreferences;
- (_Bool)boolForKey:(int)arg1;
- (id)valueForKey:(int)arg1;
- (void)preferencesControllerChanged:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setInputModeLastUsed:(id)arg1;

@end

