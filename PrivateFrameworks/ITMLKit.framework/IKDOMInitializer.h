/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

@interface IKDOMInitializer : NSObject
{
    NSMutableDictionary *_nodeDeregisterObservers;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *nodeDeregisterObservers; // @synthesize nodeDeregisterObservers=_nodeDeregisterObservers;
- (void).cxx_destruct;
- (void)removeNodeDeregisterObserverWithName:(id)arg1;
- (void)addNodeDeregisterObserverWithName:(id)arg1 observer:(id)arg2;
- (id)init;

@end

