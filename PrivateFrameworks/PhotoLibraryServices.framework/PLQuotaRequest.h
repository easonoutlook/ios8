/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "AARequest.h"

@class NSString;

@interface PLQuotaRequest : AARequest
{
    NSString *_authToken;
    NSString *_personID;
}

- (void)dealloc;
- (id)urlRequest;
- (id)initWithURLString:(id)arg1 authToken:(id)arg2 personID:(id)arg3;

@end

