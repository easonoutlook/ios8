/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface ACDKeychain : NSObject
{
}

+ (void)removeItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 error:(id *)arg4;
+ (void)addItemWithServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 passwordData:(id)arg4 options:(id)arg5 error:(id *)arg6;
+ (void)updateItemForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 newValues:(id)arg4 error:(id *)arg5;
+ (id)passwordForServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 error:(id *)arg4;
+ (_Bool)canAccessPasswordsWithPolicy:(id)arg1;
+ (id)_missingKeychainItemSpecifierForService:(id)arg1 username:(id)arg2;
+ (id)_knownMissingKeychainItems;

@end

