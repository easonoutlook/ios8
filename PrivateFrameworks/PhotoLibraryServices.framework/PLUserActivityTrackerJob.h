/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLDaemonJob.h>

@class NSArray, NSString;

@interface PLUserActivityTrackerJob : PLDaemonJob
{
    long long _activity;
    NSArray *_uuids;
    NSString *_clientID;
}

+ (id)persistentStoreCoordinator;
+ (id)managedObjectModel;
+ (id)managedObjectContext;
+ (id)_uuidsFilteringNulls:(id)arg1;
+ (id)_uuidsForAssets:(id)arg1;
+ (void)_noteActivity:(long long)arg1 uuid:(id)arg2;
+ (void)_noteActivity:(long long)arg1 uuids:(id)arg2;
+ (id)_queue;
+ (void)trackAlbumUUIDWasDeleted:(id)arg1;
+ (void)trackAssetUUIDsWereDeleted:(id)arg1;
+ (void)trackAssetsWereSharedViaSharedPhotoStream:(id)arg1;
+ (void)trackAssetsWereSharedViaAssignToContact:(id)arg1;
+ (void)trackAssetsWereSharedViaCopyToPasteboard:(id)arg1;
+ (void)trackAssetsWereSharedViaPrint:(id)arg1;
+ (void)trackAssetsWereSharedViaMail:(id)arg1;
+ (void)trackAssetsWereSharedViaMessage:(id)arg1;
+ (void)trackAssetsWereSharedViaTudou:(id)arg1;
+ (void)trackAssetsWereSharedViaYouku:(id)arg1;
+ (void)trackAssetsWereSharedViaYouTube:(id)arg1;
+ (void)trackAssetsWereSharedViaWeibo:(id)arg1;
+ (void)trackAssetsWereSharedViaTwitter:(id)arg1;
+ (void)trackAssetsWereSharedViaFacebook:(id)arg1;
+ (void)trackPhotoWasEditedWithFilters:(id)arg1;
+ (void)trackPhotoWasEditedWithStraighten:(id)arg1;
+ (void)trackPhotoWasEditedWithCrop:(id)arg1;
+ (void)trackPhotoWasEditedWithRedEye:(id)arg1;
+ (void)trackPhotoWasEditedWithAutoEnhance:(id)arg1;
+ (void)trackPhotoWasEditedWithRotation:(id)arg1;
+ (void)trackSlalomWasEdited:(id)arg1;
+ (void)trackAssetWasLoadedViaAPI:(id)arg1;
+ (void)trackAssetWasPickedViaAPI:(id)arg1;
+ (void)trackVideoWasTrimmed:(id)arg1;
+ (void)trackPhotoWasZoomed:(id)arg1;
+ (void)trackPhotoSetAsWallpaper:(id)arg1;
+ (void)trackVideoWasPlayed:(id)arg1;
+ (void)trackPhotoWasViewed:(id)arg1;
+ (void)trackAlbumChosenForPictureFrame:(struct NSObject *)arg1;
+ (void)trackAssetContainerStartedSlideShow:(id)arg1;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID=_clientID;
@property(retain, nonatomic) NSArray *uuids; // @synthesize uuids=_uuids;
@property(nonatomic) long long activity; // @synthesize activity=_activity;
- (void)runDaemonSide;
- (void)run;
- (long long)daemonOperation;
- (id)initFromXPCObject:(id)arg1 connection:(id)arg2;
- (void)encodeToXPCObject:(id)arg1;
- (void)dealloc;

@end

