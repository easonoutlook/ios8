/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebCore/DOMHTMLElement.h>

@class NSString, NSURL;

@interface DOMHTMLAreaElement : DOMHTMLElement
{
}

@property(readonly, copy) NSURL *absoluteLinkURL;
@property(readonly, copy) NSString *search;
@property(readonly, copy) NSString *protocol;
@property(readonly, copy) NSString *port;
@property(readonly, copy) NSString *pathname;
@property(readonly, copy) NSString *hostname;
@property(readonly, copy) NSString *host;
@property(readonly, copy) NSString *hashName;
@property(copy) NSString *accessKey;
@property(copy) NSString *target;
@property(copy) NSString *shape;
- (void)setPing:(id)arg1;
- (id)ping;
@property _Bool noHref;
@property(copy) NSString *href;
@property(copy) NSString *coords;
@property(copy) NSString *alt;
- (id)absoluteQuadsWithOwner:(id)arg1;
- (id)boundingBoxesWithOwner:(id)arg1;
- (struct _WKQuad)absoluteQuadWithOwner:(id)arg1;
- (struct CGRect)boundingBoxWithOwner:(id)arg1;

@end

