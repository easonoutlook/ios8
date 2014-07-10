/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CTCarrier, NSDictionary, NSLock, NSString;

@interface CTTelephonyNetworkInfo : NSObject
{
    struct queue _queue;
    struct __CTServerConnection *server_connection;
    NSLock *server_lock;
    id _subscriberCellularProviderDidUpdateNotifier;
    _Bool _monitoringCellId;
    CTCarrier *_subscriberCellularProvider;
    NSString *_cachedCurrentRadioAccessTechnology;
    NSDictionary *_cachedSignalStrength;
    NSString *_cachedCellId;
}

@property _Bool monitoringCellId; // @synthesize monitoringCellId=_monitoringCellId;
@property(retain) NSString *cachedCellId; // @synthesize cachedCellId=_cachedCellId;
@property(retain) NSDictionary *cachedSignalStrength; // @synthesize cachedSignalStrength=_cachedSignalStrength;
@property(retain) NSString *cachedCurrentRadioAccessTechnology; // @synthesize cachedCurrentRadioAccessTechnology=_cachedCurrentRadioAccessTechnology;
@property(retain) CTCarrier *subscriberCellularProvider; // @synthesize subscriberCellularProvider=_subscriberCellularProvider;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)radioAccessTechnology;
@property(retain, nonatomic) NSString *cellId;
- (id)signalStrength;
@property(readonly, retain, nonatomic) NSString *currentRadioAccessTechnology;
- (void)queryCellId;
- (void)updateRadioAccessTechnology:(id)arg1;
- (void)queryDataMode;
- (void)queryCTSignalStrengthNotification;
- (void)updateSignalStrength:(id)arg1;
- (void)handleCTRegistrationCellChangedNotification:(id)arg1;
- (void)handleCTSignalStrengthNotification:(id)arg1;
- (id)createSignalStrengthDictWithBars:(id)arg1;
- (void)postCellularProviderUpdatesIfNecessary;
- (void)handleNotificationFromConnection:(void *)arg1 ofType:(id)arg2 withInfo:(id)arg3;
- (_Bool)updateNetworkInfoAndShouldNotifyClient:(_Bool *)arg1;
- (_Bool)getAllowsVOIP:(_Bool *)arg1 withCTError:(CDStruct_1ef3fb1f *)arg2;
- (_Bool)getMobileNetworkCode:(id)arg1 withCTError:(CDStruct_1ef3fb1f *)arg2;
- (_Bool)getMobileCountryCode:(id)arg1 andIsoCountryCode:(id)arg2 withCTError:(CDStruct_1ef3fb1f *)arg3;
- (_Bool)getCarrierName:(id)arg1 withCTError:(CDStruct_1ef3fb1f *)arg2;
@property(copy, nonatomic) id subscriberCellularProviderDidUpdateNotifier;
- (void)dealloc;
- (id)init;
- (void)cleanUpServerConnection;
- (_Bool)setUpServerConnection;

@end

