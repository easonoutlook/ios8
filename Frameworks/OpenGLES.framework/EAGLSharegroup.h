/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface EAGLSharegroup : NSObject
{
    struct _EAGLSharegroupPrivate *_private;
    NSString *debugLabel;
}

@property(copy, nonatomic) NSString *debugLabel; // @synthesize debugLabel;
- (struct __GLISharedRec *)getGLIShared;
- (unsigned long long)APIs;
- (void)dealloc;
- (id)initWithAPI:(unsigned long long)arg1 sharedWithCompute:(_Bool)arg2;
- (id)initWithAPI:(unsigned long long)arg1;
- (id)init;
- (void)loadGLIPlugin:(struct __GLDPixelFormatRec *)arg1 sharedWithCompute:(_Bool)arg2;

@end

