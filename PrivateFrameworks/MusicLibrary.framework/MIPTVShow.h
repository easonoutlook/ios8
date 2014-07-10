/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class MIPArtist, MIPSeries, NSString;

@interface MIPTVShow : PBCodable <NSCopying>
{
    MIPArtist *_artist;
    int _episodeNumber;
    int _episodeSortId;
    NSString *_networkName;
    int _seasonNumber;
    MIPSeries *_series;
    int _videoQuality;
    struct {
        unsigned int episodeNumber:1;
        unsigned int episodeSortId:1;
        unsigned int seasonNumber:1;
        unsigned int videoQuality:1;
    } _has;
}

@property(retain, nonatomic) NSString *networkName; // @synthesize networkName=_networkName;
@property(nonatomic) int videoQuality; // @synthesize videoQuality=_videoQuality;
@property(nonatomic) int episodeSortId; // @synthesize episodeSortId=_episodeSortId;
@property(nonatomic) int episodeNumber; // @synthesize episodeNumber=_episodeNumber;
@property(nonatomic) int seasonNumber; // @synthesize seasonNumber=_seasonNumber;
@property(retain, nonatomic) MIPSeries *series; // @synthesize series=_series;
@property(retain, nonatomic) MIPArtist *artist; // @synthesize artist=_artist;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasNetworkName;
@property(nonatomic) _Bool hasVideoQuality;
@property(nonatomic) _Bool hasEpisodeSortId;
@property(nonatomic) _Bool hasEpisodeNumber;
@property(nonatomic) _Bool hasSeasonNumber;
@property(readonly, nonatomic) _Bool hasSeries;
@property(readonly, nonatomic) _Bool hasArtist;

@end

