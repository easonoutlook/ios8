/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray;

// Not exported
@interface TSCHFillSetRegistry : NSObject
{
    NSArray *mColorFillSets;
    NSArray *mImageFillSets;
    NSArray *mTextureFillSets;
}

+ (void)asyncPreloadRegistry;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
+ (id)_singletonAlloc;
@property(readonly, nonatomic) NSArray *textureFillSets; // @synthesize textureFillSets=mTextureFillSets;
@property(readonly, nonatomic) NSArray *imageFillSets; // @synthesize imageFillSets=mImageFillSets;
@property(readonly, nonatomic) NSArray *colorFillSets; // @synthesize colorFillSets=mColorFillSets;
- (id)fillSetWithLookupString:(id)arg1;
- (id)p_fillSetsFromPaths:(id)arg1 fillSetClass:(Class)arg2;
- (id)p_sortFillSets:(id)arg1 forClass:(Class)arg2;
- (id)p_arrayWithExistingBundlesInPathArray:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)autorelease;
- (oneway void)release;
- (unsigned long long)retainCount;
- (id)retain;

@end

