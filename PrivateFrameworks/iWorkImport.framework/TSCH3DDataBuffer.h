/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface TSCH3DDataBuffer : NSObject
{
}

- (struct DataBufferLevelData)dataWithSizeGreaterOrEqualTo:(unsigned long long)arg1;
- (struct DataBufferLevelData)dataAtLevel:(unsigned long long)arg1;
- (struct DataBufferInfo)bufferInfo;
@property(readonly, nonatomic) _Bool hasLevels;
@property(readonly, nonatomic) tvec2_3b141483 size2;
@property(readonly, nonatomic) tvec3_c2818ced size;
@property(readonly, nonatomic) unsigned long long byteSize;
@property(readonly, nonatomic) unsigned long long elementByteSize;
@property(readonly, nonatomic) unsigned long long componentByteSize;
- (id)description;

@end

