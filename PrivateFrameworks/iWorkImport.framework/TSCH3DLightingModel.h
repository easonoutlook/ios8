/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class TSCH3DEnvironmentPackage, TSCH3DLightingPackage, TSCH3DMaterialPackage;

// Not exported
@interface TSCH3DLightingModel : NSObject <NSCopying>
{
    TSCH3DMaterialPackage *mMaterials;
    TSCH3DLightingPackage *mLightings;
    TSCH3DEnvironmentPackage *mEnvironment;
}

+ (id)lightingModel;
+ (id)instanceWithArchive:(const struct Chart3DLightingModelArchive *)arg1 unarchiver:(id)arg2;
@property(retain, nonatomic) TSCH3DEnvironmentPackage *environment; // @synthesize environment=mEnvironment;
@property(retain, nonatomic) TSCH3DLightingPackage *lightings; // @synthesize lightings=mLightings;
@property(retain, nonatomic) TSCH3DMaterialPackage *materials; // @synthesize materials=mMaterials;
- (id)representativeMaterialLightenedByPercentage:(id)arg1;
- (id)diffuseTextureTiling;
- (id)lightingModelWithLightings:(id)arg1;
- (void)affect:(id)arg1 states:(id)arg2 scene:(id)arg3 texturePool:(id)arg4;
- (_Bool)hasCompleteData;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)clone;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)saveToArchive:(struct Chart3DLightingModelArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DLightingModelArchive *)arg1 unarchiver:(id)arg2;

@end

