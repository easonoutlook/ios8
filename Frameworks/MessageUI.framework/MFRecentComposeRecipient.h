/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MessageUI/MFComposeRecipient.h>

@class CRRecentContact;

@interface MFRecentComposeRecipient : MFComposeRecipient
{
    CRRecentContact *_recent;
}

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isGroup;
- (id)placeholderName;
- (id)preferredSendingAddress;
- (id)recentContact;
- (_Bool)isRemovableFromSearchResults;
- (void)dealloc;
- (id)initWithRecentContact:(id)arg1;

@end

