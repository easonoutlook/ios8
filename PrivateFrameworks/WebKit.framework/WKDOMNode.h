/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, WKDOMDocument;

@interface WKDOMNode : NSObject
{
    struct RefPtr<WebCore::Node> _impl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly) NSArray *textRects;
@property(readonly) WKDOMNode *nextSibling;
@property(readonly) WKDOMNode *previousSibling;
@property(readonly) WKDOMNode *lastChild;
@property(readonly) WKDOMNode *firstChild;
@property(readonly) WKDOMNode *parentNode;
@property(readonly) WKDOMDocument *document;
- (void)removeChild:(id)arg1;
- (void)appendChild:(id)arg1;
- (void)insertNode:(id)arg1 before:(id)arg2;
- (void)dealloc;
- (id)_initWithImpl:(struct Node *)arg1;
- (struct OpaqueWKBundleNodeHandle *)_copyBundleNodeHandleRef;

@end

