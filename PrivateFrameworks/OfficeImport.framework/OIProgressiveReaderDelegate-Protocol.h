/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol OIProgressiveReaderDelegate

@optional
- (void)readerDidEndDocument:(id)arg1;
- (void)readerDidReadElement:(id)arg1 atIndex:(unsigned long long)arg2 inDocument:(id)arg3 isLastElement:(_Bool)arg4;
- (void)readerDidStartDocument:(id)arg1 withElementCount:(long long)arg2;
@end

