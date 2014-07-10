/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GSAddition, NSDictionary, NSURL;

@interface QLThumbnailAddition : NSObject
{
    NSURL *_additionURL;
    NSDictionary *_metadata;
    GSAddition *_addition;
}

+ (_Bool)setThumbnailsDictionary:(id)arg1 forURL:(id)arg2 error:(id *)arg3;
+ (id)thumbnailsDictionaryForURL:(id)arg1 error:(id *)arg2;
+ (Class)imageClassWithError:(id *)arg1;
+ (_Bool)removeAdditionsOnURL:(id)arg1 error:(id *)arg2;
+ (_Bool)_removedAdditionsOnURL:(id)arg1;
+ (_Bool)_removedAdditionsOnURLUsingDaemon:(id)arg1;
+ (_Bool)_removeAdditionsOnURLUsingDaemon:(id)arg1 error:(id *)arg2;
+ (_Bool)_removeAdditionsOnURLDirectly:(id)arg1 error:(id *)arg2;
+ (_Bool)associateThumbnailStoreAtURL:(id)arg1 withDocumentAtURL:(id)arg2 error:(id *)arg3;
+ (_Bool)_associateThumbnailStoreAtURLUsingDaemon:(id)arg1 withDocumentAtURL:(id)arg2 error:(id *)arg3;
+ (_Bool)_associateThumbnailStoreAtURLDirectly:(id)arg1 withDocumentAtURL:(id)arg2 error:(id *)arg3;
+ (_Bool)associateImage:(struct CGImage *)arg1 metadata:(id)arg2 withURL:(id)arg3 error:(id *)arg4;
+ (_Bool)imageContainsAlpha:(struct CGImage *)arg1;
+ (_Bool)makeAdditionFromStagingURL:(id)arg1 metadata:(id)arg2 inStorage:(id)arg3 error:(id *)arg4;
+ (_Bool)associateThumbnailImagesDictionary:(id)arg1 serializedQuickLookMetadata:(id)arg2 withDocumentAtURL:(id)arg3 error:(id *)arg4;
+ (_Bool)_hitAdditionsOnURL:(id)arg1 error:(id *)arg2;
+ (_Bool)_hitAdditionsOnURLUsingDaemon:(id)arg1 error:(id *)arg2;
+ (id)_additionCreationInfo;
@property(retain) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(retain) NSURL *additionURL; // @synthesize additionURL=_additionURL;
- (id)thumbnailsDictionaryWithError:(id *)arg1;
- (struct CGImage *)thumbnailWithMaximumDimension:(double)arg1 properties:(id *)arg2 flavor:(int *)arg3 contentRect:(struct CGRect *)arg4;
- (void *)cacheVersion;
- (id)initWithAdditionsPresentOnURL:(id)arg1 error:(id *)arg2;
- (_Bool)_initWithAdditionsPresentOnURLUsingDaemon:(id)arg1 error:(id *)arg2;
- (_Bool)_initWithAdditionsPresentOnURLDirectly:(id)arg1 error:(id *)arg2;
- (void)dealloc;

@end

