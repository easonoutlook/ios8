/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "SBKKeyValuePayloadPair-Protocol.h"

@class NSString;

@interface SBKUniversalPlaybackPositionMetadata : NSObject <SBKKeyValuePayloadPair, NSCopying>
{
    _Bool _hasBeenPlayed;
    NSString *_itemIdentifier;
    double _timestamp;
    double _bookmarkTime;
    unsigned long long _playCount;
}

+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2 failuresOkay:(_Bool)arg3;
+ (id)metadataWithItemIdentifier:(id)arg1 keyValueStorePayload:(id)arg2;
+ (id)metadataWithItemIdentifier:(id)arg1 bookmarkTime:(double)arg2 bookmarkTimestamp:(double)arg3 hasBeenPlayed:(_Bool)arg4 playCount:(unsigned long long)arg5;
+ (id)metadataWithValuesFromDataSourceItem:(id)arg1;
+ (id)keyValueStoreItemIdentifierForUniqueStoreID:(long long)arg1 itemTitle:(id)arg2 albumName:(id)arg3 itemArtistName:(id)arg4 feedURL:(id)arg5 feedGUID:(id)arg6;
+ (id)keyValueStoreItemIdentifierForItem:(id)arg1;
+ (id)_testableMetadataItem_1;
+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;
@property unsigned long long playCount; // @synthesize playCount=_playCount;
@property _Bool hasBeenPlayed; // @synthesize hasBeenPlayed=_hasBeenPlayed;
@property double bookmarkTime; // @synthesize bookmarkTime=_bookmarkTime;
@property(copy) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
- (void).cxx_destruct;
- (id)kvsValueDescription;
- (id)kvsPayload;
- (id)kvsKey;
- (id)keyValueStorePayload;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property double timestamp; // @synthesize timestamp=_timestamp;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initAsTestableItem;
- (id)init;

@end

