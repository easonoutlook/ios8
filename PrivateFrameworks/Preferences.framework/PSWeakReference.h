/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@interface PSWeakReference : NSObject <NSCopying>
{
    id _location;
}

+ (id)weakReferenceWithObject:(id)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)object;
- (id)initWithObject:(id)arg1;

@end

