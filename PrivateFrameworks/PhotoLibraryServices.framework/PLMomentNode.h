/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CLLocation, NSDate, NSNumber, NSObject<NSCopying>, NSString, PLMomentCluster;

@interface PLMomentNode : NSObject
{
    _Bool _marked;
    _Bool _visited;
    NSObject<NSCopying> *__objectID;
    CLLocation *__location;
    NSDate *__creationDate;
    PLMomentCluster *__cluster;
    unsigned long long __userTagType;
    NSString *__userTag;
    NSNumber *_cacheInsertionIndex;
}

@property(retain, nonatomic) NSNumber *cacheInsertionIndex; // @synthesize cacheInsertionIndex=_cacheInsertionIndex;
@property(nonatomic, getter=isVisited) _Bool visited; // @synthesize visited=_visited;
@property(nonatomic, getter=isMarked) _Bool marked; // @synthesize marked=_marked;
@property(readonly, nonatomic) NSString *userTag; // @synthesize userTag=__userTag;
@property(readonly, nonatomic) unsigned long long userTagType; // @synthesize userTagType=__userTagType;
@property(nonatomic) PLMomentCluster *cluster; // @synthesize cluster=__cluster;
@property(readonly, retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=__creationDate;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=__location;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *objectID; // @synthesize objectID=__objectID;
- (_Bool)isTagged;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (id)description;
- (void)dealloc;
- (id)initWithPartialFetchDictionary:(id)arg1;
- (id)initWithManagedAsset:(id)arg1;

@end

