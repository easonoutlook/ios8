/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"

@class IDSMessageContext, NSData, NSMutableDictionary;

@interface IDSProtobuf : NSObject <NSCoding>
{
    NSMutableDictionary *_protoBufParams;
}

+ (id)keyRepresentationForType:(unsigned short)arg1 isResponse:(_Bool)arg2;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) IDSMessageContext *context;
@property(nonatomic) _Bool isResponse;
@property(nonatomic) unsigned short type;
@property(retain, nonatomic) NSData *data;
- (id)dictionaryRepresentation;
- (void)dealloc;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithProtobufData:(id)arg1 type:(unsigned short)arg2 isResponse:(_Bool)arg3;
- (id)description;

@end

