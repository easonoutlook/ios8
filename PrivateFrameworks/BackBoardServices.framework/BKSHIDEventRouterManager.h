/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <BackBoardServices/BKSHIDEventRouterManagerBase.h>

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase
{
    _Bool _needsFlush;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool needsFlush; // @synthesize needsFlush=_needsFlush;
- (void)_routerUpdated:(id)arg1;
- (void)_flush;
- (void)_flushTrigger;
- (void)setEventRouters:(id)arg1;
- (void)dealloc;
- (id)init;

@end

