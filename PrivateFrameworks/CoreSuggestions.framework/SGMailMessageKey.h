/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface SGMailMessageKey : NSObject <NSCopying, NSSecureCoding>
{
    long long _messageIdHash;
    NSString *_source;
    NSString *_messageId;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) long long messageIdHash; // @synthesize messageIdHash=_messageIdHash;
@property(readonly, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) NSString *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqualToMailMessageKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 messageIdHash:(long long)arg2;
- (id)initWithSource:(id)arg1 messageId:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
