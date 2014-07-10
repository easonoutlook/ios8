/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol SKUIItemCollectionDelegate <NSObject>
- (struct _NSRange)visibleItemRangeForItemCollectionController:(id)arg1;
- (struct _NSRange)itemCollectionController:(id)arg1 itemPageRangeForOffset:(struct CGPoint)arg2;
- (id)itemCollectionController:(id)arg1 cellLayoutForItemIndex:(long long)arg2;

@optional
- (_Bool)shouldCacheAheadWhenIdleForItemCollectionController:(id)arg1;
- (id)itemCollectionController:(id)arg1 screenshotForItem:(id)arg2;
- (void)itemCollectionController:(id)arg1 applyScreenshotImage:(id)arg2 toCellLayout:(id)arg3;
@end

