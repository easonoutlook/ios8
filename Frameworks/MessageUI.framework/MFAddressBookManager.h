/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MFAddressBookManager : NSObject
{
    void *_addressBook;
    int _lock;
    struct __CFDictionary *_clients;
}

+ (_Bool)isAuthorizedToUseAddressBook;
+ (id)sharedManager;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)_handleAddressBookPrefsChangeNotification;
- (void)_handleAddressBookChangeNotification;
- (id)_clientWeakReferences;
- (void)_applicationResumed:(id)arg1;
- (void *)addressBook;
- (void)dealloc;
- (id)init;

@end

