/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class AudioTierHistogram, NSDictionary, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface AWDStats : NSObject
{
    NSDictionary *histogramDict;
    NSMutableDictionary *timingDict;
    unsigned int txWidth;
    unsigned int txHeight;
    unsigned int rxWidth;
    unsigned int rxHeight;
    unsigned int txFrameRateAvg;
    unsigned int txFrameRateAvgCount;
    unsigned int txFrameRateMax;
    unsigned int txFrameRateMin;
    unsigned int rxFrameRateAvg;
    unsigned int rxFrameRateAvgCount;
    unsigned int rxFrameRateMax;
    unsigned int rxFrameRateMin;
    NSString *interfaceName;
    NSString *remoteInterfaceName;
    unsigned int connectionType;
    unsigned int avgLossRate;
    unsigned int avgLossRateCount;
    unsigned int avgJitterBufferSize;
    unsigned int avgJitterBufferSizeCount;
    unsigned int avgInterarrivalTime;
    unsigned int avgInterarrivalTimeCount;
    unsigned int targetJitterBufferSize;
    unsigned int targetJitterBufferSizeCount;
    unsigned int downlinkEstimateAvg;
    unsigned int downlinkEstimateAvgCount;
    unsigned int uplinkEstimateAvg;
    unsigned int uplinkEstimateAvgCount;
    unsigned int avgRate;
    unsigned int avgRateCount;
    void *gksDiagnosticSubmissionHandle;
    float localVideoDegradeTime;
    float remoteVideoDegradeTime;
    unsigned int audioPauseTime;
    unsigned int videoPauseTime;
    unsigned int audioFlush;
    unsigned int videoFlush;
    unsigned int basebandCount;
    unsigned int targetFramerate;
    double timeSinceLastVRA;
    unsigned int lastVRAWidth;
    NSString *currentInterface;
    NSString *previousInterface;
    double timeSinceLastCellTech;
    double previousCellTechDuration;
    double currentCellTechDuration;
    unsigned int terminationReason;
    unsigned int callNonce;
    BOOL isSender;
    long long startTime;
    AudioTierHistogram *audioTiers;
    unsigned int operatingMode;
    unsigned int relayType;
    unsigned int callAvgTxRate;
    unsigned int callAvgTxRateCount;
    unsigned int callAvgRxRate;
    unsigned int callAvgRxRateCount;
    long long callDuration;
    NSObject<OS_dispatch_queue> *submitQueue;
}

+ (id)statsSingleton;
+ (void)initialize;
@property(readonly) unsigned int callNonce; // @synthesize callNonce;
@property float remoteVideoDegradeTime; // @synthesize remoteVideoDegradeTime;
@property float localVideoDegradeTime; // @synthesize localVideoDegradeTime;
- (void)setCallReportProtobuf:(unsigned int)arg1 withProtobufData:(id)arg2 forMetricID:(long long)arg3;
- (void)printHistograms;
- (void)reset;
- (void)callEnd;
- (void)updateAudioTier:(unsigned int)arg1 mode:(unsigned int)arg2 duplication:(unsigned int)arg3 codecPayload:(unsigned int)arg4 codecBitrate:(unsigned int)arg5 bundling:(unsigned int)arg6;
- (void)callStartIsSender:(_Bool)arg1 forTime:(long long)arg2 mode:(unsigned int)arg3;
- (int)sendRTCSessionEndMetricToAWD;
- (int)sendAudioTierHistogramToAWD;
- (int)sendInterfaceStatusToAWD;
- (int)sendVideoQualityStatsToAWD;
- (int)sendRTStatsToAWD;
- (int)sendVideoStatusToAWD;
- (int)sendBasebandStatsToAWD;
- (int)sendHistogramsToAWD;
- (int)sendConnectivityTimingToAWD;
- (void)finishVRA;
- (void)addVRAWidth:(unsigned int)arg1;
- (void)finishCellTech;
- (void)updateCellTech:(id)arg1;
- (void)setConnectionType:(unsigned int)arg1;
- (void)setTerminationReason:(unsigned int)arg1;
- (void)setRemoteInterface:(id)arg1;
- (void)setInterface:(id)arg1;
- (void)setRemoteWidth:(unsigned int)arg1 height:(unsigned int)arg2;
- (void)setLocalWidth:(unsigned int)arg1 height:(unsigned int)arg2 framerate:(unsigned int)arg3;
- (void)incrementBasebandCount;
- (void)accumulateVideoFlush:(unsigned int)arg1;
- (void)accumulateAudioFlush:(unsigned int)arg1;
- (void)accumulateVideoPauseTime:(unsigned int)arg1;
- (void)accumulateAudioPauseTime:(unsigned int)arg1;
- (void)accumulateAverageReceiveRate:(unsigned int)arg1;
- (void)accumulateAverageTransmitRate:(unsigned int)arg1;
- (void)accumulateAverageRate:(unsigned int)arg1;
- (void)accumulateUplinkEstimate:(unsigned int)arg1;
- (void)accumulateDownlinkEstimate:(unsigned int)arg1;
- (void)accumulateAverageInterarrivalTime:(unsigned int)arg1;
- (void)accumulateTargetJitterBufferSize:(unsigned int)arg1;
- (void)accumulateJitterBufferSize:(unsigned int)arg1;
- (void)accumulateAvgLossRate:(unsigned int)arg1;
- (void)accumulateRxFrameRate:(unsigned int)arg1 min:(unsigned int)arg2 max:(unsigned int)arg3;
- (void)accumulateTxFrameRate:(unsigned int)arg1 min:(unsigned int)arg2 max:(unsigned int)arg3;
- (void)addValue:(unsigned int)arg1 toHistogram:(id)arg2;
- (void)addFloatValue:(float)arg1 toHistogram:(id)arg2;
- (void)setFirstRemoteFrameTiming:(unsigned int)arg1;
- (void)addConnectivityTiming:(struct tagConnectivityTiming)arg1;
- (void)addConnectivityTimingDictionary:(id)arg1;
- (void)addRTStatsDictionary:(id)arg1;
- (void)dealloc;
- (id)init;

@end

