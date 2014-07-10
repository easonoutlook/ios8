/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CFNetwork/NSURLProtocol.h>

// Not exported
@interface _NSCFTranslatedFileURLProtocol : NSURLProtocol
{
    const struct CFURLProtocolInstanceCallbacks *_callbacks;
    struct CFURLProtocolClient _cfurlClient;
    const void *_info;
}

+ (_Bool)requestIsCacheEquivalent:(id)arg1 toRequest:(id)arg2;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (_Bool)canInitWithRequest:(id)arg1;
+ (const struct CFURLProtocolImplementation *)pimpl;
- (id).cxx_construct;
- (void)stopLoading;
- (void)startLoading;
- (struct CFURLProtocolClient *)cfurlClient;
- (void)dealloc;
- (id)initWithRequest:(id)arg1 cachedResponse:(id)arg2 client:(id)arg3;

@end

