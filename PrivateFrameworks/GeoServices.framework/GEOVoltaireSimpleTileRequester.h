/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GeoServices/GEOSimpleTileRequester.h>

#import "NSURLConnectionDelegate-Protocol.h"

// Not exported
@interface GEOVoltaireSimpleTileRequester : GEOSimpleTileRequester <NSURLConnectionDelegate>
{
}

- (id)localizationURLForTileKey:(struct _GEOTileKey *)arg1;
- (id)_localizationURLForTileKey:(struct _GEOTileKey *)arg1;
- (id)urlForTileKey:(struct _GEOTileKey *)arg1;
- (unsigned int)tileEditionForKey:(struct _GEOTileKey *)arg1;
- (unsigned int)tileSetForKey:(const struct _GEOTileKey *)arg1;

@end

