/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSData.h"

@class ML3MusicLibrary, NSOutputStream;

@interface ML3ExportSession : NSData
{
    ML3MusicLibrary *_library;
    NSOutputStream *_outputStream;
}

@property(readonly, nonatomic) NSOutputStream *outputStream; // @synthesize outputStream=_outputStream;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (id)exportPlaylistDeleted:(unsigned long long)arg1;
- (id)exportPlaylist:(unsigned long long)arg1;
- (id)exportTrackDeleted:(unsigned long long)arg1;
- (id)exportTrack:(unsigned long long)arg1;
- (id)end;
- (id)begin;
- (id)initWithLibrary:(id)arg1 outputStream:(id)arg2;

@end

