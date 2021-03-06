/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSArray, NSData, NSDictionary, NSMutableDictionary, NSNumber, NSString;

@interface IDSSendParameters : NSObject <NSCopying>
{
    NSMutableDictionary *_params;
}

@property(nonatomic) double timeout;
@property(nonatomic) _Bool localDelivery;
@property(nonatomic) _Bool highPriority;
@property(nonatomic) _Bool wantsDeliveryStatus;
@property(nonatomic) _Bool wantsResponse;
@property(nonatomic) _Bool encryptPayload;
@property(nonatomic) _Bool useDictAsTopLevel;
@property(nonatomic) _Bool expectsPeerResponse;
@property(retain, nonatomic) NSString *peerResponseIdentifier;
@property(retain, nonatomic) NSArray *bulkedPayload;
@property(retain, nonatomic) NSData *messageUUID;
@property(retain, nonatomic) NSDictionary *deliveryStatusContext;
@property(retain, nonatomic) NSString *identifier;
@property(retain, nonatomic) NSNumber *command;
@property(retain, nonatomic) NSData *dataToEncrypt;
@property(retain, nonatomic) NSString *accountUUID;
@property(retain, nonatomic) NSArray *destinations;
@property(retain, nonatomic) NSString *fromID;
@property(retain, nonatomic) NSDictionary *protobuf;
@property(retain, nonatomic) NSDictionary *message;
@property(retain, nonatomic) NSData *data;
@property(readonly, retain, nonatomic) NSDictionary *dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)init;

@end

