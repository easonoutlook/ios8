/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "AVPlayerItemLegibleOutputPushDelegate-Protocol.h"

// Not exported
@interface WebCoreAVFMovieObserver : NSObject <AVPlayerItemLegibleOutputPushDelegate>
{
    struct MediaPlayerPrivateAVFoundationObjC *m_callback;
    int m_delayCallbacks;
}

- (void)outputSequenceWasFlushed:(id)arg1;
- (void)legibleOutput:(id)arg1 didOutputAttributedStrings:(id)arg2 nativeSampleBuffers:(id)arg3 forItemTime:(CDStruct_198678f7)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(int)arg4;
- (void)didEnd:(id)arg1;
- (void)metadataLoaded;
- (void)disconnect;
- (id)initWithCallback:(struct MediaPlayerPrivateAVFoundationObjC *)arg1;

@end
