/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

// Not exported
@interface OIXMLNode : NSObject <NSCopying>
{
    unsigned int _kind;
    NSString *_name;
    id _value;
}

+ (void)_escapeCharacters:(const unsigned short *)arg1 amount:(unsigned int)arg2 escapeWhiteSpaces:(_Bool)arg3 inString:(id)arg4 appendingToString:(struct __CFString *)arg5;
+ (void)_escapeHTMLAttributeCharacters:(id)arg1 withQuote:(unsigned short)arg2 appendingToString:(struct __CFString *)arg3;
+ (id)elementWithName:(id)arg1 stringValue:(id)arg2;
+ (id)elementWithName:(id)arg1;
+ (id)attributeWithName:(id)arg1 stringValue:(id)arg2;
+ (id)textWithStringValue:(id)arg1;
- (void)_appendXMLStringToString:(struct __CFString *)arg1 level:(int)arg2;
- (id)closingTagString;
- (id)contentString;
- (id)openingTagString;
- (id)XMLString;
- (id)description;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (id)stringValue;
- (void)setStringValue:(id)arg1;
- (id)name;
- (void)setName:(id)arg1;
- (unsigned int)kind;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithKind:(unsigned int)arg1 name:(id)arg2 stringValue:(id)arg3;
- (id)initWithKind:(unsigned int)arg1;

@end

