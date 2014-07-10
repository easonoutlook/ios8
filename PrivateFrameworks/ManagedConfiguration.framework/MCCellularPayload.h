/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCPayload.h>

@class MCAPNConfiguration, NSArray;

@interface MCCellularPayload : MCPayload
{
    MCAPNConfiguration *_attachAPN;
    NSArray *_APNs;
}

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;
@property(retain, nonatomic) NSArray *APNs; // @synthesize APNs=_APNs;
@property(retain, nonatomic) MCAPNConfiguration *attachAPN; // @synthesize attachAPN=_attachAPN;
- (void).cxx_destruct;
- (id)installationWarnings;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)APNsDescription;
- (id)APNsLabel;
- (id)APNConfigurationDescription;
- (id)attachAPNConfigurationLabel;
- (id)description;
- (id)stubDictionary;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;

@end

