/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol CUIKSingleDayTimelineGeometryDelegate <NSObject>
@property(readonly, nonatomic) _Bool originIsUpperLeft;
@property(readonly, nonatomic) double timeWidth;
@property(readonly, nonatomic) double topPadding;
@property(readonly, nonatomic) double hourHeight;
@property(readonly, nonatomic) struct CGRect displayedRect;
- (struct CGPoint)pointForDate:(double)arg1;
- (double)dateForPoint:(struct CGPoint)arg1;
@end

