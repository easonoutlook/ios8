/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVAsynchronousKeyValueLoading-Protocol.h"
#import "NSCopying-Protocol.h"

@class AVAsset, AVAssetTrackInternal;

@interface AVAssetTrack : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVAssetTrackInternal *_track;
}

+ (id)keyPathsForValuesAffectingTimeRange;
+ (id)mediaTypesForMediaCharacteristics;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)associatedTracksOfType:(id)arg1;
- (id)availableTrackAssociationTypes;
- (_Bool)hasProtectedContent;
- (id)_trackReferences;
- (id)_pairedForcedOnlySubtitlesTrack;
- (id)_followingTrackAmongTracks:(id)arg1;
- (id)_fallbackTrack;
- (id)_firstAssociatedTrackWithAssociationType:(id)arg1;
- (_Bool)isExcludedFromAutoselectionInTrackGroup;
- (long long)alternateGroupID;
- (id)metadata;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (CDStruct_1b6d18a9)samplePresentationTimeForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segmentForTrackTime:(CDStruct_1b6d18a9)arg1;
- (id)segments;
- (CDStruct_1b6d18a9)minFrameDuration;
- (float)nominalFrameRate;
- (id)loudnessInfo;
- (float)preferredVolume;
- (long long)layer;
- (struct CGAffineTransform)preferredTransform;
- (struct CGSize)dimensions;
- (struct CGSize)naturalSize;
- (id)locale;
- (id)extendedLanguageTag;
- (id)languageCode;
- (float)estimatedDataRate;
- (int)naturalTimeScale;
- (_Bool)requiresFrameReordering;
- (CDStruct_e83c9415)mediaDecodeTimeRange;
- (CDStruct_e83c9415)mediaPresentationTimeRange;
- (CDStruct_e83c9415)timeRange;
- (id)mediaCharacteristics;
- (_Bool)hasMediaCharacteristics:(id)arg1;
- (_Bool)hasMediaCharacteristic:(id)arg1;
- (_Bool)_subtitleFormatDescriptionMatchesTextDisplayFlags:(unsigned int)arg1 flagsMask:(unsigned int)arg2;
- (long long)totalSampleDataLength;
- (_Bool)isSelfContained;
- (_Bool)isEnabled;
- (int)playabilityValidationResult;
- (_Bool)isPlayable;
- (id)formatDescriptions;
- (id)mediaType;
- (void)loadValuesAsynchronouslyForKeys:(id)arg1 completionHandler:(id)arg2;
- (long long)statusOfValueForKey:(id)arg1 error:(id *)arg2;
- (long long)statusOfValueForKey:(id)arg1;
@property(readonly, nonatomic) int trackID;
- (struct OpaqueFigAssetTrack *)_figAssetTrack;
- (struct OpaqueFigTrackReader *)_figTrackReader;
- (id)_assetTrackInspector;
@property(readonly, nonatomic) AVAsset *asset;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithAsset:(id)arg1 trackIndex:(long long)arg2;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2;
- (id)init;
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;
- (_Bool)_firstFormatDescriptionIsLPCM;
- (_Bool)_hasMultipleDistinctFormatDescriptions;
- (_Bool)_hasEmptyEdits;
- (_Bool)_hasScaledEdits;
- (_Bool)_hasMultipleEdits;

@end

