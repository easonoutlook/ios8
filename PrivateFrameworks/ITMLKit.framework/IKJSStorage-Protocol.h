/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSExport-Protocol.h"

@protocol IKJSStorage <JSExport>
@property(readonly, nonatomic) unsigned long long length;
- (void)clear;
- (void)removeItem:(id)arg1;
- (void)setItem:(id)arg1:(id)arg2;
- (id)getItem:(id)arg1;
- (id)key:(unsigned long long)arg1;
@end

