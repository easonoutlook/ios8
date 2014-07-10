/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class CKQuery, CKQueryCursor, CKRecordZoneID, NSSet;

@interface CKDQueryOperation : CKDDatabaseOperation
{
    _Bool _shouldFetchAssetContent;
    CKQuery *_query;
    CKQueryCursor *_cursor;
    unsigned long long _resultsLimit;
    CKQueryCursor *_resultsCursor;
    id _recordFetchedBlock;
    NSSet *_desiredKeySet;
    CKRecordZoneID *_zoneID;
}

@property(retain, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;
@property(nonatomic) _Bool shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property(retain, nonatomic) NSSet *desiredKeySet; // @synthesize desiredKeySet=_desiredKeySet;
@property(copy, nonatomic) id recordFetchedBlock; // @synthesize recordFetchedBlock=_recordFetchedBlock;
@property(retain, nonatomic) CKQueryCursor *resultsCursor; // @synthesize resultsCursor=_resultsCursor;
@property(readonly, nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(readonly, nonatomic) CKQueryCursor *cursor; // @synthesize cursor=_cursor;
@property(readonly, nonatomic) CKQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (void)fillOutOperationResult:(id)arg1;
- (Class)operationResultClass;
- (void)finishWithError:(id)arg1;
- (void)main;
- (void)_handleQueryRequestFinished:(id)arg1;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

