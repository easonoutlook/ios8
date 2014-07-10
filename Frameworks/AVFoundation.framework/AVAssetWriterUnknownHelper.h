/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetWriterHelper.h>

@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper
{
    short _alternateGroupID;
}

- (void)cancelWriting;
- (void)startWriting;
- (void)addInputGroup:(id)arg1;
- (_Bool)canAddInputGroup:(id)arg1;
- (_Bool)_canAddInputGroup:(id)arg1 exceptionReason:(id *)arg2;
- (void)addInput:(id)arg1;
- (_Bool)canAddInput:(id)arg1;
- (_Bool)_canAddInput:(id)arg1 exceptionReason:(id *)arg2;
- (void)setPreferredRate:(float)arg1;
- (void)setPreferredVolume:(float)arg1;
- (void)setPreferredTransform:(struct CGAffineTransform)arg1;
- (void)setMovieTimeScale:(int)arg1;
- (void)setMetadata:(id)arg1;
- (void)setDirectoryForTemporaryFiles:(id)arg1;
- (void)setShouldOptimizeForNetworkUse:(_Bool)arg1;
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;
- (long long)status;
- (id)initWithURL:(id)arg1 fileType:(id)arg2;
- (id)initWithConfigurationState:(id)arg1;

@end

