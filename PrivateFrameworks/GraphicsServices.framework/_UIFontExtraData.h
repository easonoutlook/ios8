/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSCharacterSet, NSData;

@interface _UIFontExtraData : NSObject
{
    NSData *_latin1MappingTable;
    NSCharacterSet *_coveredCharacterSet;
    double _ascender;
    double _descender;
    double _lineHeight;
    double _lineGap;
    struct __fFlags {
        unsigned int _initialized:1;
        unsigned int _isSystemFont:1;
        unsigned int _hasKernPair:1;
        unsigned int _checkedLatin1Table:1;
        unsigned int _isIBTextStyleFont:1;
    } _fFlags;
}

- (void)dealloc;

@end

