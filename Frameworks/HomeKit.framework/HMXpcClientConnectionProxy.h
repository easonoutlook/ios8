/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "HMMessageTransport-Protocol.h"

@class HMMessageDispatcher;

@interface HMXpcClientConnectionProxy : NSObject <HMMessageTransport>
{
    HMMessageDispatcher *_recvDispatcher;
}

@property(retain, nonatomic) HMMessageDispatcher *recvDispatcher; // @synthesize recvDispatcher=_recvDispatcher;
- (void).cxx_destruct;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(id)arg5;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)dealloc;
- (id)initWithMessageDispatcher:(id)arg1;

@end

