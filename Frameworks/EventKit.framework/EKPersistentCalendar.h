/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <EventKit/EKPersistentObject.h>

@class EKPersistentSource, NSSet, NSString, NSURL;

@interface EKPersistentCalendar : EKPersistentObject
{
}

+ (id)calendar;
+ (id)relations;
+ (id)defaultPropertiesToLoad;
- (_Bool)validate:(id *)arg1;
- (void)setDigest:(id)arg1;
- (id)digest;
@property(copy, nonatomic) NSString *pushKey;
@property(copy, nonatomic) NSString *subcalAccountID;
@property(copy, nonatomic) NSString *bulkRequests;
@property(copy, nonatomic) NSString *ownerIdentityLastName;
@property(copy, nonatomic) NSString *ownerIdentityFirstName;
@property(copy, nonatomic) NSURL *ownerIdentityAddress;
@property(copy, nonatomic) NSString *ownerIdentityEmail;
@property(copy, nonatomic) NSString *ownerIdentityDisplayName;
@property(copy, nonatomic) NSString *selfIdentityLastName;
@property(copy, nonatomic) NSString *selfIdentityFirstName;
@property(copy, nonatomic) NSURL *selfIdentityAddress;
@property(copy, nonatomic) NSString *selfIdentityEmail;
@property(copy, nonatomic) NSString *selfIdentityDisplayName;
@property(nonatomic) unsigned long long allowedEntityTypes;
@property(nonatomic) unsigned long long invitationStatus;
@property(retain, nonatomic) EKPersistentSource *source;
- (void)removeSharee:(id)arg1;
- (void)addSharee:(id)arg1;
@property(copy, nonatomic) NSSet *sharees;
@property(nonatomic, getter=isPublished) _Bool published;
- (void)setIsPublished:(_Bool)arg1;
@property(copy, nonatomic) NSString *publishedURL;
@property(nonatomic) long long sharingInvitationResponse;
@property(copy, nonatomic) NSURL *sharedOwnerAddress;
@property(copy, nonatomic) NSString *sharedOwnerName;
@property(nonatomic) long long sharingStatus;
@property(readonly, nonatomic) _Bool isDefaultCalendarForSource;
@property(nonatomic) _Bool isIgnoringEventAlerts;
@property(nonatomic) _Bool isIgnoringSharedCalendarNotifications;
@property(nonatomic) _Bool isMarkedImmutableSharees;
@property(nonatomic) _Bool isMarkedUndeletable;
@property(nonatomic) _Bool isFamilyCalendar;
@property(nonatomic) _Bool isHolidaySubscribedCalendar;
@property(nonatomic) _Bool isFacebookBirthdayCalendar;
@property(nonatomic) _Bool schedulingProhibited;
@property(nonatomic) _Bool canBeShared;
@property(nonatomic) _Bool canBePublished;
@property(nonatomic, getter=isSharingInvitation) _Bool sharingInvitation;
@property(nonatomic, getter=isImmutable) _Bool immutable;
@property(nonatomic, getter=isHidden) _Bool hidden;
@property(nonatomic, getter=isSubscribed) _Bool subscribed;
@property(nonatomic) _Bool prohibitsScheduling;
@property(nonatomic) _Bool allowsContentModifications;
- (id)description;
@property(nonatomic) int displayOrder;
- (void)setUUID:(id)arg1;
@property(readonly, nonatomic) NSString *UUID;
@property(copy, nonatomic) NSString *colorString;
@property(copy, nonatomic) NSString *symbolicColorName;
@property(nonatomic, getter=isColorDisplayOnly) _Bool colorDisplayOnly;
@property(copy, nonatomic) NSString *title;
@property(copy, nonatomic) NSString *externalModificationTag;
@property(copy, nonatomic) NSString *externalID;
- (int)entityType;
- (id)init;

@end

