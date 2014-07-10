/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <WebKit/WKObject-Protocol.h>

@class NSArray, NSURL, _WKFrameHandle;

@interface WKWebProcessPlugInFrame : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::WebFrame> _frame;
}

+ (id)lookUpFrameFromHandle:(id)arg1;
- (id).cxx_construct;
@property(readonly) struct Object *_apiObject;
- (id)_provisionalURL;
- (id)_certificateChain;
- (_Bool)_hasCustomContentProvider;
@property(readonly, nonatomic) _WKFrameHandle *handle;
@property(readonly, nonatomic) _Bool containsAnyFormElements;
@property(readonly, nonatomic) NSArray *childFrames;
@property(readonly, nonatomic) NSURL *URL;
- (id)_browserContextController;
- (id)jsNodeForNodeHandle:(id)arg1 inWorld:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1;
- (id)jsContextForWorld:(id)arg1;
- (void)dealloc;

@end

