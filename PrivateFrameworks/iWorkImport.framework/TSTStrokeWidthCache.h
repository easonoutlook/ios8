/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSTStrokeWidthCache : NSObject
{
    unsigned int mCount;
    struct _opaque_pthread_rwlock_t mLock;
    vector_3f7ffb82 mStrokeWidth;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)invalidate;
- (void)setStrokeWidth:(double)arg1 forGridIndex:(unsigned int)arg2;
- (double)strokeWidthForGridIndex:(unsigned int)arg1;
- (void)dealloc;
- (id)init;

@end
