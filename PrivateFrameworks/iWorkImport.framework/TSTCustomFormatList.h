/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSTTableDataList.h>

#import "TSUCustomFormatList-Protocol.h"

@class NSMutableDictionary;

// Not exported
@interface TSTCustomFormatList : TSTTableDataList <TSUCustomFormatList>
{
    NSMutableDictionary *mNamesList;
    NSMutableDictionary *mStemMatchCustomFormats;
}

- (_Bool)rollbackLastCustomFormat:(struct TSUCustomFormat *)arg1;
- (id)newUniqueNameFromName:(id)arg1 preserveSeed:(_Bool)arg2;
- (id)newUniqueNameFromName:(id)arg1;
- (void)p_setupNamesList;
- (id)allNumberKeys;
- (unsigned int)maxKey;
- (long long)count;
- (id)customFormatWrapperForKey:(unsigned int)arg1;
- (struct TSUCustomFormat *)customFormatForKey:(unsigned int)arg1;
- (void)restoreCustomFormat:(struct TSUCustomFormat *)arg1 withOldKey:(unsigned int)arg2;
- (void)removeCustomFormatForKey:(unsigned int)arg1;
- (void)updateCustomFormat:(struct TSUCustomFormat *)arg1 withOldKey:(unsigned int)arg2;
- (void)p_removeCustomFormatForKey:(unsigned int)arg1;
- (unsigned int)importCustomFormat:(struct TSUCustomFormat *)arg1;
- (unsigned int)addPastedCustomFormat:(struct TSUCustomFormat *)arg1 withOldKey:(unsigned int)arg2;
- (unsigned int)addCustomFormat:(struct TSUCustomFormat *)arg1 allowNameOverwrite:(_Bool)arg2;
- (unsigned int)p_addCustomFormat:(struct TSUCustomFormat *)arg1 withMode:(int)arg2 lookupUsingNameStem:(_Bool)arg3;
- (_Bool)supportsIDMapForType:(int)arg1;
- (void)saveToArchiver:(id)arg1;
- (void)dealloc;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithType:(int)arg1 context:(id)arg2;
- (id)init;

@end

