/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ALAssetsLibraryAsset-Protocol.h"

@class ALAssetsLibrary, PLManagedAsset, PLPhotoLibrary;

// Not exported
@interface ALAssetPrivate : NSObject <ALAssetsLibraryAsset>
{
    ALAssetsLibrary *_library;
    _Bool _isValid;
    PLManagedAsset *_photo;
    PLPhotoLibrary *_photoLibrary;
}

@property(retain, nonatomic) PLPhotoLibrary *_photoLibrary; // @synthesize _photoLibrary;
@property(nonatomic) _Bool isValid; // @synthesize isValid=_isValid;
@property(retain, nonatomic) PLManagedAsset *photo; // @synthesize photo=_photo;
- (void)_performBlockAndWait:(id)arg1;
@property(readonly, nonatomic, getter=isDeletable) _Bool deletable;
- (void)libraryDidChange;
@property(nonatomic) ALAssetsLibrary *library;
- (void)dealloc;
- (id)initWithManagedAsset:(id)arg1 library:(id)arg2;

@end

