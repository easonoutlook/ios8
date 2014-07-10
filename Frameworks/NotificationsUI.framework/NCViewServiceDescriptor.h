/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface NCViewServiceDescriptor : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_viewControllerClassName;
    NSString *_bundleIdentifier;
}

+ (_Bool)supportsSecureCoding;
+ (id)descriptorWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(readonly, copy, nonatomic) NSString *viewControllerClassName; // @synthesize viewControllerClassName=_viewControllerClassName;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isValid;
- (void)dealloc;
- (id)initWithViewControllerClassName:(id)arg1 bundleIdentifier:(id)arg2;

@end

