/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSObject<OS_xpc_object>, NSString, NSURL;

@interface PKBundle : NSObject
{
    NSString *_supportPath;
    NSObject<OS_xpc_object> *__bundle;
    NSURL *_url;
}

@property(readonly) NSURL *url; // @synthesize url=_url;
@property(retain) NSObject<OS_xpc_object> *_bundle; // @synthesize _bundle=__bundle;
- (void).cxx_destruct;
@property(readonly) NSString *plugInsPath;
@property(readonly) NSString *executablePath;
- (id)bundleDirectory:(id)arg1;
@property(readonly) NSString *supportPath; // @synthesize supportPath=_supportPath;
@property(readonly) NSString *path;
@property(readonly) NSString *bundleIdentifier;
@property(readonly) NSDictionary *infoDictionary;
- (id)stringProperty:(int)arg1;
- (id)initWithXPCBundle:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initForMainBundle;

@end

