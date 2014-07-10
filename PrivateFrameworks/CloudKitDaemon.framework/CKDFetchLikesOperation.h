/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKitDaemon/CKDOperation.h>

@class CKShareID, NSArray;

@interface CKDFetchLikesOperation : CKDOperation
{
    id _likesFetchedProgressBlock;
    NSArray *_likeIDsToFetch;
    CKShareID *_shareID;
    unsigned long long _resultsLimit;
}

@property(nonatomic) unsigned long long resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
@property(retain, nonatomic) NSArray *likeIDsToFetch; // @synthesize likeIDsToFetch=_likeIDsToFetch;
@property(copy, nonatomic) id likesFetchedProgressBlock; // @synthesize likesFetchedProgressBlock=_likesFetchedProgressBlock;
- (void).cxx_destruct;
- (void)finishWithError:(id)arg1;
- (void)main;
- (void)_handleLikesFetched:(id)arg1 count:(unsigned long long)arg2 likes:(id)arg3 response:(id)arg4;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

