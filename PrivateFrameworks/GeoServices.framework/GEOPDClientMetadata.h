/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "PBCodable.h"

#import "NSCopying-Protocol.h"

@class GEOLatLng, NSMutableArray, NSString;

@interface GEOPDClientMetadata : PBCodable <NSCopying>
{
    NSString *_deviceCountryCode;
    NSString *_deviceDisplayLocale;
    NSMutableArray *_deviceInstalledKeyboardLocales;
    NSString *_deviceKeyboardLocale;
    GEOLatLng *_deviceLocation;
    NSString *_deviceSpokenLocale;
    unsigned int _timeSinceMapEnteredForeground;
    struct {
        unsigned int timeSinceMapEnteredForeground:1;
    } _has;
}

@property(nonatomic) unsigned int timeSinceMapEnteredForeground; // @synthesize timeSinceMapEnteredForeground=_timeSinceMapEnteredForeground;
@property(retain, nonatomic) NSMutableArray *deviceInstalledKeyboardLocales; // @synthesize deviceInstalledKeyboardLocales=_deviceInstalledKeyboardLocales;
@property(retain, nonatomic) NSString *deviceSpokenLocale; // @synthesize deviceSpokenLocale=_deviceSpokenLocale;
@property(retain, nonatomic) NSString *deviceKeyboardLocale; // @synthesize deviceKeyboardLocale=_deviceKeyboardLocale;
@property(retain, nonatomic) NSString *deviceDisplayLocale; // @synthesize deviceDisplayLocale=_deviceDisplayLocale;
@property(retain, nonatomic) GEOLatLng *deviceLocation; // @synthesize deviceLocation=_deviceLocation;
@property(retain, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasTimeSinceMapEnteredForeground;
- (id)deviceInstalledKeyboardLocaleAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceInstalledKeyboardLocalesCount;
- (void)addDeviceInstalledKeyboardLocale:(id)arg1;
- (void)clearDeviceInstalledKeyboardLocales;
@property(readonly, nonatomic) _Bool hasDeviceSpokenLocale;
@property(readonly, nonatomic) _Bool hasDeviceKeyboardLocale;
@property(readonly, nonatomic) _Bool hasDeviceDisplayLocale;
@property(readonly, nonatomic) _Bool hasDeviceLocation;
@property(readonly, nonatomic) _Bool hasDeviceCountryCode;
- (void)dealloc;
- (id)initWithTraits:(id)arg1;

@end

