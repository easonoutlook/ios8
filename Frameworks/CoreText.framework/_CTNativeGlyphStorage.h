/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreText/_CTGlyphStorage.h>

// Not exported
@interface _CTNativeGlyphStorage : _CTGlyphStorage
{
    const long long *_attachCounts;
    unsigned long long _retainCount;
    struct GlyphStack *_stack;
    long long _capacity;
    void *_preallocatedStorage;
}

+ (id)newWithCount:(long long)arg1;
- (void)setCapacity:(long long)arg1;
- (void)popGlyphAtIndex:(long long)arg1;
- (void)pushGlyphAtIndex:(long long)arg1;
- (void)initGlyphStackWithCapacity:(long long)arg1;
- (void)moveGlyphsFromRange:(CDStruct_912cb5d2)arg1 toIndex:(long long)arg2;
- (void)swapGlyphsAtIndex:(long long)arg1 withIndex:(long long)arg2;
- (void)insertGlyphsAtRange:(CDStruct_912cb5d2)arg1;
- (void)puntStringIndicesInRange:(CDStruct_912cb5d2)arg1 by:(long long)arg2;
- (void)setStringIndex:(long long)arg1 atIndex:(long long)arg2;
- (void)setAdvance:(struct CGSize)arg1 atIndex:(long long)arg2;
- (void)setGlyph:(unsigned short)arg1 atIndex:(long long)arg2;
- (void)setProps:(unsigned int)arg1 atIndex:(long long)arg2;
- (void)setAttachmentCount:(long long)arg1 atIndex:(long long)arg2;
- (long long)attachmentCountAtIndex:(long long)arg1;
- (const long long *)stringIndices;
- (void)finalize;
- (void)dealloc;
- (unsigned long long)retainCount;
- (oneway void)release;
- (id)retain;
- (_Bool)_isDeallocating;
- (_Bool)_tryRetain;
- (id)copyWithRange:(CDStruct_912cb5d2)arg1;
- (id)initWithCount:(long long)arg1;
- (void)prepareWithCapacity:(long long)arg1 preallocated:(_Bool)arg2;

@end

