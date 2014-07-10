/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKit/CKOperationInfo.h>

#import "NSSecureCoding-Protocol.h"

@class NSArray;

@interface CKFetchSharesOperationInfo : CKOperationInfo <NSSecureCoding>
{
    _Bool _isFetchAllSharesOperation;
    NSArray *_shareIDsToFetch;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isFetchAllSharesOperation; // @synthesize isFetchAllSharesOperation=_isFetchAllSharesOperation;
@property(retain, nonatomic) NSArray *shareIDsToFetch; // @synthesize shareIDsToFetch=_shareIDsToFetch;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

