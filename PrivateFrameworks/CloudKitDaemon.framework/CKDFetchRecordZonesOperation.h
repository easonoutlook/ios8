/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray;

@interface CKDFetchRecordZonesOperation : CKDDatabaseOperation
{
    _Bool _isFetchAllRecordZonesOperation;
    _Bool _ignorePCSFailures;
    id _recordZoneFetchedProgressBlock;
    NSArray *_recordZoneIDs;
}

@property(nonatomic) _Bool ignorePCSFailures; // @synthesize ignorePCSFailures=_ignorePCSFailures;
@property(nonatomic) _Bool isFetchAllRecordZonesOperation; // @synthesize isFetchAllRecordZonesOperation=_isFetchAllRecordZonesOperation;
@property(retain, nonatomic) NSArray *recordZoneIDs; // @synthesize recordZoneIDs=_recordZoneIDs;
@property(copy, nonatomic) id recordZoneFetchedProgressBlock; // @synthesize recordZoneFetchedProgressBlock=_recordZoneFetchedProgressBlock;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)main;
- (void)_handleRecordZoneFetch:(id)arg1 zoneID:(id)arg2 responseCode:(id)arg3;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end
