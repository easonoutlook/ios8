/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface PLPhotoEditPersistenceManager : NSObject
{
}

- (id)dataFromPhotoEditModel:(id)arg1 imageWidth:(unsigned long long)arg2 imageHeight:(unsigned long long)arg3 exifOrientation:(int)arg4;
- (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
- (_Bool)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 baseOrientation:(long long)arg5;
- (_Bool)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
@property(readonly, nonatomic) NSString *latestFormatVersion;
@property(readonly, nonatomic) NSString *latestFormatIdentifier;
- (id)_allImporterClasses;
- (id)_allConverterClasses;
- (Class)_latestExporterClass;

@end

