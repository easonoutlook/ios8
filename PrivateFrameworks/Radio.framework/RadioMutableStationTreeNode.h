/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Radio/RadioStationTreeNode.h>

@class NSArray, NSDictionary, NSString, RadioArtworkCollection;

@interface RadioMutableStationTreeNode : RadioStationTreeNode
{
}

@property(copy, nonatomic) NSDictionary *stationDictionary;
@property(nonatomic) long long nodeID;
@property(copy, nonatomic) NSString *name;
@property(nonatomic) _Bool hasAdditionalChildNodes;
@property(nonatomic) long long displayStyle;
@property(copy, nonatomic) NSArray *childNodes;
@property(nonatomic) long long childNodeLoadingStyle;
@property(copy, nonatomic) RadioArtworkCollection *artworkCollection;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
