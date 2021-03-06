/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface SGRe2 : NSObject
{
    const char *_patternString;
    struct RE2 *_pattern;
}

+ (id)convertPerlStyleLiteralToRegexpString:(id)arg1;
- (id)description;
- (void)enumerateMatchesInString:(id)arg1 ngroups:(unsigned long long)arg2 block:(id)arg3;
- (void)enumerateMatchesInUtf8:(const char *)arg1 fromString:(id)arg2 ngroups:(unsigned long long)arg3 block:(id)arg4;
- (_Bool)existsInString:(id)arg1;
- (_Bool)existsInUtf8:(const char *)arg1;
- (void)dealloc;
- (id)initWithRegexp:(id)arg1;

@end

