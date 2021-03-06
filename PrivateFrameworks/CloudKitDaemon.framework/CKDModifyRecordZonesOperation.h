/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CKDModifyRecordZonesOperation : CKDDatabaseOperation
{
    _Bool _allowDefaultZoneSave;
    int _numZoneSaveAttempts;
    id _saveCompletionBlock;
    id _deleteCompletionBlock;
    NSMutableArray *_recordZonesToSave;
    NSArray *_recordZoneIDsToDelete;
    NSMutableDictionary *_recordZonesByZoneID;
    NSMutableDictionary *_pcsOplockFailureCountByZoneID;
}

@property(nonatomic) int numZoneSaveAttempts; // @synthesize numZoneSaveAttempts=_numZoneSaveAttempts;
@property(nonatomic) _Bool allowDefaultZoneSave; // @synthesize allowDefaultZoneSave=_allowDefaultZoneSave;
@property(retain, nonatomic) NSMutableDictionary *pcsOplockFailureCountByZoneID; // @synthesize pcsOplockFailureCountByZoneID=_pcsOplockFailureCountByZoneID;
@property(retain, nonatomic) NSMutableDictionary *recordZonesByZoneID; // @synthesize recordZonesByZoneID=_recordZonesByZoneID;
@property(retain, nonatomic) NSArray *recordZoneIDsToDelete; // @synthesize recordZoneIDsToDelete=_recordZoneIDsToDelete;
@property(retain, nonatomic) NSMutableArray *recordZonesToSave; // @synthesize recordZonesToSave=_recordZonesToSave;
@property(copy, nonatomic) id deleteCompletionBlock; // @synthesize deleteCompletionBlock=_deleteCompletionBlock;
@property(copy, nonatomic) id saveCompletionBlock; // @synthesize saveCompletionBlock=_saveCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)main;
- (void)_checkAndPrepareZones;
- (void)_fetchPCSDataForZonesFromServer:(_Bool)arg1;
- (void)_fetchPCSDataForZone:(id)arg1 fromServer:(_Bool)arg2;
- (void)_saveZonesToServer;
- (void)_handleRecordZoneDeleted:(id)arg1 responseCode:(id)arg2;
- (void)_handleRecordZoneSaved:(id)arg1 responseCode:(id)arg2;
- (_Bool)makeStateTransition;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

