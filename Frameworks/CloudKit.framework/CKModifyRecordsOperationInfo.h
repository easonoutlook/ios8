/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSDictionary;

@interface CKModifyRecordsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    _Bool _shouldOnlySaveAssetContent;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
    NSData *_clientChangeTokenData;
    long long _savePolicy;
    NSDictionary *_recordIDsToDeleteToEtags;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
@property(nonatomic) _Bool shouldOnlySaveAssetContent; // @synthesize shouldOnlySaveAssetContent=_shouldOnlySaveAssetContent;
@property(nonatomic) long long savePolicy; // @synthesize savePolicy=_savePolicy;
@property(retain, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property(retain, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(retain, nonatomic) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

