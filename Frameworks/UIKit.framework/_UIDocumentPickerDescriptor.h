/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSExtension, NSString;

// Not exported
@interface _UIDocumentPickerDescriptor : NSObject
{
    NSArray *_supportedContentTypes;
    NSExtension *_extension;
}

+ (id)defaultPickerDescriptor;
+ (id)allPickersForMode:(unsigned long long)arg1 documentTypes:(id)arg2;
+ (id)allPickers;
@property(retain, nonatomic) NSExtension *extension; // @synthesize extension=_extension;
@property(copy, nonatomic) NSArray *supportedContentTypes; // @synthesize supportedContentTypes=_supportedContentTypes;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(nonatomic) _Bool enabled;
- (id)_extensionValueOfClass:(Class)arg1 forKey:(id)arg2;
- (id)imageWithScale:(double)arg1;
@property(readonly, copy, nonatomic) NSString *localizedName;
@property(readonly, copy, nonatomic) NSString *nonUIIdentifier;
- (id)nonUIBundle;
@property(readonly, copy, nonatomic) NSString *identifier;
- (id)_parentApp;
- (id)_ownBundle;
- (_Bool)supportsPickerMode:(unsigned long long)arg1;
- (long long)compare:(id)arg1;

@end

