/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "CoreDAVItemWithNoChildren.h"

@class NSString;

@interface CalDAVCalendarServerChangedParameterItem : CoreDAVItemWithNoChildren
{
    NSString *_nameAttribute;
    NSString *_typeAttribute;
}

@property(retain, nonatomic) NSString *typeAttribute; // @synthesize typeAttribute=_typeAttribute;
@property(retain, nonatomic) NSString *nameAttribute; // @synthesize nameAttribute=_nameAttribute;
- (void)parserFoundAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithNameSpace:(id)arg1 andName:(id)arg2;

@end

