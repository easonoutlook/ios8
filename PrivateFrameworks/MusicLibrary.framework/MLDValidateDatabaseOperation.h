/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSOperation.h"

@class ML3MusicLibrary, NSError;

@interface MLDValidateDatabaseOperation : NSOperation
{
    _Bool _success;
    ML3MusicLibrary *_library;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
- (void).cxx_destruct;
- (void)main;
- (id)initWithLibrary:(id)arg1;

@end

