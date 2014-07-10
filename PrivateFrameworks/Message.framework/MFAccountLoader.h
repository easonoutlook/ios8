/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MFAccountLoader : NSObject
{
}

+ (id)_bundlePathForAccountClassString:(id)arg1;
+ (_Bool)loadBundleForAccountClassString:(id)arg1 error:(id *)arg2;
+ (Class)_accountClassForString:(id)arg1 error:(id *)arg2;
+ (id)_accountClassStringWithPersistentAccount:(id)arg1 error:(id *)arg2;
+ (Class)accountClassForPersistentAccount:(id)arg1 error:(id *)arg2;
+ (id)accountWithPersistentAccount:(id)arg1 error:(id *)arg2;
+ (id)accountWithAccountTypeIdentifier:(id)arg1 error:(id *)arg2;

@end

