/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DChartType.h>

// Not exported
@interface TSCHChartTypeLine3D : TSCH3DChartType
{
}

- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize)arg3 imageScale:(double)arg4 swatchFrame:(struct CGRect)arg5 documentRoot:(id)arg6 shouldCache:(_Bool *)arg7;
- (_Bool)supportsElementChunking;
- (id)defaultSeriesType:(unsigned long long)arg1;
- (id)defaultDataFileName;
- (id)userInterfaceName;
- (id)init;
- (id)cascadeTimeSliceWithChartInfo:(id)arg1 renderSeriesProvider:(id)arg2 animationClass:(Class)arg3;
- (void)setupPresetImageChart:(id)arg1;
- (struct CGRect)adjustChartFrame:(struct CGRect)arg1 forPresetImageTarget:(int)arg2;
- (struct TSCH3DChartRotationLimit)rotation3DLimit;

@end

