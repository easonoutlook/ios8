/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface AXSettingsObjectDestructionHelper : NSObject
{
    void *_listenerAddress;
    NSMutableArray *_selectorKeys;
}

- (void)dealloc;
- (void)addSelectorKey:(SEL)arg1;
- (id)initWithListenerAddress:(void *)arg1;

@end
