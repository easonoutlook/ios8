/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSMetricsMutableEvent.h>

@class NSNumber, NSString;

@interface SSMetricsBaseEvent : SSMetricsMutableEvent
{
}

- (id)description;
@property(retain, nonatomic) NSNumber *windowWidth;
@property(retain, nonatomic) NSString *windowOrientation;
@property(retain, nonatomic) NSNumber *windowHeight;
@property(retain, nonatomic) NSString *userAgent;
@property(retain, nonatomic) NSString *topic;
@property(retain, nonatomic) NSNumber *screenWidth;
@property(retain, nonatomic) NSNumber *screenHeight;
@property(retain, nonatomic) NSNumber *previousClientVersion;
@property(retain, nonatomic) NSNumber *pixelRatio;
@property(retain, nonatomic) NSString *pageURL;
@property(retain, nonatomic) NSString *pageType;
@property(nonatomic) unsigned long long pageID;
@property(retain, nonatomic) NSString *pageDescription;
@property(retain, nonatomic) NSString *pageContext;
- (void)setOriginalTimeUsingDate:(id)arg1;
@property double originalTime;
@property(retain, nonatomic) NSString *hostApplicationIdentifier;
@property(retain, nonatomic) NSNumber *eventVersion;
@property(retain, nonatomic) NSString *eventType;
@property(retain, nonatomic) NSString *connection;
@property(retain, nonatomic) NSNumber *clientVersion;
@property(retain, nonatomic) NSNumber *baseVersion;
@property(retain, nonatomic) NSString *applicationIdentifier;
@property(retain, nonatomic) NSNumber *accountIdentifier;
- (_Bool)isBlacklistedByConfiguration:(id)arg1;
- (id)init;

@end

