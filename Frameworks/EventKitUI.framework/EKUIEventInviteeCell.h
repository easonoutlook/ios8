/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class UIActivityIndicatorView, UIImageView, UILabel;

@interface EKUIEventInviteeCell : UITableViewCell
{
    UILabel *_title;
    UILabel *_detail;
    UIImageView *_image;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
- (void)updateWithParticipantName:(id)arg1 comment:(id)arg2 isOrganizer:(_Bool)arg3 participantType:(int)arg4 participationStatus:(int)arg5 availabilityType:(long long)arg6 showSpinner:(_Bool)arg7 showParticipationStatus:(_Bool)arg8 showLeftSideImage:(_Bool)arg9;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

