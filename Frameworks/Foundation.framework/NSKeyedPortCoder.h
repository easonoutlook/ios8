/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSConcretePortCoder.h>

@class NSMutableArray, NSMutableDictionary;

// Not exported
@interface NSKeyedPortCoder : NSConcretePortCoder
{
    id sndPort;
    id rcvPort;
    NSMutableDictionary *root;
    NSMutableArray *containers;
    NSMutableArray *components;
    _Bool mainDataFinished;
    unsigned long long nextGenericIndex;
    unsigned long long nextOutOfLineGenericIndex;
    _Bool isBycopy;
    _Bool isByref;
    _Bool isValid;
    NSMutableArray *importedObjects;
}

- (void)decodeReturnValueOfInvocation:(id)arg1 forKey:(id)arg2;
- (void)encodeReturnValueOfInvocation:(id)arg1 forKey:(id)arg2;
- (id)decodeInvocation;
- (void)encodeInvocation:(id)arg1;
- (id)decodeObject;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void *)decodeBytesWithReturnedLength:(unsigned long long *)arg1;
- (id)decodePortObject;
- (id)decodeDataObject;
- (id)_decodeObjectNoKey;
- (void)encodeBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (void)encodeConditionalObject:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)encodeByrefObject:(id)arg1;
- (void)encodeBycopyObject:(id)arg1;
- (void)encodeValueOfObjCType:(const char *)arg1 at:(const void *)arg2;
- (void)encodePortObject:(id)arg1;
- (void)encodeDataObject:(id)arg1;
- (void)_encodeObjectNoKey:(id)arg1;
- (void)_setByref:(_Bool)arg1;
- (void)_setBycopy:(_Bool)arg1;
- (long long)versionForClassName:(id)arg1;
- (id)decodePortObjectForKey:(id)arg1;
- (id)decodeDataObjectForKey:(id)arg1;
- (id)_getOutOfLineObjectForKey:(id)arg1;
- (const char *)decodeBytesForKey:(id)arg1 returnedLength:(unsigned long long *)arg2;
- (long long)decodeIntegerForKey:(id)arg1;
- (double)decodeDoubleForKey:(id)arg1;
- (float)decodeFloatForKey:(id)arg1;
- (long long)decodeInt64ForKey:(id)arg1;
- (int)decodeInt32ForKey:(id)arg1;
- (int)decodeIntForKey:(id)arg1;
- (_Bool)decodeBoolForKey:(id)arg1;
- (id)_decodePropertyListForKey:(id)arg1;
- (id)decodeObjectForKey:(id)arg1;
- (id)_getObjectFromTopForKey:(id)arg1;
- (_Bool)containsValueForKey:(id)arg1;
- (void)encodePortObject:(id)arg1 forKey:(id)arg2;
- (void)encodeDataObject:(id)arg1 forKey:(id)arg2;
- (void)_addOutOfLineObject:(id)arg1 forKey:(id)arg2;
- (void)encodeBytes:(const char *)arg1 length:(unsigned long long)arg2 forKey:(id)arg3;
- (void)encodeInteger:(long long)arg1 forKey:(id)arg2;
- (void)encodeDouble:(double)arg1 forKey:(id)arg2;
- (void)encodeFloat:(float)arg1 forKey:(id)arg2;
- (void)encodeInt64:(long long)arg1 forKey:(id)arg2;
- (void)encodeInt32:(int)arg1 forKey:(id)arg2;
- (void)encodeInt:(int)arg1 forKey:(id)arg2;
- (void)encodeBool:(_Bool)arg1 forKey:(id)arg2;
- (void)encodeConditionalObject:(id)arg1 forKey:(id)arg2;
- (void)_encodePropertyList:(id)arg1 forKey:(id)arg2;
- (void)encodeObject:(id)arg1 forKey:(id)arg2;
- (void)_finishUpObject;
- (void)_prepareToEncodeObjectForKey:(id)arg1;
- (_Bool)allowsKeyedCoding;
- (void)_addObjectToTop:(id)arg1 forKey:(id)arg2;
- (id)_topContainer;
- (void)importObject:(id)arg1;
- (id)importedObjects;
- (_Bool)isByref;
- (_Bool)isBycopy;
- (id)_proxyForLocalObject:(id)arg1;
- (id)connection;
- (id)finishedComponents;
- (void)dispatch;
- (void)_buildMainData;
- (id)debugDescription;
- (void)invalidate;
- (void)dealloc;
- (id)initWithReceivePort:(id)arg1 sendPort:(id)arg2 components:(id)arg3;

@end

