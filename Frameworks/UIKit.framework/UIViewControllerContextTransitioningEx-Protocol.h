/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewControllerContextTransitioning-Protocol.h"

@class NSArray;

@protocol UIViewControllerContextTransitioningEx <UIViewControllerContextTransitioning>
@property(nonatomic, getter=_allowUserInteraction, setter=_setAllowUserInteraction:) _Bool _allowUserInteraction;
@property(nonatomic, setter=_setPercentOffset:) double _percentOffset;
@property(retain, nonatomic, setter=_setContainerViews:) NSArray *_containerViews;
- (void)_interactivityDidChange:(_Bool)arg1;
- (void)__runAlongsideAnimations;
@end

