/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSNumber, NSString;

@interface PRSSearchStats : NSObject
{
    NSString *_type;
    NSNumber *_startTime;
    NSNumber *_endTime;
    NSNumber *_searchCount;
    NSDictionary *_dictResultCount;
}

@property(retain, nonatomic) NSDictionary *dictResultCount; // @synthesize dictResultCount=_dictResultCount;
@property(retain, nonatomic) NSNumber *searchCount; // @synthesize searchCount=_searchCount;
@property(retain, nonatomic) NSNumber *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSNumber *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;

@end

