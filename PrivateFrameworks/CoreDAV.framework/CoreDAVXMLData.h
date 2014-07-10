/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData;

@interface CoreDAVXMLData : NSObject
{
    _Bool _shouldAddFormattingSpaces;
    struct _xmlTextWriter *_writer;
    struct _xmlDoc *_doc;
    _Bool _docHasEnded;
    struct __CFDictionary *_seenURIsToPrefixes;
    struct __CFDictionary *_seenURIsToDepth;
    struct __CFArray *_elementStack;
}

+ (_Bool)string:(id)arg1 isEqualToXmlCharString:(const char *)arg2;
@property(nonatomic) _Bool shouldAddFormattingSpaces; // @synthesize shouldAddFormattingSpaces=_shouldAddFormattingSpaces;
@property(readonly, nonatomic) NSData *data;
- (void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContentAsCDATA:(id)arg3 withAttributeNamesAndValues:(id)arg4;
- (void)appendElement:(id)arg1 inNamespace:(id)arg2 withStringContent:(id)arg3 withAttributeNamesAndValues:(id)arg4;
- (void)endElement:(id)arg1 inNamespace:(id)arg2;
- (void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributes:(id)arg3;
- (void)startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3;
- (void)_startElement:(id)arg1 inNamespace:(id)arg2 withAttributeNamesAndValues:(id)arg3 attributes:(struct __va_list_tag [1])arg4;
- (void)_startElement:(id)arg1 inNamespace:(id)arg2;
- (const char *)_prefixForNameSpace:(const char *)arg1;
- (void)dealloc;
- (id)init;

@end

