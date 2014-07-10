/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol FBWindowContextManagerObserver <NSObject>

@optional
- (void)windowContextManager:(id)arg1 didRepositionContext:(id)arg2 from:(unsigned long long)arg3 to:(unsigned long long)arg4;
- (void)windowContextManagerDidStopTrackingContexts:(id)arg1;
- (void)windowContextManagerWillStartTrackingContexts:(id)arg1;
@end

