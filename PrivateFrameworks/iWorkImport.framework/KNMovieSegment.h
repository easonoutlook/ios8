/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSPData;

// Not exported
@interface KNMovieSegment : NSObject
{
    TSPData *mMovieData;
    double mStartTime;
}

@property(readonly, nonatomic) double startTime; // @synthesize startTime=mStartTime;
@property(readonly, nonatomic) TSPData *movieData; // @synthesize movieData=mMovieData;
- (id)movieSegmentByAddingTimeOffset:(double)arg1;
@property(readonly, nonatomic, getter=isEmptySegment) _Bool emptySegment;
- (void)dealloc;
- (id)init;
- (id)initEmptySegmentWithStartTime:(double)arg1;
- (id)initWithMovieData:(id)arg1 startTime:(double)arg2;
- (void)saveToArchive:(struct MovieSegmentArchive *)arg1 archiver:(id)arg2;
- (id)initWithContext:(id)arg1 archive:(const struct MovieSegmentArchive *)arg2 unarchiver:(id)arg3;

@end

