/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import "CPLAbstractObject-Protocol.h"

@class CPLPlatformObject;

@interface CPLEngineClientCache : CPLEngineStorage <CPLAbstractObject>
{
}

- (id)resourceOfType:(unsigned long long)arg1 forRecordWithIdentifier:(id)arg2 error:(id *)arg3;
- (_Bool)applyBatch:(id)arg1 withError:(id *)arg2;
- (id)localChangeBatchFromCloudBatch:(id)arg1 usingMapping:(id)arg2 withError:(id *)arg3;
- (id)compactedBatchFromExpandedBatch:(id)arg1;
- (_Bool)resetWithError:(id *)arg1;
- (id)recordsWithRelatedIdentifier:(id)arg1;
- (id)relatedIdentifierForRecordWithIdentifier:(id)arg1;
- (id)_relatedIdentifierForRecordWithIdentifier:(id)arg1;
- (id)recordWithIdentifier:(id)arg1;
- (_Bool)deleteRecordWithIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)updateRecord:(id)arg1 error:(id *)arg2;
- (_Bool)addRecord:(id)arg1 error:(id *)arg2;

// Remaining properties
@property(readonly, nonatomic) CPLPlatformObject *platformObject;

@end

