/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSMutableSet, NSString;

@interface PLBBBulletin : NSObject
{
    long long _bulletinType;
    NSString *_senderName;
    NSString *_senderEmailAddress;
    NSString *_albumTitle;
    NSString *_photosBatchID;
    NSString *_mainAssetUUID;
    _Bool _mainAssetIsMine;
    _Bool _mainAssetIsVideo;
    _Bool _containsBatchFirstKnownAsset;
    NSMutableSet *_assetUUIDs;
    long long _assetCount;
    NSMutableSet *_placeholderAssetUUIDs;
    NSMutableSet *_lowResThumbAssetUUIDs;
    int _invitationState;
    NSString *_firstCommentGUID;
    NSDate *_commentDate;
    NSString *_commentText;
    long long _commentCount;
    _Bool _commentIsCaption;
    _Bool _suppressAlert;
    NSMutableSet *_senderNames;
    _Bool _forMultipleAsset;
    _Bool _allMultipleAssetIsMine;
    _Bool _isMixedType;
    unsigned long long _recordID;
    unsigned long long _replacedBulletinRecordID;
    unsigned long long _originalRecordID;
    NSString *_albumUUID;
    NSDate *_date;
    NSDate *_originalDate;
    NSDate *_expirationDate;
}

@property _Bool suppressAlert; // @synthesize suppressAlert=_suppressAlert;
@property(readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy) NSDate *originalDate; // @synthesize originalDate=_originalDate;
@property(readonly) NSDate *date; // @synthesize date=_date;
@property(readonly) NSString *senderEmailAddress; // @synthesize senderEmailAddress=_senderEmailAddress;
@property(readonly) NSString *mainAssetUUID; // @synthesize mainAssetUUID=_mainAssetUUID;
@property(readonly) NSString *albumUUID; // @synthesize albumUUID=_albumUUID;
@property unsigned long long originalRecordID; // @synthesize originalRecordID=_originalRecordID;
@property unsigned long long replacedBulletinRecordID; // @synthesize replacedBulletinRecordID=_replacedBulletinRecordID;
@property unsigned long long recordID; // @synthesize recordID=_recordID;
@property(readonly) long long bulletinType; // @synthesize bulletinType=_bulletinType;
- (id)_localizedCountFormatter;
- (_Bool)assetWithUUID:(id)arg1 didChangePlaceholderKindTo:(short)arg2 fromOldKind:(short)arg3;
- (_Bool)isCommentPiggyBackedOnPhotosAddedBulletin;
- (id)description;
@property(readonly) NSDictionary *dictionaryRepresentation;
@property(readonly) NSArray *suppressionContexts;
@property(readonly) _Bool hasThumbnail;
@property(readonly) NSString *destinationURLString;
@property(readonly) NSString *message;
@property(readonly) NSString *title;
@property(readonly) double completionPercentage;
@property(readonly) _Bool thumbnailAssetIsPlaceholder;
@property(readonly) _Bool allAssetsAreFullResolution;
- (id)bulletinByMergingWithBulletinDictionary:(id)arg1;
- (id)bulletinByMergingWithBulletin:(id)arg1;
@property(readonly) _Bool canMergeWithPersistedBulletins;
- (void)dealloc;
- (id)_initWithLikesCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(_Bool)arg6 mainAssetIsVideo:(_Bool)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 assetUUIDs:(id)arg10 placeholderAssetUUIDs:(id)arg11 lowResThumbAssetUUIDs:(id)arg12 senderNames:(id)arg13 forMultipleAsset:(_Bool)arg14 allMultipleAssetIsMine:(_Bool)arg15 isMixedType:(_Bool)arg16;
- (id)_initWithCommentsCount:(long long)arg1 commentDate:(id)arg2 firstCommentGUID:(id)arg3 toAssetWithUUID:(id)arg4 photosBatchID:(id)arg5 mainAssetIsMine:(_Bool)arg6 mainAssetIsVideo:(_Bool)arg7 inAlbumWithTitle:(id)arg8 albumUUID:(id)arg9 assetUUIDs:(id)arg10 placeholderAssetUUIDs:(id)arg11 lowResThumbAssetUUIDs:(id)arg12;
- (id)initWithLikeAdded:(id)arg1;
- (id)initWithCommentAdded:(id)arg1;
- (id)_initWithPhotosAddedBulletin:(id)arg1 mergedWithBulletinDictionary:(id)arg2;
- (id)_initWithPhotosAddedBulletin:(id)arg1 mergedWithBulletin:(id)arg2;
- (id)initWithAssetAdded:(id)arg1 atIndex:(unsigned long long)arg2 toAlbum:(id)arg3;
- (id)initWithMultipleContributorEnabledForAlbum:(id)arg1;
- (id)initWithInvitationRecordStatusChanged:(id)arg1;
- (id)initWithInvitationAlbum:(id)arg1;
- (id)_initWithType:(long long)arg1;
- (id)init;

@end

