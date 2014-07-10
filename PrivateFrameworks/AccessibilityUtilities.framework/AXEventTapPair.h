/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface AXEventTapPair : NSObject
{
    int priority;
    int _type;
    id handler;
    NSString *identifier;
    struct __IOHIDEventSystemClient *_systemClient;
}

@property(retain, nonatomic) struct __IOHIDEventSystemClient *systemClient; // @synthesize systemClient=_systemClient;
@property(nonatomic) int type; // @synthesize type=_type;
@property(nonatomic) int priority; // @synthesize priority;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier;
@property(copy, nonatomic) id handler; // @synthesize handler;
- (id)description;
- (void)dealloc;

@end

