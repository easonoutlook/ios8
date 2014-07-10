/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DValueEnumerator.h>

@class TSCH3DAxisLabelKind, TSCHChartAxis;

// Not exported
@interface TSCH3DAxisLabelEnumerator : TSCH3DValueEnumerator
{
    TSCHChartAxis *mAxis;
    TSCH3DAxisLabelKind *mKind;
}

+ (id)enumeratorWithAxis:(id)arg1 kind:(id)arg2;
@property(readonly, nonatomic) TSCH3DAxisLabelKind *kind; // @synthesize kind=mKind;
- (int)labelPosition;
- (_Bool)shouldRender;
- (id)stringForLabelResources:(id)arg1;
- (id)string;
- (void)update;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithAxis:(id)arg1 kind:(id)arg2;

@end

