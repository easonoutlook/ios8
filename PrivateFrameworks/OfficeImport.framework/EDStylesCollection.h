/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/EDCollection.h>

// Not exported
@interface EDStylesCollection : EDCollection
{
    unsigned long long mDefaultWorkbookStyleIndex;
}

- (void)setDefaultWorkbookStyleIndex:(unsigned long long)arg1;
- (unsigned long long)defaultWorkbookStyleIndex;
- (id)defaultWorkbookStyle;
- (void)removeAllObjects;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (unsigned long long)addObject:(id)arg1;
- (id)init;

@end

