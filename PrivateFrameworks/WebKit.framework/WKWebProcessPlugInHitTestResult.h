/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <WebKit/WKObject-Protocol.h>

@class WKWebProcessPlugInNodeHandle;

@interface WKWebProcessPlugInHitTestResult : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundleHitTestResult> _hitTestResult;
}

- (id).cxx_construct;
@property(readonly) struct Object *_apiObject;
@property(readonly) WKWebProcessPlugInNodeHandle *nodeHandle;
- (void)dealloc;

@end

