/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BSDispatchSource, NSLock;

@interface BSPortDeathWatcher : NSObject
{
    NSLock *_lock;
    BSDispatchSource *_source;
    unsigned int _port;
}

@property(readonly, nonatomic) unsigned int port; // @synthesize port=_port;
- (void)invalidate;
- (_Bool)isWatchingValidPort;
- (id)initWithPort:(unsigned int)arg1 queue:(id)arg2 deathHandler:(id)arg3;
- (id)initWithPort:(unsigned int)arg1 deathHandler:(id)arg2;
- (void)dealloc;
- (id)init;

@end

