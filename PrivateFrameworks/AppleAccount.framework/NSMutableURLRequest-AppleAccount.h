/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSMutableURLRequest.h"

@interface NSMutableURLRequest (AppleAccount)
- (void)aa_addDeviceProvisioningInfoHeadersWithDSID:(id)arg1;
- (void)aa_addDeviceProvisioningInfoHeadersWithAccount:(id)arg1;
- (void)aa_addiTunesHeadersWithAccount:(id)arg1;
- (_Bool)aa_addGrandSlamAuthorizationHeaderWithAccount:(id)arg1 grandslamToken:(id)arg2;
- (void)aa_setBodyWithParameters:(id)arg1;
- (void)aa_addBasicAuthorizationHeaderWithAccount:(id)arg1 preferUsingPassword:(_Bool)arg2;
@end

