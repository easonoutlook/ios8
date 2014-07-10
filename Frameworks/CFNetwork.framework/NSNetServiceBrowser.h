/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface NSNetServiceBrowser : NSObject
{
    id _netServiceBrowser;
    id _delegate;
    void *_reserved;
    _Bool _includesPeerToPeer;
}

@property _Bool includesPeerToPeer; // @synthesize includesPeerToPeer=_includesPeerToPeer;
- (void)finalize;
- (void)dealloc;
- (void)_dispatchCallBack:(void *)arg1 flags:(unsigned long long)arg2 error:(CDStruct_87dc826d)arg3;
- (struct __CFNetServiceBrowser *)_internalNetServiceBrowser;
- (void)stop;
- (void)searchForServicesOfType:(id)arg1 inDomain:(id)arg2;
- (void)_setIncludesAWDL:(_Bool)arg1;
- (_Bool)_includesAWDL;
- (void)searchForRegistrationDomains;
- (void)searchForBrowsableDomains;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
@property id <NSNetServiceBrowserDelegate> delegate;
- (id)init;
- (void)searchForAllDomains;

@end

