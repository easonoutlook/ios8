/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSURL.h"

@interface NSURL (DAVExtensions)
+ (id)URLWithDirtyString:(id)arg1;
+ (id)URLWithScheme:(id)arg1 host:(id)arg2 port:(int)arg3 uri:(id)arg4;
+ (int)classicPortForScheme:(id)arg1;
- (_Bool)absoluteURLisEqual:(id)arg1;
- (id)URLWithoutPassword;
- (id)URLWithoutUsername;
- (id)URLWithUsername:(id)arg1;
- (id)uri;
- (id)initWithDirtyString:(id)arg1;
@end

