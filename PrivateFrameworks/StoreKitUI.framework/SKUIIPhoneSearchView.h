/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UICollectionView;

@interface SKUIIPhoneSearchView : UIView
{
    UICollectionView *_collectionView;
    UIView *_noResultsView;
    UIView *_relatedView;
}

@property(retain, nonatomic) UIView *noResultsView; // @synthesize noResultsView=_noResultsView;
@property(retain, nonatomic) UIView *relatedView; // @synthesize relatedView=_relatedView;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

