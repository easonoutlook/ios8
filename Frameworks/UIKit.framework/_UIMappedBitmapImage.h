/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIImage.h>

@class NSData;

// Not exported
@interface _UIMappedBitmapImage : UIImage
{
    NSData *_data;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_configureImage:(id)arg1;
- (void)_preheatBitmapData;
- (void)dealloc;

@end

