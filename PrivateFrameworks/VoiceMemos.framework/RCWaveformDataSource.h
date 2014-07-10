/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "RCWaveformGeneratorSegmentOutputObserver-Protocol.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSURL, RCMutableWaveform, RCWaveform, RCWaveformGenerator;

@interface RCWaveformDataSource : NSObject <RCWaveformGeneratorSegmentOutputObserver>
{
    RCMutableWaveform *_accumulatorWaveform;
    _Bool _hasStartedLoading;
    _Bool _hasSavedGeneratedWaveform;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    RCWaveformGenerator *_waveformGenerator;
    NSURL *_generatedWaveformOutputURL;
    NSHashTable *_weakObservers;
}

@property(readonly, nonatomic) _Bool hasSavedGeneratedWaveform; // @synthesize hasSavedGeneratedWaveform=_hasSavedGeneratedWaveform;
@property(readonly, nonatomic) _Bool hasStartedLoading; // @synthesize hasStartedLoading=_hasStartedLoading;
@property(readonly, nonatomic) NSHashTable *weakObservers; // @synthesize weakObservers=_weakObservers;
@property(readonly, nonatomic) NSURL *generatedWaveformOutputURL; // @synthesize generatedWaveformOutputURL=_generatedWaveformOutputURL;
@property(readonly, nonatomic) RCWaveformGenerator *waveformGenerator; // @synthesize waveformGenerator=_waveformGenerator;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *observerQueue; // @synthesize observerQueue=_observerQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) RCWaveform *accumulatorWaveform; // @synthesize accumulatorWaveform=_accumulatorWaveform;
- (void).cxx_destruct;
- (void)_performObserversBlock:(id)arg1;
- (void)_performOnObserversBlock:(id)arg1;
- (void)waveformGenerator:(id)arg1 didLoadWaveformSegment:(id)arg2;
- (void)waveformGeneratorDidFinishLoading:(id)arg1 error:(id)arg2;
- (void)waveformGeneratorWillBeginLoading:(id)arg1;
- (void)setAccumulatorWaveformSegments:(id)arg1;
- (void)saveGeneratedWaveformIfNecessary;
- (id)saveableWaveform;
- (id)synchronouslyApproximateWaveformSegmentsByReadingCurrentFileAheadTimeRange:(CDStruct_73a5d3ca)arg1;
@property(readonly, nonatomic) double averagePowerLevelsRate;
- (id)segmentsInCompositionByConvertingFromActiveLoadingFragment:(id)arg1;
- (id)waveformSegmentsInTimeRange:(CDStruct_73a5d3ca)arg1;
@property(readonly, nonatomic) CDStruct_73a5d3ca timeRangeToHighlight;
@property(readonly, nonatomic) double duration;
@property(readonly, nonatomic) float loadingProgress;
@property(readonly, nonatomic) _Bool canceled;
@property(readonly, nonatomic) _Bool finished;
- (_Bool)setPaused:(_Bool)arg1;
- (_Bool)waitUntilFinished;
- (void)finishLoadingWithCompletionTimeoutDate:(id)arg1 completionBlock:(id)arg2;
- (void)beginLoading;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)initWithWaveformGenerator:(id)arg1 generatedWaveformOutputURL:(id)arg2;

@end

