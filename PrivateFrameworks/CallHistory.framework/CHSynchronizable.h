/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CHSynchronizableProtocol-Protocol.h"

@class NSObject<OS_dispatch_queue>;

@interface CHSynchronizable : NSObject <CHSynchronizableProtocol>
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (id)executeSyncWithResult:(id)arg1;
- (void)executeSync:(id)arg1;
- (void)execute:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)initWithName:(id)arg1;

@end

