/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSArray;

@interface CKDBatchGetUserPrivacySettingsURLRequest : CKDURLRequest
{
    NSArray *_containerPrivacySettings;
}

@property(retain, nonatomic) NSArray *containerPrivacySettings; // @synthesize containerPrivacySettings=_containerPrivacySettings;
- (void).cxx_destruct;
- (void)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperations;
- (id)requestOperationClasses;
- (_Bool)requiresTokenRegistration;
- (long long)partitionType;
- (long long)serverType;
- (int)operationType;

@end

