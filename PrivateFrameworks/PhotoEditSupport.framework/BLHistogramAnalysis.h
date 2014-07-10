/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface BLHistogramAnalysis : NSObject
{
    double _blackPoint;
    double _whitePoint;
    double _blackPointRed;
    double _whitePointRed;
    double _blackPointGreen;
    double _whitePointGreen;
    double _blackPointBlue;
    double _whitePointBlue;
    double _averageLinearRed;
    double _averageLinearBlue;
    double _averageLinearGreen;
}

@property(nonatomic) double averageLinearGreen; // @synthesize averageLinearGreen=_averageLinearGreen;
@property(nonatomic) double averageLinearBlue; // @synthesize averageLinearBlue=_averageLinearBlue;
@property(nonatomic) double averageLinearRed; // @synthesize averageLinearRed=_averageLinearRed;
@property(nonatomic) double whitePointBlue; // @synthesize whitePointBlue=_whitePointBlue;
@property(nonatomic) double blackPointBlue; // @synthesize blackPointBlue=_blackPointBlue;
@property(nonatomic) double whitePointGreen; // @synthesize whitePointGreen=_whitePointGreen;
@property(nonatomic) double blackPointGreen; // @synthesize blackPointGreen=_blackPointGreen;
@property(nonatomic) double whitePointRed; // @synthesize whitePointRed=_whitePointRed;
@property(nonatomic) double blackPointRed; // @synthesize blackPointRed=_blackPointRed;
@property(nonatomic) double whitePoint; // @synthesize whitePoint=_whitePoint;
@property(nonatomic) double blackPoint; // @synthesize blackPoint=_blackPoint;
- (id)analysisDictionary;
- (id)description;
- (void)dealloc;
- (id)initWithAnalysisDictionary:(id)arg1;
- (id)initWithBLImage:(id)arg1;

@end

