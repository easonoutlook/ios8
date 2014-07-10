/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetInspector.h>

@interface AVFormatReaderInspector : AVAssetInspector
{
    struct OpaqueFigFormatReader *_formatReader;
    _Bool didCheckForSaveRestriction;
    _Bool hasSaveRestriction;
}

- (_Bool)canContainMovieFragments;
- (_Bool)isComposable;
- (_Bool)isReadable;
- (_Bool)isExportable;
- (_Bool)_hasQTSaveRestriction;
- (id)metadataForFormat:(id)arg1;
- (id)availableMetadataFormats;
- (id)commonMetadata;
- (id)lyrics;
- (id)trackReferences;
- (id)alternateTrackGroups;
- (long long)trackCount;
- (_Bool)providesPreciseDurationAndTiming;
- (int)naturalTimeScale;
- (struct CGSize)naturalSize;
- (struct CGAffineTransform)preferredTransform;
- (float)preferredSoundCheckVolumeNormalization;
- (float)preferredVolume;
- (float)preferredRate;
- (CDStruct_1b6d18a9)duration;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;
@property(retain, nonatomic, getter=_formatReader, setter=_setFormatReader:) struct OpaqueFigFormatReader *formatReader;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)finalize;
- (void)dealloc;
- (id)initWithFormatReader:(struct OpaqueFigFormatReader *)arg1;

@end

