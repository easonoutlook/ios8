/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIActivityItemProvider.h"

@class NSLock, NSString, RUStationShareInformationProvider;

@interface RUStationShareMessageActivityItemProvider : UIActivityItemProvider
{
    NSLock *_lock;
    NSString *_shareMessage;
    NSString *_shareMessageSubject;
    RUStationShareInformationProvider *_shareInformationProvider;
}

@property(readonly, nonatomic) RUStationShareInformationProvider *shareInformationProvider; // @synthesize shareInformationProvider=_shareInformationProvider;
- (void).cxx_destruct;
- (_Bool)_isActivityTypeAllowed:(id)arg1;
- (id)activityViewController:(id)arg1 subjectForActivityType:(id)arg2;
- (id)item;
- (id)initWithShareInformationProvider:(id)arg1;

@end

