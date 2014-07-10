/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class FBSDisplay;

@interface FBUIApplicationResignActiveAssertion : NSObject
{
    _Bool _relinquished;
    FBSDisplay *_display;
    long long _reason;
}

@property(nonatomic) long long reason; // @synthesize reason=_reason;
@property(retain, nonatomic) FBSDisplay *display; // @synthesize display=_display;
- (id)description;
- (void)relinquish;
- (void)dealloc;
- (id)initWithReason:(long long)arg1 forDisplay:(id)arg2;

@end

