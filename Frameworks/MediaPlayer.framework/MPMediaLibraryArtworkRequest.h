/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class ML3MusicLibrary, MPMediaLibraryArtwork, NSNumber, NSString;

@interface MPMediaLibraryArtworkRequest : NSObject
{
    unsigned long long _mediaType;
    long long _artworkType;
    unsigned long long _libraryID;
    ML3MusicLibrary *_library;
    NSString *_cachedArtworkToken;
    NSNumber *_cachedArtworkSourceType;
    MPMediaLibraryArtwork *_libraryArtwork;
    double _retrievalTime;
    long long _artistType;
}

@property(nonatomic) long long artistType; // @synthesize artistType=_artistType;
@property(nonatomic) double retrievalTime; // @synthesize retrievalTime=_retrievalTime;
@property(retain, nonatomic) MPMediaLibraryArtwork *libraryArtwork; // @synthesize libraryArtwork=_libraryArtwork;
@property(copy, nonatomic) NSNumber *cachedArtworkSourceType; // @synthesize cachedArtworkSourceType=_cachedArtworkSourceType;
@property(copy, nonatomic) NSString *cachedArtworkToken; // @synthesize cachedArtworkToken=_cachedArtworkToken;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
@property(readonly, nonatomic) unsigned long long libraryID; // @synthesize libraryID=_libraryID;
@property(readonly, nonatomic) long long artworkType; // @synthesize artworkType=_artworkType;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) unsigned long long mediaType;
- (id)initWithML3Library:(id)arg1 identifier:(unsigned long long)arg2 artworkType:(long long)arg3;
- (id)initWithLibrary:(id)arg1 identifier:(unsigned long long)arg2 artworkType:(long long)arg3;
- (id)init;

@end

