/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSExport-Protocol.h"

@class NSData, NSURL;

@protocol SCNSceneSourceJSExport <JSExport>
+ (id)sceneSourceWithData:(id)arg1 options:(id)arg2;
+ (id)sceneSourceWithURL:(id)arg1 options:(id)arg2;
@property(readonly) NSData *data;
@property(readonly) NSURL *url;
- (id)entriesPassingTest:(id)arg1;
- (id)identifiersOfEntriesWithClass:(Class)arg1;
- (id)entryWithIdentifier:(id)arg1 withClass:(Class)arg2;
- (id)propertyForKey:(id)arg1;
- (id)sceneWithOptions:(id)arg1 error:(id *)arg2;
- (id)sceneWithOptions:(id)arg1 statusHandler:(id)arg2;
- (id)initWithData:(id)arg1 options:(id)arg2;
- (id)initWithURL:(id)arg1 options:(id)arg2;
@end

