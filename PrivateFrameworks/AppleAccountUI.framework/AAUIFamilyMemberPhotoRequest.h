/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "AAFamilyRequest.h"

@class NSNumber, SSAccount;

@interface AAUIFamilyMemberPhotoRequest : AAFamilyRequest
{
    NSNumber *_familyMemberDSID;
    SSAccount *_iTunesAccount;
}

+ (Class)responseClass;
@property(retain, nonatomic, setter=setiTunesAccount:) SSAccount *iTunesAccount; // @synthesize iTunesAccount=_iTunesAccount;
@property(copy, nonatomic) NSNumber *familyMemberDSID; // @synthesize familyMemberDSID=_familyMemberDSID;
- (void).cxx_destruct;
- (id)urlRequest;
- (id)urlString;

@end

