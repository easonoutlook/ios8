/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/TCDumpType.h>

@class NSString;

// Not exported
@interface TCDumpArray : TCDumpType
{
    int mCount;
    int mCountFieldType;
    NSString *mCountFieldName;
    int mPaddingSize;
    TCDumpType *mElementType;
}

- (void)fromBinary:(struct __sFILE *)arg1 toXml:(struct _xmlNode *)arg2 state:(id)arg3;
- (void)dealloc;
- (id)initWithCountFieldName:(id)arg1 elementType:(id)arg2;
- (id)initWithCountFieldType:(int)arg1 elementType:(id)arg2;
- (id)initWithCount:(int)arg1 elementType:(id)arg2;
- (id)initWithCount:(int)arg1 countFieldType:(int)arg2 countFieldName:(id)arg3 elementType:(id)arg4;

@end

