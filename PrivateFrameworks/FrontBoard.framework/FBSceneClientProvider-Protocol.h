/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol FBSceneClientProvider <NSObject>
- (void)endTransaction;
- (void)beginTransaction;
- (void)unregisterHost:(id)arg1;
- (id)registerHost:(id)arg1 withInitialClientSettings:(id)arg2;
- (void)registerInvalidationAction:(id)arg1;
@end

