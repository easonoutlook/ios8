/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class PUAlbumListViewController, PUAlbumListViewControllerSpec;

@interface PUAlbumPickerViewControllerSpec : NSObject
{
    unsigned long long _supportedInterfaceOrientations;
    PUAlbumListViewControllerSpec *_albumListViewControllerSpec;
}

@property(readonly, nonatomic) PUAlbumListViewControllerSpec *albumListViewControllerSpec; // @synthesize albumListViewControllerSpec=_albumListViewControllerSpec;
@property(readonly, nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)configureSessionInfo:(id)arg1;
@property(readonly, nonatomic) PUAlbumListViewController *newAlbumListViewController;

@end

