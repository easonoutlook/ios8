/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSMutableDictionary, NSString;

@interface CNSocialProfile : NSObject <NSCopying, NSMutableCopying>
{
    NSMutableDictionary *_profileDictionary;
}

+ (id)socialProfileWithUrlString:(id)arg1 username:(id)arg2 userIdentifier:(id)arg3 service:(id)arg4 displayname:(id)arg5;
+ (id)socialProfileWithUrlString:(id)arg1 username:(id)arg2 service:(id)arg3;
+ (id)socialProfileWithUsername:(id)arg1 service:(id)arg2;
+ (id)socialProfileWithDictionary:(id)arg1;
+ (id)socialProfile;
- (id)description;
@property(readonly, copy) NSString *displayname;
@property(readonly, copy) NSString *service;
@property(readonly, copy) NSString *userIdentifier;
@property(readonly, copy) NSString *username;
@property(readonly, copy) NSString *urlString;
@property(retain) NSMutableDictionary *profileDictionary;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

