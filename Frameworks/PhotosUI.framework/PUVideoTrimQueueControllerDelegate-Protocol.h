/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol PUVideoTrimQueueControllerDelegate <NSObject>

@optional
- (void)controller:(id)arg1 didCancelTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 didFinishTrimmingVideoSources:(id)arg2;
- (void)controller:(id)arg1 didTrimVideoFromSource:(id)arg2;
- (void)controller:(id)arg1 willTrimVideoFromSource:(id)arg2;
@end

