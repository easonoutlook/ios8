/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSOperationQueue;

@interface CMAltimeterInternal : NSObject
{
    struct Dispatcher *fFilteredPressureDispatcher;
    id fRelativeAltimeterHandler;
    NSOperationQueue *fRelativeAltimeterQueue;
    struct Sample {
        double timestamp;
        CDStruct_ebf20f05 pressureData;
    } fBaseAltimeterSample;
    float fBarometricBaseAltitude;
    _Bool fBaselineReceived;
}

- (id).cxx_construct;
- (void)dealloc;
- (id)initWithInfo:(id)arg1;

@end
