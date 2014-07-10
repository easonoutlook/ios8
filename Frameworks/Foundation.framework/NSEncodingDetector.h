/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface NSEncodingDetector : NSObject
{
    unsigned int _encoding;
    unsigned long long _givenNumBytes;
    unsigned long long _numChars;
    unsigned long long _numMultiByteChars;
    unsigned long long _numSingleBytechars;
    unsigned long long _skipBytes;
    unsigned long long _numZeroBytes;
    unsigned long long _mostFrqChars;
    unsigned long long _numBigrams;
    unsigned long long _numRep;
    unsigned long long _numDirect;
    unsigned long long _numBase64;
    unsigned long long _numSeq;
    unsigned long long _numTrigram;
    unsigned long long _numLower;
    unsigned long long _numHigher;
    double _weight;
    _Bool _hasBase64;
    _Bool _isBigEndian;
    _Bool _hasBOM;
    unsigned int _tag;
}

+ (id)encodingDetectorWithEncoding:(unsigned long long)arg1;
- (unsigned long long)recognizeString:(const char *)arg1 withDataLength:(unsigned long long)arg2 withReplacement:(const char *)arg3 withReplacementLength:(unsigned long long)arg4 inNewData:(char *)arg5 maxBufferLength:(unsigned long long)arg6 actualBufferLength:(unsigned long long *)arg7;
- (double)multiBytesRatio;
- (double)confidenceWith2Chars;
- (double)confidence;
- (id)init;
- (unsigned long long)maxSkipBytes;
- (double)bytesRatio;
- (void)softReset;
- (void)reset;

@end

