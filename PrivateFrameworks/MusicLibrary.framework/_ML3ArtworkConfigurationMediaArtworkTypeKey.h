/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

// Not exported
@interface _ML3ArtworkConfigurationMediaArtworkTypeKey : NSObject <NSCopying>
{
    unsigned int _mediaType;
    long long _artworkType;
}

+ (id)keyWithMediaType:(unsigned int)arg1 artworkType:(long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

