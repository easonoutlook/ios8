/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface SLFacebookAlbum : NSObject <NSSecureCoding>
{
    _Bool _canUpload;
    _Bool _isDefaultAlbum;
    NSString *_identifier;
    NSString *_name;
    NSString *_coverPhotoIdentifier;
    long long _count;
}

+ (id)albumsWithAlbumDataDictionaries:(id)arg1;
+ (id)albumWithDataDictionary:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property _Bool isDefaultAlbum; // @synthesize isDefaultAlbum=_isDefaultAlbum;
@property _Bool canUpload; // @synthesize canUpload=_canUpload;
@property long long count; // @synthesize count=_count;
@property(retain) NSString *coverPhotoIdentifier; // @synthesize coverPhotoIdentifier=_coverPhotoIdentifier;
@property(retain) NSString *name; // @synthesize name=_name;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

