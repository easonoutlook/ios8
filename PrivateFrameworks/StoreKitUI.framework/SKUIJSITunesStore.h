/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "IKJSITunesStore.h"

#import <StoreKitUI/SKUIJSITunesStore-Protocol.h>

@interface SKUIJSITunesStore : IKJSITunesStore <SKUIJSITunesStore>
{
}

- (void)setPreviewOverlay:(id)arg1;
- (_Bool)resourceExists:(id)arg1;
- (void)log:(id)arg1;
- (void)download:(id)arg1;
- (void)approveInPerson:(id)arg1:(id)arg2;
- (void)buy:(id)arg1;
- (void)attemptLocalAskToBuyApproval:(id)arg1;
- (_Bool)sendOnXEventWithDictionary:(id)arg1;
- (void)sendOnPageResponseWithDocument:(id)arg1 data:(id)arg2 URLResponse:(id)arg3;

@end

