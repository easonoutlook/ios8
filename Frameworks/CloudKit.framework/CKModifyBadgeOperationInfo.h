/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKit/CKDatabaseOperationInfo.h>

#import "NSSecureCoding-Protocol.h"

@interface CKModifyBadgeOperationInfo : CKDatabaseOperationInfo <NSSecureCoding>
{
    _Bool _thisDeviceOnly;
    unsigned long long _badgeValue;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool thisDeviceOnly; // @synthesize thisDeviceOnly=_thisDeviceOnly;
@property(nonatomic) unsigned long long badgeValue; // @synthesize badgeValue=_badgeValue;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

