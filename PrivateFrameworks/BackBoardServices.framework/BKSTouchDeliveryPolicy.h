/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSObject<OS_xpc_object>;

@interface BKSTouchDeliveryPolicy : NSObject <NSSecureCoding>
{
    long long _type;
    unsigned int _childContextId;
    unsigned int _hostContextId;
    NSArray *_policies;
    NSObject<OS_xpc_object> *_assertionEndpoint;
}

+ (_Bool)supportsSecureCoding;
+ (id)policyByCombiningPolicies:(id)arg1;
+ (id)policyRequiringSharingOfTouchesDeliveredToChildContextId:(unsigned int)arg1 withHostContextId:(unsigned int)arg2;
@property(retain, nonatomic) NSObject<OS_xpc_object> *assertionEndpoint; // @synthesize assertionEndpoint=_assertionEndpoint;
- (id)policyExcludingPolicy:(id)arg1;
- (id)policyIncludingPolicy:(id)arg1;
- (id)reducePolicyToObjectWithBlock:(id)arg1;
- (id)policyByMappingContainedPoliciesWithBlock:(id)arg1;
- (id)matchOverridePolicy:(id)arg1 orCombinedPolicy:(void)arg2;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;

@end

