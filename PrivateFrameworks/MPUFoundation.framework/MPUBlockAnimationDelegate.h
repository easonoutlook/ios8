/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface MPUBlockAnimationDelegate : NSObject
{
    id _completionHandler;
}

@property(readonly, copy, nonatomic) id completionHandler; // @synthesize completionHandler=_completionHandler;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initWithCompletionHandler:(id)arg1;

@end

