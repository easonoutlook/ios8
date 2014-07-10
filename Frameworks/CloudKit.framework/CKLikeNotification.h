/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CloudKit/CKNotification.h>

#import "NSSecureCoding-Protocol.h"

@class CKShareID, CKSharedItemID, NSString;

@interface CKLikeNotification : CKNotification <NSSecureCoding>
{
    _Bool _isLike;
    CKShareID *_shareID;
    CKSharedItemID *_likedItemID;
    NSString *_likingUserID;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isLike; // @synthesize isLike=_isLike;
@property(copy, nonatomic) NSString *likingUserID; // @synthesize likingUserID=_likingUserID;
@property(copy, nonatomic) CKSharedItemID *likedItemID; // @synthesize likedItemID=_likedItemID;
@property(copy, nonatomic) CKShareID *shareID; // @synthesize shareID=_shareID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)CKPropertiesDescription;
- (id)initWithRemoteNotificationDictionary:(id)arg1;

@end

