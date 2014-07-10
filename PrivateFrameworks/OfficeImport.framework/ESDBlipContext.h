/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "OCDDelayedMediaContext-Protocol.h"

// Not exported
@interface ESDBlipContext : NSObject <OCDDelayedMediaContext>
{
    struct SsrwOOStream *mStream;
    unsigned int mStreamID;
    unsigned int mStartOffset;
    unsigned int mByteCount;
}

- (id)dataRep;
- (struct SsrwOOStream *)stream;
- (_Bool)loadDelayedNode:(id)arg1;
- (_Bool)saveDelayedMedia:(id)arg1 toFile:(id)arg2;
- (id)initWithOffset:(unsigned int)arg1 byteCount:(unsigned int)arg2 stream:(struct SsrwOOStream *)arg3 streamID:(unsigned int)arg4;

@end

