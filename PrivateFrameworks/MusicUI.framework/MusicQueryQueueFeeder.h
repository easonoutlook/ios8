/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPMediaQueryQueueFeeder.h"

@class MPMediaPlaylist;

@interface MusicQueryQueueFeeder : MPMediaQueryQueueFeeder
{
}

- (unsigned long long)realShuffleType;
- (unsigned long long)realRepeatType;
- (id)playbackInfoAtIndex:(unsigned long long)arg1;
- (Class)itemClass;
- (id)errorResolverForItem:(id)arg1;
- (id)init;
@property(retain, nonatomic) MPMediaPlaylist *mixPlaylist;

@end

