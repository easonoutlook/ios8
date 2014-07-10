/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface RadioGetTracksResponse : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_tracksByStationKey;
    NSDate *_expirationDate;
    NSDictionary *_responseDictionary;
}

@property(readonly, copy, nonatomic) NSDictionary *responseDictionary; // @synthesize responseDictionary=_responseDictionary;
@property(retain, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
- (void).cxx_destruct;
- (id)_tracksForStationKey:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *unusedKBSyncStrings;
- (id)tracksForStationHash:(id)arg1;
- (id)tracksForStationID:(long long)arg1;
- (id)tracksForStation:(id)arg1;
@property(readonly, nonatomic) long long tracklistActionType;
@property(readonly, nonatomic) NSDate *skipDate;
@property(readonly, nonatomic) _Bool shouldIncrementSkipCount;
@property(readonly, nonatomic) unsigned long long globalVersion;
@property(readonly, copy, nonatomic) NSDictionary *dialogDictionary;
- (id)initWithResponseDictionary:(id)arg1;
- (id)init;

@end

