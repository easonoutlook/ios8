/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol TSUCustomFormatList
- (_Bool)rollbackLastCustomFormat:(struct TSUCustomFormat *)arg1;
- (id)allNumberKeys;
- (id)customFormatWrapperForKey:(unsigned int)arg1;
- (struct TSUCustomFormat *)customFormatForKey:(unsigned int)arg1;
- (void)restoreCustomFormat:(struct TSUCustomFormat *)arg1 withOldKey:(unsigned int)arg2;
- (void)removeCustomFormatForKey:(unsigned int)arg1;
- (void)updateCustomFormat:(struct TSUCustomFormat *)arg1 withOldKey:(unsigned int)arg2;
- (unsigned int)importCustomFormat:(struct TSUCustomFormat *)arg1;
- (unsigned int)addPastedCustomFormat:(struct TSUCustomFormat *)arg1 withOldKey:(unsigned int)arg2;
- (unsigned int)addCustomFormat:(struct TSUCustomFormat *)arg1 allowNameOverwrite:(_Bool)arg2;
@end
