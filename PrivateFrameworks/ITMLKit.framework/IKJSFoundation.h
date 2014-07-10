/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IKAppContext, NSMutableDictionary;

@interface IKJSFoundation : NSObject
{
    IKAppContext *_appContext;
    id _ownerObject;
    NSMutableDictionary *_jsTimers;
    NSMutableDictionary *_dateFormatterCache;
    id <IKAppDeviceConfig> _deviceConfig;
}

@property(nonatomic) __weak id <IKAppDeviceConfig> deviceConfig; // @synthesize deviceConfig=_deviceConfig;
@property(retain, nonatomic) NSMutableDictionary *dateFormatterCache; // @synthesize dateFormatterCache=_dateFormatterCache;
@property(retain, nonatomic) NSMutableDictionary *jsTimers; // @synthesize jsTimers=_jsTimers;
@property(nonatomic) __weak id ownerObject; // @synthesize ownerObject=_ownerObject;
@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
- (void).cxx_destruct;
- (id)_stringForKey:(id)arg1 fromDict:(id)arg2;
- (void)clearCookies;
- (void)setCookie:(id)arg1 useSSCookieStorage:(_Bool)arg2;
- (id)getCookieForURL:(id)arg1 useSSCookieStorage:(_Bool)arg2;
- (void)_jsTimerFired:(id)arg1;
- (void)_clearTimer:(id)arg1;
- (id)_startTimer:(id)arg1 time:(long long)arg2 repeating:(_Bool)arg3;
- (void)stopTimers;
- (void)clearTimeout:(id)arg1;
- (id)setTimeout:(id)arg1 time:(long long)arg2;
- (void)clearInterval:(id)arg1;
- (id)setInterval:(id)arg1 time:(long long)arg2;
- (id)initWithAppContext:(id)arg1 deviceConfig:(id)arg2 ownerObject:(id)arg3;

@end

