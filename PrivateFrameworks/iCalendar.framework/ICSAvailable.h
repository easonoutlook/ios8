/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iCalendar/ICSComponent.h>

@class ICSDate, ICSDuration, NSArray, NSString;

@interface ICSAvailable : ICSComponent
{
}

+ (id)name;

// Remaining properties
@property(retain) NSArray *attach; // @dynamic attach;
@property(retain) NSArray *attendee; // @dynamic attendee;
@property(retain) ICSDate *created; // @dynamic created;
@property(retain) ICSDate *dtend; // @dynamic dtend;
@property(retain) ICSDate *dtstamp; // @dynamic dtstamp;
@property(retain) ICSDate *dtstart; // @dynamic dtstart;
@property(retain) ICSDuration *duration; // @dynamic duration;
@property(retain) NSArray *rrule; // @dynamic rrule;
@property(retain) NSString *uid; // @dynamic uid;

@end

