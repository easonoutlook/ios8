/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray, NSTimer;

@interface WorldClockManager : NSObject
{
    _Bool _dirty;
    NSMutableArray *_cities;
    NSTimer *_weatherUpdateTimer;
    NSDate *lastModified;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSDate *lastModified; // @synthesize lastModified;
@property(readonly, retain, nonatomic) NSArray *cities; // @synthesize cities=_cities;
- (id)weatherReachabilityURL;
- (void)updateWeatherDataWithCompletion:(id)arg1;
- (void)updateWeatherDataForCities:(id)arg1 withCompletion:(id)arg2;
- (void)moveCityFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)removeAllCities;
- (void)removeCityAtIndex:(unsigned long long)arg1;
- (void)removeCity:(id)arg1;
- (unsigned long long)addCity:(id)arg1;
- (_Bool)canAddCity;
- (id)cityWithIdUrl:(id)arg1;
- (_Bool)checkIfCitiesModified;
- (void)saveCities;
- (void)loadCities;
- (void)dealloc;

@end

