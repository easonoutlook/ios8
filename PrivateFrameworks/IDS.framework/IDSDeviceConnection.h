/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSInputStream, NSOutputStream, _IDSDeviceConnection;

@interface IDSDeviceConnection : NSObject
{
    _IDSDeviceConnection *_internal;
}

@property(readonly, retain, nonatomic) _IDSDeviceConnection *_internal;
- (void)close;
@property(readonly, retain, nonatomic) NSOutputStream *outputStream;
@property(readonly, retain, nonatomic) NSInputStream *inputStream;
@property(readonly, nonatomic) int socket;
- (void)setStreamPairWithInputStream:(id)arg1 outputStream:(id)arg2;
- (id)description;
- (void)dealloc;
- (id)initStreamWithDevice:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 queue:(void)arg4;
- (id)initSocketWithDevice:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 queue:(void)arg4;

@end

