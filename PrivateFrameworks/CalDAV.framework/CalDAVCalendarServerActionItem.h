/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVItem.h"

@class CalDAVCalendarServerCancelItem, CalDAVCalendarServerReplyItem, CalDAVCalendarServerUpdateItem, CoreDAVItemWithNoChildren;

@interface CalDAVCalendarServerActionItem : CoreDAVItem
{
    CoreDAVItemWithNoChildren *_create;
    CalDAVCalendarServerUpdateItem *_update;
    CalDAVCalendarServerCancelItem *_cancel;
    CalDAVCalendarServerReplyItem *_reply;
}

@property(retain, nonatomic) CalDAVCalendarServerCancelItem *cancel; // @synthesize cancel=_cancel;
@property(retain, nonatomic) CalDAVCalendarServerReplyItem *reply; // @synthesize reply=_reply;
@property(retain, nonatomic) CalDAVCalendarServerUpdateItem *update; // @synthesize update=_update;
@property(retain, nonatomic) CoreDAVItemWithNoChildren *create; // @synthesize create=_create;
- (id)copyParseRules;
- (id)description;
- (void)dealloc;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;
- (id)init;

@end

