/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iCalendar/ICSProperty.h>

@class ICSDateValue, NSString;

@interface ICSUserAddress : ICSProperty
{
}

+ (id)ICSStringFromRole:(int)arg1;
+ (id)ICSStringFromScheduleForceSend:(int)arg1;
+ (id)ICSStringFromScheduleStatus:(int)arg1;
+ (id)ICSStringFromScheduleAgent:(int)arg1;
+ (id)ICSStringFromParticipationStatus:(int)arg1;
+ (id)ICSStringFromCalendarUser:(int)arg1;
+ (int)roleFromICSString:(id)arg1;
+ (int)scheduleForceSendFromICSString:(id)arg1;
+ (int)scheduleAgentFromICSString:(id)arg1;
+ (int)scheduleStatusFromICSString:(id)arg1;
+ (int)participationStatusFromICSString:(id)arg1;
+ (int)calendarUserFromICSString:(id)arg1;
+ (id)URLForNoMail;
- (_Bool)shouldObscureValue;
- (id)parametersToObscure;
- (id)propertiesToObscure;
- (id)x_calendarserver_email;
- (void)setX_calendarserver_email:(id)arg1;
@property(retain, nonatomic) NSString *email;
@property(nonatomic) _Bool x_apple_self_invited;
@property(retain, nonatomic) ICSDateValue *partstatModified;
@property(nonatomic) _Bool rsvp;
@property(nonatomic) int role;
@property(nonatomic) int scheduleforcesend;
@property(nonatomic) int scheduleagent;
@property(nonatomic) int schedulestatus;
@property(nonatomic) int partstat;
@property(retain, nonatomic) NSString *dir;
@property(nonatomic) int cutype;
@property(retain, nonatomic) NSString *cn;
- (id)displayName;
- (id)emailAddress;
- (_Bool)isHTTPSAddress;
- (_Bool)isHTTPAddress;
- (_Bool)isEmailAddress;
- (_Bool)hasEmailAddress;
- (id)initWithEmailAddress:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)fixAddress;
- (void)setURL:(id)arg1;

@end

