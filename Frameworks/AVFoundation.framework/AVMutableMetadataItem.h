/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVMetadataItem.h>

@class AVMutableMetadataItemInternal, NSDictionary, NSLocale, NSString;

@interface AVMutableMetadataItem : AVMetadataItem
{
    AVMutableMetadataItemInternal *_mutablePriv;
}

+ (id)keyPathsForValuesAffectingIdentifier;
+ (id)metadataItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy) NSDictionary *extraAttributes;
@property(copy) NSString *dataType;
@property(copy) id <NSObject><NSCopying> value;
@property CDStruct_1b6d18a9 duration;
@property CDStruct_1b6d18a9 time;
@property(copy) NSString *extendedLanguageTag;
@property(copy) NSLocale *locale;
@property(copy) NSString *identifier;
- (void)setKeySpace:(id)arg1;
- (void)setKey:(id)arg1;
- (id)keySpace;
- (id)key;

@end

