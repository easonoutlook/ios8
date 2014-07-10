/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface HSFairPlayInfo : NSObject
{
    NSObject<OS_dispatch_queue> *_sapQueue;
    void *_hwInfo;
}

- (void).cxx_destruct;
- (id)_hexStringForData:(id)arg1;
- (id)securityInfoForURL:(id)arg1;
- (void)endSecuritySession;
- (id)continueNegotationWithSAPVersion:(unsigned int)arg1 data:(id)arg2 isComplete:(_Bool *)arg3;
- (id)beginNegotiationWithSAPVersion:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *deviceGUID;
- (void)dealloc;
- (id)init;

@end

