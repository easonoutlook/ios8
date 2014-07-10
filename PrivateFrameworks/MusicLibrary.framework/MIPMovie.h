/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class MIPArtist, NSString;

@interface MIPMovie : PBCodable <NSCopying>
{
    long long _rentalDuration;
    long long _rentalPlaybackDuration;
    long long _rentalPlaybackStartedDateTime;
    long long _rentalStartedDateTime;
    MIPArtist *_artist;
    int _audioLanguage;
    int _audioTrackId;
    int _audioTrackIndex;
    NSString *_extendedContentName;
    NSString *_movieInfo;
    int _subtitleLanguage;
    int _subtitleTrackIndex;
    int _videoQuality;
    _Bool _hasAlternateAudio;
    _Bool _hasChapterData;
    _Bool _hasSubtitles;
    _Bool _rental;
    struct {
        unsigned int rentalDuration:1;
        unsigned int rentalPlaybackDuration:1;
        unsigned int rentalPlaybackStartedDateTime:1;
        unsigned int rentalStartedDateTime:1;
        unsigned int audioLanguage:1;
        unsigned int audioTrackId:1;
        unsigned int audioTrackIndex:1;
        unsigned int subtitleLanguage:1;
        unsigned int subtitleTrackIndex:1;
        unsigned int videoQuality:1;
        unsigned int hasAlternateAudio:1;
        unsigned int hasChapterData:1;
        unsigned int hasSubtitles:1;
        unsigned int rental:1;
    } _has;
}

@property(nonatomic) long long rentalStartedDateTime; // @synthesize rentalStartedDateTime=_rentalStartedDateTime;
@property(nonatomic) long long rentalPlaybackStartedDateTime; // @synthesize rentalPlaybackStartedDateTime=_rentalPlaybackStartedDateTime;
@property(nonatomic) long long rentalPlaybackDuration; // @synthesize rentalPlaybackDuration=_rentalPlaybackDuration;
@property(nonatomic) long long rentalDuration; // @synthesize rentalDuration=_rentalDuration;
@property(nonatomic) int subtitleTrackIndex; // @synthesize subtitleTrackIndex=_subtitleTrackIndex;
@property(nonatomic) int subtitleLanguage; // @synthesize subtitleLanguage=_subtitleLanguage;
@property(nonatomic) int audioTrackId; // @synthesize audioTrackId=_audioTrackId;
@property(nonatomic) int audioTrackIndex; // @synthesize audioTrackIndex=_audioTrackIndex;
@property(nonatomic) int audioLanguage; // @synthesize audioLanguage=_audioLanguage;
@property(nonatomic) _Bool hasSubtitles; // @synthesize hasSubtitles=_hasSubtitles;
@property(nonatomic) _Bool hasAlternateAudio; // @synthesize hasAlternateAudio=_hasAlternateAudio;
@property(retain, nonatomic) NSString *movieInfo; // @synthesize movieInfo=_movieInfo;
@property(retain, nonatomic) NSString *extendedContentName; // @synthesize extendedContentName=_extendedContentName;
@property(nonatomic) _Bool hasChapterData; // @synthesize hasChapterData=_hasChapterData;
@property(nonatomic) _Bool rental; // @synthesize rental=_rental;
@property(nonatomic) int videoQuality; // @synthesize videoQuality=_videoQuality;
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
@property(nonatomic) _Bool hasRentalStartedDateTime;
@property(nonatomic) _Bool hasRentalPlaybackStartedDateTime;
@property(nonatomic) _Bool hasRentalPlaybackDuration;
@property(nonatomic) _Bool hasRentalDuration;
@property(nonatomic) _Bool hasSubtitleTrackIndex;
@property(nonatomic) _Bool hasSubtitleLanguage;
@property(nonatomic) _Bool hasAudioTrackId;
@property(nonatomic) _Bool hasAudioTrackIndex;
@property(nonatomic) _Bool hasAudioLanguage;
@property(nonatomic) _Bool hasHasSubtitles;
@property(nonatomic) _Bool hasHasAlternateAudio;
@property(readonly, nonatomic) _Bool hasMovieInfo;
@property(readonly, nonatomic) _Bool hasExtendedContentName;
@property(nonatomic) _Bool hasHasChapterData;
@property(nonatomic) _Bool hasRental;
@property(nonatomic) _Bool hasVideoQuality;
@property(readonly, nonatomic) _Bool hasArtist;

@end

