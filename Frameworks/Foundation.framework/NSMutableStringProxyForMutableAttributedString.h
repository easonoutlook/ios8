/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Foundation/NSMutableString.h>

@class NSMutableAttributedString;

@interface NSMutableStringProxyForMutableAttributedString : NSMutableString
{
    NSMutableAttributedString *mutableAttributedString;
}

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (void)finalize;
- (void)dealloc;
- (id)initWithMutableAttributedString:(id)arg1;

@end

