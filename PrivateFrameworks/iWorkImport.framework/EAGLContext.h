/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EAGLSharegroup, NSString;

// Not exported
@interface EAGLContext : NSObject
{
    struct _EAGLContextPrivate *_private;
    _Bool _multiThreaded;
    unsigned long long _API;
    EAGLSharegroup *_sharegroup;
    NSString *_debugLabel;
}

+ (_Bool)setCurrentContext:(id)arg1;
+ (id)currentContext;
@property(nonatomic, getter=isMultiThreaded) _Bool multiThreaded; // @synthesize multiThreaded=_multiThreaded;
@property(copy, nonatomic) NSString *debugLabel; // @synthesize debugLabel=_debugLabel;
@property(readonly) EAGLSharegroup *sharegroup; // @synthesize sharegroup=_sharegroup;
@property(readonly) unsigned long long API; // @synthesize API=_API;
- (_Bool)presentRenderbuffer:(unsigned long long)arg1;
- (_Bool)renderbufferStorage:(unsigned long long)arg1 fromDrawable:(id)arg2;
- (id)initWithAPI:(unsigned long long)arg1 sharegroup:(id)arg2;
- (id)initWithAPI:(unsigned long long)arg1;
- (id)initForBrushes;
- (id)initForShadow;

@end

