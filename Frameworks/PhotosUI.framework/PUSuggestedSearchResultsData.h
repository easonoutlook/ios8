/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSString;

@interface PUSuggestedSearchResultsData : NSObject
{
    NSArray *_uuids;
    NSString *_displayTitle;
    NSString *_searchString;
}

@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy, nonatomic) NSString *displayTitle; // @synthesize displayTitle=_displayTitle;
@property(retain, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;
- (void).cxx_destruct;

@end

