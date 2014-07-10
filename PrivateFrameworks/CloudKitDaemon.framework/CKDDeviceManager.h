/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface CKDDeviceManager : NSObject
{
    NSString *_deviceIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_requests;
    NSMutableDictionary *_callbackGroups;
    NSMutableDictionary *_deviceIDs;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *deviceIDs; // @synthesize deviceIDs=_deviceIDs;
@property(retain, nonatomic) NSMutableDictionary *callbackGroups; // @synthesize callbackGroups=_callbackGroups;
@property(retain, nonatomic) NSMutableDictionary *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void).cxx_destruct;
- (void)fetchDeviceIdentifierForContext:(id)arg1 withCompletionHandler:(id)arg2;
- (void)_saveDeviceIdentifier:(id)arg1 forContext:(id)arg2;
- (id)_savedDeviceIdentifierForContext:(id)arg1;
- (id)_lookupKeyForContext:(id)arg1;
- (id)_serviceForContext:(id)arg1;
- (id)init;

@end

