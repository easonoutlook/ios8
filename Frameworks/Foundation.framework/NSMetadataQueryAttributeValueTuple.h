/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface NSMetadataQueryAttributeValueTuple : NSObject
{
    id _attr;
    id _value;
    unsigned long long _count;
    void *_reserved;
}

@property(readonly) unsigned long long count;
@property(readonly, retain) id value;
@property(readonly, copy) NSString *attribute;
- (void)dealloc;
- (id)_init:(id)arg1 attribute:(id)arg2 value:(id)arg3 count:(unsigned long long)arg4;

@end

