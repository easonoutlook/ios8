/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface _PFContextMapTable : NSObject
{
    unsigned long long _slotLimit;
    struct __CFDictionary *_objectsByTemporaryID;
    struct __CFDictionary **_objectsByPermanentObjectID;
    struct __CFDictionary **_objectsBy64bitPKID;
    unsigned long long *_capacitiesFor64bitPKMappings;
    struct _contextMapTableFlags {
        unsigned int _usesWeakReferences:1;
        unsigned int _garbageCollectionEnabled:1;
        unsigned int _reservedFlags:30;
    } _flags;
}

- (void)clearTemporaryIDs;
- (void)setCapacityHint:(unsigned long long)arg1 forSlot:(unsigned int)arg2;
- (unsigned long long)getAllObjects:(id *)arg1;
- (void)finalize;
- (void)dealloc;
- (void)_dispose;
- (void)setForUseWithModel:(id)arg1;
- (id)initWithWeaksReferences:(_Bool)arg1;

@end

