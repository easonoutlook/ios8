/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TCEnumerationMap : NSObject
{
    struct __CFDictionary *m_valueToString;
    struct __CFDictionary *m_stringToValue;
    _Bool m_caseSensitive;
}

- (id)stringForValue:(int)arg1;
- (long long)valueForString:(id)arg1;
- (void)dealloc;
- (id)initWithStructs:(const struct TCEnumerationStruct *)arg1 count:(int)arg2 caseSensitive:(_Bool)arg3;
- (id)initWithStructs:(const struct TCEnumerationStruct *)arg1 count:(int)arg2;

@end

