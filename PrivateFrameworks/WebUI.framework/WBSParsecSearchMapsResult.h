/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebUI/WBSParsecSearchResult.h>

@class MKMapItem, NSData, NSString, WBSParsecSearchMapsResultExtraCompletionItem;

@interface WBSParsecSearchMapsResult : WBSParsecSearchResult
{
    MKMapItem *_mapItem;
    NSString *_mapsDataType;
    NSData *_mapsData;
    WBSParsecSearchMapsResultExtraCompletionItem *_extraCompletionItem;
}

@property(readonly, nonatomic) WBSParsecSearchMapsResultExtraCompletionItem *extraCompletionItem; // @synthesize extraCompletionItem=_extraCompletionItem;
@property(readonly, nonatomic) NSData *mapsData; // @synthesize mapsData=_mapsData;
- (void).cxx_destruct;
@property(readonly, nonatomic) MKMapItem *mapItem;
- (id)initWithDictionary:(id)arg1;

@end

