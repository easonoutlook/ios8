/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSString;

@interface CKDSaveUserPrivacySettingsURLRequest : CKDURLRequest
{
    NSString *_bundleID;
    long long _discoverableTrinary;
}

@property(nonatomic) long long discoverableTrinary; // @synthesize discoverableTrinary=_discoverableTrinary;
@property(copy, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void).cxx_destruct;
- (void)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (long long)partitionType;
- (long long)serverType;
- (int)operationType;
- (void)setDiscoverable:(_Bool)arg1;

@end

