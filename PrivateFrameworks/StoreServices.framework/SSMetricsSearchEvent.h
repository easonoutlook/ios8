/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSMetricsBaseEvent.h>

@class NSString;

@interface SSMetricsSearchEvent : SSMetricsBaseEvent
{
}

@property(retain, nonatomic) NSString *targetURL;
@property(retain, nonatomic) NSString *targetType;
@property(retain, nonatomic) NSString *targetIdentifier;
- (void)setLocationWithEventLocations:(id)arg1;
@property(retain, nonatomic) NSString *searchTerm;
@property(retain, nonatomic) NSString *actionType;
@property(retain, nonatomic) id actionDetails;
- (id)init;

@end

