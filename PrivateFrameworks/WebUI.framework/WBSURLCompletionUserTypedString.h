/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface WBSURLCompletionUserTypedString : NSObject
{
    NSString *_string;
    const unsigned short *_unichars;
    const char *_chars;
    int _length;
    _Bool _containsAnySpaces;
    _Bool _ownsUnichars;
    _Bool _ownsChars;
}

+ (void)initialize;
@property(readonly, nonatomic) NSString *normalizedString; // @synthesize normalizedString=_string;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithString:(id)arg1;

@end

