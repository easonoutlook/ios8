/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSPredicate.h"

#import "NSSecureCoding-Protocol.h"

@class NSArray, NSSet;

@interface EKPredicate : NSPredicate <NSSecureCoding>
{
    NSArray *_calendars;
    NSSet *_restrictedCalendarRowIDs;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSSet *restrictedCalendarRowIDs; // @synthesize restrictedCalendarRowIDs=_restrictedCalendarRowIDs;
@property(readonly, nonatomic) NSArray *calendars;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithCalendars:(id)arg1;

@end
