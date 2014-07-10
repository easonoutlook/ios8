/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSTimer;

@interface HSMediaLibraryImportObserver : NSObject
{
    NSTimer *_updateTimer;
    unsigned long long _consecutiveUpdateFailures;
    _Bool _stopped;
    _Bool _updating;
    id <HSMediaLibraryImportObserverDelegate> _delegate;
    double _updateInterval;
}

@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(readonly, nonatomic, getter=isUpdating) _Bool updating; // @synthesize updating=_updating;
@property(nonatomic) id <HSMediaLibraryImportObserverDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_updateImportStatus:(id)arg1;
- (void)stopUpdating;
- (void)beginUpdating;
- (void)dealloc;
- (id)init;

@end

