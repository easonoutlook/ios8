/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SGMicrodataParserStackItem;

@interface SGMicrodataParser : NSObject
{
    SGMicrodataParserStackItem *_stackItem;
}

+ (id)parse:(id)arg1;
+ (id)whitespaceSplit:(id)arg1;
@property(readonly, nonatomic) SGMicrodataParserStackItem *stackItem; // @synthesize stackItem=_stackItem;
- (void).cxx_destruct;
- (void)textContent:(id)arg1;
- (void)endElement;
- (void)startElement:(id)arg1 withAttributes:(id)arg2;
- (id)initWithDocument:(id)arg1;

@end

