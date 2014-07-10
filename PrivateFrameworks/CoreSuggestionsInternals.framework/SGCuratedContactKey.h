/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SGEntityKey-Protocol.h"

@class SGIdentityKey;

@interface SGCuratedContactKey : NSObject <SGEntityKey>
{
    SGIdentityKey *_identityKey;
}

+ (_Bool)isSupportedEntityType:(long long)arg1;
@property(readonly, nonatomic) SGIdentityKey *identityKey; // @synthesize identityKey=_identityKey;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqualToCuratedContactKey:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)serialize;
- (id)initWithSerialized:(id)arg1;
- (id)initWithExternalId:(int)arg1;
- (id)initWithIdentityKey:(id)arg1;

@end

