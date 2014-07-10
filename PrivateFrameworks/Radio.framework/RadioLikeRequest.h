/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Radio/RadioRequest.h>

@class RadioStation, SSURLConnectionRequest;

@interface RadioLikeRequest : RadioRequest
{
    long long _itemID;
    int _likeStatus;
    SSURLConnectionRequest *_request;
    int _seedType;
    RadioStation *_station;
    _Bool _isSeed;
}

@property(nonatomic) _Bool isSeed; // @synthesize isSeed=_isSeed;
@property(nonatomic) int likeStatus; // @synthesize likeStatus=_likeStatus;
- (void).cxx_destruct;
- (void)startWithLikeCompletionHandler:(id)arg1;
- (void)startWithCompletionHandler:(id)arg1;
- (id)initWithItemID:(long long)arg1 seedType:(int)arg2 station:(id)arg3;
- (id)initWithTrackID:(id)arg1 station:(id)arg2;
- (id)initWithTrack:(id)arg1 station:(id)arg2;
- (id)init;

@end

