/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface GKListNode : NSObject
{
    id _value;
    GKListNode *_prevNode;
    GKListNode *_nextNode;
}

@property(nonatomic) GKListNode *nextNode; // @synthesize nextNode=_nextNode;
@property(nonatomic) GKListNode *prevNode; // @synthesize prevNode=_prevNode;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (id)description;
- (void)dealloc;
- (id)initWithValue:(id)arg1;

@end

