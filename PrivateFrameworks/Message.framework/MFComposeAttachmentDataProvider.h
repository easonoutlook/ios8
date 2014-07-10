/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFAttachmentDataProvider-Protocol.h"

@class NSMutableDictionary;

@interface MFComposeAttachmentDataProvider : NSObject <MFAttachmentDataProvider>
{
    NSMutableDictionary *_attachments;
}

- (id)messageForAttachment:(id)arg1;
- (_Bool)fetchDataForAttachment:(id)arg1 withDataConsumer:(id)arg2 error:(id *)arg3;
- (void)removeDataForAttachment:(id)arg1;
- (void)addData:(id)arg1 forContentID:(id)arg2;
- (void)dealloc;
- (id)initWithData:(id)arg1 forContentID:(id)arg2;

@end

