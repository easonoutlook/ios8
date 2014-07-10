/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "TSUDataFormat-Protocol.h"

@class NSString;

// Not exported
@interface OITSUDurationFormat : NSObject <NSCopying, TSUDataFormat>
{
    NSString *mFormat;
    NSString *mName;
}

+ (id)formatWithFormat:(id)arg1 name:(id)arg2;
- (void)setFormatName:(id)arg1;
- (id)formatName;
- (id)format;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithFormat:(id)arg1 name:(id)arg2;

@end

