/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOBatchRevGeocodeRequest, NSMutableArray, NSObject<OS_dispatch_semaphore>;

// Not exported
@interface _RTBatchSliceGeocoder : NSObject
{
    GEOBatchRevGeocodeRequest *_batchRequest;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSMutableArray *_placeResults;
    struct _NSRange _range;
}

@property(retain, nonatomic) NSMutableArray *placeResults; // @synthesize placeResults=_placeResults;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(retain, nonatomic) GEOBatchRevGeocodeRequest *batchRequest; // @synthesize batchRequest=_batchRequest;
- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (void)_cancelRequest:(id)arg1;
- (void)geocodeLocations:(id)arg1;
- (id)init;

@end

