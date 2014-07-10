/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, SBKProcessAssertion;

// Not exported
@interface SBKTaskAssertion : NSObject
{
    id _expireHandler;
    NSString *_debugInfo;
    SBKProcessAssertion *_processAssertion;
}

+ (id)newBackgroundTaskWithExpirationHandler:(id)arg1 debugInfo:(void)arg2;
- (void).cxx_destruct;
- (id)description;
- (void)invalidate;
- (void)performExpirationHandler;
- (void)dealloc;
- (id)initWithExpirationHandler:(id)arg1 debugInfo:(void)arg2;

@end

