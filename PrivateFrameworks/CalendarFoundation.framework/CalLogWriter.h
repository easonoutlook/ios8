/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <CalendarFoundation/CalLogWriter-Protocol.h>

@interface CalLogWriter : NSObject <CalLogWriter>
{
    id <CalLogFormatter> _formatter;
}

@property(retain, nonatomic) id <CalLogFormatter> formatter; // @synthesize formatter=_formatter;
- (void).cxx_destruct;
- (_Bool)flush;
- (void)write:(id)arg1;
- (id)description;
- (id)initWithParameters:(id)arg1;
- (id)init;

@end

