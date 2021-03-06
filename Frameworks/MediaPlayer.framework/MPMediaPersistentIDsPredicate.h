/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPMediaPredicate.h>

#import "MPPProtobufferCoding-Protocol.h"

@interface MPMediaPersistentIDsPredicate : MPMediaPredicate <MPPProtobufferCoding>
{
    long long *_persistentIDs;
    _Bool _shouldContain;
    unsigned long long _count;
}

+ (id)predicateWithPersistentIDs:(const long long *)arg1 count:(unsigned long long)arg2 shouldContain:(_Bool)arg3;
@property(readonly, nonatomic) _Bool shouldContain; // @synthesize shouldContain=_shouldContain;
@property(readonly, nonatomic) const long long *persistentIDs; // @synthesize persistentIDs=_persistentIDs;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (id)protobufferEncodableObject;
- (id)initWithProtobufferDecodableObject:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityClass:(Class)arg1;

@end

