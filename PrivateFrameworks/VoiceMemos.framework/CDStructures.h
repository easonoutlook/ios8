/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct AudioStreamBasicDescription {
    double mSampleRate;
    unsigned int mFormatID;
    unsigned int mFormatFlags;
    unsigned int mBytesPerPacket;
    unsigned int mFramesPerPacket;
    unsigned int mBytesPerFrame;
    unsigned int mChannelsPerFrame;
    unsigned int mBitsPerChannel;
    unsigned int mReserved;
};

struct AudioUnitMeterClipping {
    float peakValueSinceLastCall;
    unsigned char sawInfinity;
    unsigned char sawNotANumber;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct NSNumber {
    Class _field1;
};

struct PowerMeter {
    _Bool mInstantaneousMode;
    double mSampleRate;
    double mPeakDecay1;
    double mPeakDecay;
    double mDecay1;
    double mDecay;
    int mPrevBlockSize;
    int mPeakHoldCount;
    double mPeak;
    double mAveragePowerPeak;
    double mMaxPeak;
    struct AudioUnitMeterClipping mClipping;
    double mAveragePowerF;
    float m_vAvePower[16];
    int mAveragePowerI;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

typedef struct {
    double beginTime;
    double endTime;
} CDStruct_73a5d3ca;

typedef struct {
    float scale;
    double vDeltaWaveformToTimeBaseline;
    double vDeltaTimeBaselineToTitleBaseline;
    double vDeltaTitleBaselineToDateBaseline;
    double vDeltaDateBaselineToControlsTop;
    double vDeltaControlsBottomToBottom;
    double vDeltaControlsTopToNavigationBottom;
    _Bool hIsWaveformFlushToEdges;
    double hDeltaAdditionalInsetFromWaveformEdge;
    double hDeltaControlButtonsSpacing;
    double hDeltaTrimProgressInset;
    double hDeltaAcousticAnnotationLabelToWaveformRight;
    double hTrimModeInset;
    double hDetailNavigationBarInset;
    double hPresentedRecordMemoHeight;
    double vDeltaLockNotificationListTop;
    double vDeltaLockNotificationListTopToRecordingTextBaseline;
    double vDeltaLockAbsoluteTopToWaveformTop;
    double vDeltaLockNotificationListBottom;
    double vDeltaLockNotificationListBottomToRecordingTimeBaseline;
} CDStruct_66e6f92a;

// Template types
typedef struct vector<float, std::__1::allocator<float>> {
    float *__begin_;
    float *__end_;
    struct __compressed_pair<float *, std::__1::allocator<float>> {
        float *__first_;
    } __end_cap_;
} vector_ec52ae8c;

