/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, WKWebView;

@interface WKScriptMessage : NSObject
{
    struct RetainPtr<id> _body;
    struct WeakObjCPtr<WKWebView> _webView;
    struct RetainPtr<NSString> _name;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) __weak WKWebView *webView;
@property(readonly, nonatomic) id body;
- (id)_initWithBody:(id)arg1 webView:(id)arg2 name:(id)arg3;

@end

