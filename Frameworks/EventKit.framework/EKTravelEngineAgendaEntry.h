/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class EKTravelAgendaItem, NSString;

// Not exported
@interface EKTravelEngineAgendaEntry : NSObject
{
    _Bool _dismissed;
    NSString *_eventExternalURL;
    EKTravelAgendaItem *_agendaItem;
}

@property(nonatomic) _Bool dismissed; // @synthesize dismissed=_dismissed;
@property(retain, nonatomic) EKTravelAgendaItem *agendaItem; // @synthesize agendaItem=_agendaItem;
@property(retain, nonatomic) NSString *eventExternalURL; // @synthesize eventExternalURL=_eventExternalURL;
- (id)description;

@end

