/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSConditionLock, NSMapTable, NSMutableArray, NSString, VMUProcessDescription, VMUTaskMemoryCache;

@interface VMUSampler : NSObject
{
    unsigned long long _options;
    int _pid;
    unsigned int _task;
    _Bool _needTaskPortDealloc;
    _Bool _recordThreadStates;
    _Bool _taskIs64Bit;
    NSString *_processName;
    VMUProcessDescription *_processDescription;
    struct _CSTypeRef _symbolicator;
    VMUTaskMemoryCache *_memCache;
    struct sampling_context_t *_samplingContext;
    unsigned int _mainThread;
    NSMapTable *_lastThreadBacktraceMap;
    unsigned int _numberOfCopiedBacktraces;
    unsigned int *_previousThreadList;
    unsigned int _previousThreadCount;
    unsigned int _maxPreviousThreadCount;
    double _tbRate;
    double _tbInterval;
    NSConditionLock *_stateLock;
    double _interval;
    double _timeLimit;
    unsigned int _sampleLimit;
    _Bool _sampling;
    unsigned int _samplingThreadPort;
    unsigned int _numberOfSamples;
    NSMutableArray *_samples;
    _Bool _stacksFixed;
    id _delegate;
    double _timeSpentSamplingWithoutCFI;
    double _timeSpentSamplingWithCFI;
    unsigned int _dispatchThreadSoftLimit;
    unsigned int _dispatchThreadSoftLimitCount;
    unsigned int _dispatchThreadHardLimit;
    unsigned int _dispatchThreadHardLimitCount;
}

+ (id)sampleAllThreadsOfTask:(unsigned int)arg1 symbolicate:(_Bool)arg2;
+ (id)sampleAllThreadsOfTask:(unsigned int)arg1;
+ (id)sampleAllThreadsOfPID:(int)arg1;
+ (void)initialize;
- (void)writeOutput:(id)arg1 append:(_Bool)arg2;
- (id)createOutput;
- (id)outputString;
- (id)stopSamplingAndReturnCallNode;
- (void)forceStop;
- (void)stopSampling;
- (void)sampleForDuration:(unsigned int)arg1 interval:(unsigned int)arg2;
- (void)preloadSymbols;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1;
- (id)dispatchQueueNameForSerialNumber:(unsigned long long)arg1 returnedConcurrentFlag:(_Bool *)arg2 returnedThreadId:(unsigned long long *)arg3;
- (id)threadNameForThread:(unsigned int)arg1;
- (id)threadNameForThread:(unsigned int)arg1 returnedThreadId:(unsigned long long *)arg2 returnedDispatchQueueSerialNum:(unsigned long long *)arg3;
- (unsigned int)mainThread;
- (void)flushData;
- (unsigned int)sampleCount;
- (id)samples;
- (int)pid;
- (struct _CSTypeRef)symbolicator;
- (_Bool)shouldOutputSignature;
- (void)setShouldOutputSignature:(_Bool)arg1;
- (void)setRecordThreadStates:(_Bool)arg1;
- (unsigned int)sampleLimit;
- (void)setSampleLimit:(unsigned int)arg1;
- (double)timeLimit;
- (void)setTimeLimit:(double)arg1;
- (double)samplingInterval;
- (void)setSamplingInterval:(double)arg1;
- (_Bool)waitUntilDone;
- (_Bool)stop;
- (_Bool)start;
- (id)sampleThread:(unsigned int)arg1;
- (id)sampleAllThreadsOnce;
- (void)_runSamplingThread;
- (void)_fixupStacks:(id)arg1;
- (unsigned long long)recordSampleTo:(id)arg1 beginTime:(double)arg2 endTime:(double)arg3 thread:(unsigned int)arg4;
- (void)_checkDispatchThreadLimits;
- (void)initializeSamplingContext:(_Bool)arg1;
- (void)_makeTimeshare;
- (void)_makeHighPriority;
- (void)finalize;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)initWithPID:(int)arg1 options:(unsigned long long)arg2;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithPID:(int)arg1;
- (id)initWithPID:(int)arg1 orTask:(unsigned int)arg2 options:(unsigned long long)arg3;

@end

