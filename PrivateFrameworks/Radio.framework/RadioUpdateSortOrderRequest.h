/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Radio/RadioSyncRequest.h>

@class NSArray;

@interface RadioUpdateSortOrderRequest : RadioSyncRequest
{
    NSArray *_stationSortOrdering;
}

- (void).cxx_destruct;
- (void)startWithCompletionHandler:(id)arg1;
- (id)changeList;
- (id)initWithStationSortOrdering:(id)arg1;

@end

