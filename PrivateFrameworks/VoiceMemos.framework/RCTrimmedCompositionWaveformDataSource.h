/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <VoiceMemos/RCCompositionWaveformDataSource.h>

@class NSURL;

@interface RCTrimmedCompositionWaveformDataSource : RCCompositionWaveformDataSource
{
    NSURL *_destinationWaveformURL;
}

@property(readonly, nonatomic) NSURL *destinationWaveformURL; // @synthesize destinationWaveformURL=_destinationWaveformURL;
- (void).cxx_destruct;
- (id)generatedWaveformOutputURL;
- (_Bool)preferLoadingFragmentWaveforms;
- (id)initWithSourceComposition:(id)arg1 destinationWaveformURL:(id)arg2;

@end

