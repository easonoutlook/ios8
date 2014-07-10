/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "MPUProspectivePlaybackInformation.h"

@class RadioStation;

@interface RUProspectivePlaybackInformation : MPUProspectivePlaybackInformation
{
    RadioStation *_radioStation;
}

@property(readonly, nonatomic) RadioStation *radioStation; // @synthesize radioStation=_radioStation;
- (void).cxx_destruct;
- (_Bool)isRadioProspectivePlaybackInformation;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRadioStation:(id)arg1;
- (id)init;

@end
