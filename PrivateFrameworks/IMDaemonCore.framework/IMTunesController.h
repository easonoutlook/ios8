/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSString;

@interface IMTunesController : NSObject
{
    NSDate *_lastChange;
    NSDictionary *_lastInfo;
    NSMutableDictionary *_playerInfo;
    NSMutableArray *_listeners;
    NSString *_messageFormat;
}

+ (id)sharedTunesController;
@property(readonly, nonatomic) NSDictionary *playerInfo; // @synthesize playerInfo=_playerInfo;
@property(readonly, nonatomic) NSString *messageFormat;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)_playerChangedNotification:(id)arg1;
- (void)_playerChanged:(id)arg1;
- (void)_updateMessage;
@property(readonly, nonatomic) _Bool isEnabled;
- (void)dealloc;
- (id)init;

@end

