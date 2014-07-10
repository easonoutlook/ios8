/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "SSXPCCoding-Protocol.h"

@class CLLocation, NSMutableDictionary, NSNumber, NSString;

@interface SSLookupProperties : NSObject <NSCopying, SSXPCCoding>
{
    CLLocation *_location;
    long long _localizationStyle;
    NSMutableDictionary *_requestParameters;
    NSNumber *_timeoutInterval;
}

@property(copy, nonatomic) NSNumber *timeoutInterval; // @synthesize timeoutInterval=_timeoutInterval;
@property(copy, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) long long localizationStyle; // @synthesize localizationStyle=_localizationStyle;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)valueForRequestParameter:(id)arg1;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
@property(copy, nonatomic) NSString *keyProfile;
- (id)copyRequestParameters;
- (void)dealloc;

@end

