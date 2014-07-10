/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSNetServiceDelegate-Protocol.h"

@class NSNetService, NSString;

@interface SFStreamPublisher : NSObject <NSNetServiceDelegate>
{
    id <SFStreamPublisherDelegate> _delegate;
    NSString *_bonjourName;
    NSNetService *_service;
}

@property(retain) NSNetService *service; // @synthesize service=_service;
@property(readonly, retain) NSString *bonjourName; // @synthesize bonjourName=_bonjourName;
@property id <SFStreamPublisherDelegate> delegate; // @synthesize delegate=_delegate;
- (void)netService:(id)arg1 didAcceptConnectionWithInputStream:(id)arg2 outputStream:(id)arg3;
- (void)netServiceDidStop:(id)arg1;
- (void)netService:(id)arg1 didNotPublish:(id)arg2;
- (void)netServiceDidPublish:(id)arg1;
- (id)myBonjourName;
- (void)unpublish;
- (void)publish;
- (void)willEnterForeground:(id)arg1;
- (void)didEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

