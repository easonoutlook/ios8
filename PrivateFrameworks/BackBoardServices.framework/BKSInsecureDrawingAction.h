/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "BSAction.h"

@class NSArray;

@interface BKSInsecureDrawingAction : BSAction
{
}

- (id)keyDescriptionForSetting:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *processIds;
- (id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(id)arg4;
- (id)initWithInsecureProcessIds:(id)arg1;

@end

