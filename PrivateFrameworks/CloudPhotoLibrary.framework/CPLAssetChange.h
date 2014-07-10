/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudPhotoLibrary/CPLItemChange.h>

@class CLLocation, CPLAdjustments, NSArray, NSData, NSDate, NSString;

@interface CPLAssetChange : CPLItemChange
{
    _Bool _favorite;
    _Bool _hidden;
    NSString *_masterIdentifier;
    NSDate *_lastSharedDate;
    NSArray *_resources;
    NSString *_caption;
    NSString *_extendedDescription;
    long long _orientation;
    long long _duration;
    CLLocation *_location;
    NSArray *_keywords;
    NSString *_mediaMetaDataType;
    NSData *_mediaMetaData;
    NSString *_timeZoneName;
    NSString *_momentIdentifier;
    NSString *_momentName;
    NSString *_collectionIdentifier;
    NSString *_collectionName;
    unsigned long long _burstFlags;
    NSString *_burstIdentifier;
    unsigned long long _assetSubtype;
    unsigned long long _assetHDRType;
    NSString *_similarToOriginalAdjustmentsFingerprint;
    NSString *_otherAdjustmentsFingerprint;
    CPLAdjustments *_adjustments;
}

@property(retain, nonatomic) CPLAdjustments *adjustments; // @synthesize adjustments=_adjustments;
@property(copy, nonatomic) NSString *otherAdjustmentsFingerprint; // @synthesize otherAdjustmentsFingerprint=_otherAdjustmentsFingerprint;
@property(copy, nonatomic) NSString *similarToOriginalAdjustmentsFingerprint; // @synthesize similarToOriginalAdjustmentsFingerprint=_similarToOriginalAdjustmentsFingerprint;
@property(nonatomic) unsigned long long assetHDRType; // @synthesize assetHDRType=_assetHDRType;
@property(nonatomic) unsigned long long assetSubtype; // @synthesize assetSubtype=_assetSubtype;
@property(copy, nonatomic) NSString *burstIdentifier; // @synthesize burstIdentifier=_burstIdentifier;
@property(nonatomic) unsigned long long burstFlags; // @synthesize burstFlags=_burstFlags;
@property(copy, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property(copy, nonatomic) NSString *collectionIdentifier; // @synthesize collectionIdentifier=_collectionIdentifier;
@property(copy, nonatomic) NSString *momentName; // @synthesize momentName=_momentName;
@property(copy, nonatomic) NSString *momentIdentifier; // @synthesize momentIdentifier=_momentIdentifier;
@property(copy, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;
@property(nonatomic, getter=isHidden) _Bool hidden; // @synthesize hidden=_hidden;
@property(retain, nonatomic) NSData *mediaMetaData; // @synthesize mediaMetaData=_mediaMetaData;
@property(copy, nonatomic) NSString *mediaMetaDataType; // @synthesize mediaMetaDataType=_mediaMetaDataType;
@property(copy, nonatomic) NSArray *keywords; // @synthesize keywords=_keywords;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic, getter=isFavorite) _Bool favorite; // @synthesize favorite=_favorite;
@property(copy, nonatomic) NSString *extendedDescription; // @synthesize extendedDescription=_extendedDescription;
@property(copy, nonatomic) NSString *caption; // @synthesize caption=_caption;
@property(copy, nonatomic) NSArray *resources; // @synthesize resources=_resources;
@property(copy, nonatomic) NSDate *lastSharedDate; // @synthesize lastSharedDate=_lastSharedDate;
@property(copy, nonatomic) NSString *masterIdentifier; // @synthesize masterIdentifier=_masterIdentifier;
- (void).cxx_destruct;
- (long long)adjustmentVersion;
- (void)setAdjustmentVersion:(long long)arg1;
- (id)lastModifiedDate;
- (void)setLastModifiedDate:(id)arg1;
- (void)setSimpleAdjustmentData:(id)arg1;
- (id)simpleAdjustmentData;
- (void)setAdjustmentCreatorCode:(id)arg1;
- (id)adjustmentCreatorCode;
- (void)setAdjustmentCompoundVersion:(id)arg1;
- (id)adjustmentCompoundVersion;
- (void)setAdjustmentType:(id)arg1;
- (id)adjustmentType;
- (id)adjustmentData;
- (void)setAdjustmentData:(id)arg1;
- (_Bool)supportsResources;
- (id)title;
- (void)setTitle:(id)arg1;
- (void)awakeFromStorage;
- (void)prepareForStorage;
- (void)setRelatedIdentifier:(id)arg1;
- (id)relatedIdentifier;
- (id)propertiesForChangeType:(unsigned long long)arg1;
- (id)propertiesDescription;
- (id)init;
- (id)translateToClientChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)translateToCloudChangeUsingIDMapping:(id)arg1 error:(id *)arg2;
- (id)identifiersForMapping;
- (id)proposedCloudIdentifierWithError:(id *)arg1;
- (id)compactedChangeWithRelatedChanges:(id)arg1 isOnlyChange:(_Bool)arg2 usingClientCache:(id)arg3;
- (_Bool)addExpandedChangesToChangeBatch:(id)arg1 andApplyToClientCache:(id)arg2 error:(id *)arg3;

@end

