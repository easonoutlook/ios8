/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, OITSUNoCopyDictionary;

// Not exported
@interface WDFontTable : NSObject
{
    OITSUNoCopyDictionary *mFontTable;
    NSMutableArray *mFontsInOrderOfInsertion;
}

- (id)fonts;
- (id)createFontWithName:(id)arg1;
- (id)fontWithName:(id)arg1 create:(_Bool)arg2;
- (id)fontWithName:(id)arg1;
- (void)clear;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;

@end

