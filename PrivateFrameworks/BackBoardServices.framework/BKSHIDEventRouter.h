/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSSet;

@interface BKSHIDEventRouter : NSObject <NSSecureCoding>
{
    long long _destination;
    NSSet *_hidEventDescriptors;
}

+ (_Bool)supportsSecureCoding;
+ (id)defaultFocusedAppEventRouter;
+ (id)defaultSystemAppEventRouter;
+ (id)defaultEventRouters;
+ (id)routerWithDestination:(long long)arg1;
@property(readonly) NSSet *hidEventDescriptors; // @synthesize hidEventDescriptors=_hidEventDescriptors;
@property(readonly) long long destination; // @synthesize destination=_destination;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)stringForDestination:(long long)arg1;
- (id)dumpContents;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)containsDescriptor:(id)arg1;
- (_Bool)specifiesDescriptor:(id)arg1;
- (void)removeHIDEventDescriptors:(id)arg1;
- (void)addHIDEventDescriptors:(id)arg1;
- (void)dealloc;
- (id)initWithDestination:(long long)arg1 hidEventDescriptors:(id)arg2;
- (id)initWithDestination:(long long)arg1;

@end

