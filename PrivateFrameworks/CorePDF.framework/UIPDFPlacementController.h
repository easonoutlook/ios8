/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, UIPDFPageView;

@interface UIPDFPlacementController : NSObject
{
    NSMutableArray *_popups;
    struct CGSize _viewSize;
    UIPDFPageView *pageView;
}

@property(nonatomic) UIPDFPageView *pageView; // @synthesize pageView;
- (void)layoutViews:(double)arg1;
- (void)shift:(double)arg1;
- (id)viewAtIndex:(unsigned long long)arg1;
- (double)yForObjectAtIndex:(unsigned long long)arg1;
- (struct CGRect)boundsForObjectAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithAnnotations:(id)arg1 viewSize:(struct CGSize)arg2;

@end

