/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "SSXPCCoding-Protocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface SSNetworkConstraints : NSObject <NSCoding, SSXPCCoding, NSCopying>
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSMutableDictionary *_sizeLimits;
}

+ (id)_newModernNetworkConstraintsWithArray:(id)arg1;
+ (id)_newLegacyNetworkConstraintsWithDictionary:(id)arg1;
+ (void)_addNetworkConstraintsToDictionary:(id)arg1 forNetworkType:(long long)arg2 legacyDictionary:(id)arg3;
+ (id)newNetworkConstraintsByDownloadKindFromURLBag:(id)arg1;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)_sizeLimitForNetworkType:(long long)arg1;
- (void)_setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2;
- (void)_disableAllNetworkTypes;
- (id)_copySizeLimits;
- (void)setSizeLimitsWithStoreConstraintDictionary:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (long long)sizeLimitForNetworkType:(long long)arg1;
- (void)setSizeLimit:(long long)arg1 forNetworkType:(long long)arg2;
- (void)setAllNetworkTypesDisabled;
@property(readonly, getter=isAnyNetworkTypeEnabled) _Bool anyNetworkTypeEnabled;
- (_Bool)hasSizeLimitForNetworkType:(long long)arg1;
- (void)disableCellularNetworkTypes;
- (void)dealloc;
- (id)init;

@end
