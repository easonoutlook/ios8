/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudDocsDaemon/BRCVersion.h>

#import "BRCSyncThrottleVersionProtocol-Protocol.h"

@class CKRecord, NSError, NSNumber;

// Not exported
@interface BRCLocalVersion : BRCVersion <BRCSyncThrottleVersionProtocol>
{
    CKRecord *_uploadedAssets;
    NSError *_uploadError;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSError *uploadError; // @synthesize uploadError=_uploadError;
@property(retain, nonatomic) CKRecord *uploadedAssets; // @synthesize uploadedAssets=_uploadedAssets;
- (void).cxx_destruct;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)removeConflictLoserEtag:(id)arg1;
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1 xattrSig:(id)arg2;
- (void)updateFromFSAtPath:(id)arg1 xattrSig:(id)arg2;
- (void)clearVersionSignatures:(unsigned long long)arg1 isPackage:(_Bool)arg2;
- (_Bool)isMissingUploadsWithDiffs:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalVersion:(id)arg1;
- (id)initWithServerVersion:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (unsigned long long)diffAgainstLocalVersion:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2 container:(id)arg3;
- (id)descriptionWithContext:(id)arg1;
@property(readonly, nonatomic) NSNumber *sizeObj;
@property(readonly, nonatomic) NSNumber *isPackageObj;

@end

