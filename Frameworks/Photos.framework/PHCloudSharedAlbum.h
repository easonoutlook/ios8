/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Photos/PHAssetCollection.h>

@class NSNumber, NSString;

@interface PHCloudSharedAlbum : PHAssetCollection
{
    _Bool _owned;
    _Bool _cloudMultipleContributorsEnabled;
    short _cloudAlbumSubtype;
    NSString *_cloudOwnerFirstName;
    NSString *_cloudOwnerLastName;
    NSString *_cloudOwnerFullName;
    NSNumber *_cloudOwnerEmailKey;
}

+ (id)identifierCode;
+ (id)managedEntityName;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
@property(readonly, retain, nonatomic) NSNumber *cloudOwnerEmailKey; // @synthesize cloudOwnerEmailKey=_cloudOwnerEmailKey;
@property(readonly, retain, nonatomic) NSString *cloudOwnerFullName; // @synthesize cloudOwnerFullName=_cloudOwnerFullName;
@property(readonly, retain, nonatomic) NSString *cloudOwnerLastName; // @synthesize cloudOwnerLastName=_cloudOwnerLastName;
@property(readonly, retain, nonatomic) NSString *cloudOwnerFirstName; // @synthesize cloudOwnerFirstName=_cloudOwnerFirstName;
@property(readonly, nonatomic) short cloudAlbumSubtype; // @synthesize cloudAlbumSubtype=_cloudAlbumSubtype;
@property(readonly, nonatomic, getter=isCloudMultipleContributorsEnabled) _Bool cloudMultipleContributorsEnabled; // @synthesize cloudMultipleContributorsEnabled=_cloudMultipleContributorsEnabled;
@property(readonly, nonatomic, getter=isOwned) _Bool owned; // @synthesize owned=_owned;
- (void).cxx_destruct;
- (id)description;
- (_Bool)canPerformEditOperation:(unsigned long long)arg1;
- (_Bool)collectionHasFixedOrder;
- (id)localizedSharedByLabelAllowsEmail:(_Bool)arg1;
- (_Bool)isOwnedCloudSharedAlbum;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (Class)changeRequestClass;

@end

