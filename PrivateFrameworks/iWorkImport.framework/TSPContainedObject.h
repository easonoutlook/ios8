/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSPObject;

// Not exported
@interface TSPContainedObject : NSObject
{
    TSPObject *_owner;
}

@property(nonatomic) __weak TSPObject *owner; // @synthesize owner=_owner;
- (void).cxx_destruct;
- (void)willModifyForUpgrade;
- (void)willModify;
- (id)initWithOwner:(id)arg1;
- (id)documentRoot;

@end

