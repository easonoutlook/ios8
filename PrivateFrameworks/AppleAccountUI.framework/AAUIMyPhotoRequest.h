/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "AARequest.h"

@class ACAccount, SSAccount;

@interface AAUIMyPhotoRequest : AARequest
{
    ACAccount *_account;
    SSAccount *_iTunesAccount;
}

+ (Class)responseClass;
@property(retain, nonatomic, setter=setiTunesAccount:) SSAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;
- (id)initWithAccount:(id)arg1;

@end

