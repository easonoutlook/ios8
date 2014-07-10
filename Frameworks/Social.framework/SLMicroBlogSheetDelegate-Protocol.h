/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol SLMicroBlogSheetDelegate
@property(copy, nonatomic) id locationInformationChangedBlock;
- (void)stopDeferringExpensiveOperations;
- (void)deferExpensiveOperations;
- (id)serviceAccountTypeIdentifier;
- (void)showSettingsIfNeeded;
- (void)sendStatus:(id)arg1 completion:(id)arg2;
- (void)fetchProfileImageDataForScreenName:(id)arg1 completion:(id)arg2;
- (void)recordsMatchingPrefixString:(id)arg1 completion:(id)arg2;
- (void)setGeotagStatus:(int)arg1;
- (void)fetchGeotagStatus:(id)arg1;
- (void)fetchCurrentImageLimits:(id)arg1;
- (void)fetchCurrentUrlLimits:(id)arg1;
- (void)fetchSessionInfo:(id)arg1;
- (void)setActiveAccountIdentifier:(id)arg1;
- (void)endPotentialLocationUse;
- (void)beginPotentialLocationUse;

@optional
- (void)ensureUserRecordStore;
- (id)cachedProfileImageDataForScreenName:(id)arg1;
- (_Bool)countMediaAttachmentsTowardCharacterCount;
- (long long)characterCountForText:(id)arg1 shortenedURLCost:(long long)arg2;
@end

