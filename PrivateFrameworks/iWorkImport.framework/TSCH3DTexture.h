/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class TSCH3DResource, TSCH3DTextureResource;

// Not exported
@interface TSCH3DTexture : NSObject
{
    TSCH3DTextureResource *mTextureResource;
}

- (id)optimizedMipmapBuffer;
- (_Bool)canLoadCachedFullMipmapBufferForDataCache:(id)arg1;
- (void)resetResource;
@property(readonly, nonatomic) TSCH3DResource *resource; // @dynamic resource;
- (_Bool)hasCompleteData;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

