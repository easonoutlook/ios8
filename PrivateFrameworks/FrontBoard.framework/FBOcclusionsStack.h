/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCountedSet, NSMutableArray, NSMutableDictionary, NSMutableSet;

@interface FBOcclusionsStack : NSObject
{
    NSCountedSet *_levels;
    NSMutableDictionary *_levelToCompositeOcclusions;
    NSMutableDictionary *_keyToEntry;
    NSMutableArray *_orderedEntries;
    NSMutableSet *_dirtyKeys;
}

- (void)_adjustEntry:(id)arg1 forLevel:(double)arg2 occlusions:(id)arg3;
- (id)occlusionsAppliedToKey:(id)arg1;
- (id)dirtyKeys;
- (_Bool)isDirty;
- (void)enumerateKeysByLevelWithBlock:(id)arg1;
- (void)removeKey:(id)arg1;
- (void)setKey:(id)arg1 toLevel:(double)arg2 withOcclusions:(id)arg3;
- (_Bool)isEmpty;
- (void)dealloc;
- (id)init;

@end

