/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IMFoundation/IMMessageItem.h>

#import "IMRemoteObjectCoding-Protocol.h"
#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface FZMessage : IMMessageItem <NSCoding, NSCopying, IMRemoteObjectCoding>
{
}

- (id)initWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

