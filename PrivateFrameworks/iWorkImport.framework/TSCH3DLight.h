/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class NSString;

// Not exported
@interface TSCH3DLight : NSObject <NSCopying>
{
    NSString *mName;
    tvec4_ac57c72d mAmbientColor;
    tvec4_ac57c72d mDiffuseColor;
    tvec4_ac57c72d mSpecularColor;
    float mIntensity;
    tvec3_17f03ce0 mAttenuation;
    long long mCoordinateSpace;
    _Bool mEnabled;
}

+ (id)light;
+ (id)lightClasses;
+ (id)instanceWithArchive:(const struct Chart3DLightArchive *)arg1 unarchiver:(id)arg2;
@property(nonatomic) _Bool enabled; // @synthesize enabled=mEnabled;
@property(nonatomic) long long coordinateSpace; // @synthesize coordinateSpace=mCoordinateSpace;
@property(nonatomic) tvec3_17f03ce0 attenuation; // @synthesize attenuation=mAttenuation;
@property(nonatomic) float intensity; // @synthesize intensity=mIntensity;
@property(nonatomic) tvec4_ac57c72d specularColor; // @synthesize specularColor=mSpecularColor;
@property(nonatomic) tvec4_ac57c72d diffuseColor; // @synthesize diffuseColor=mDiffuseColor;
@property(nonatomic) tvec4_ac57c72d ambientColor; // @synthesize ambientColor=mAmbientColor;
@property(retain, nonatomic) NSString *name; // @synthesize name=mName;
- (id).cxx_construct;
- (void)affect:(id)arg1 states:(id)arg2 texturePool:(id)arg3;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (void)saveToLightArchive:(struct Chart3DLightArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchive:(struct Chart3DLightArchive *)arg1 archiver:(id)arg2;
- (id)initWithLightArchive:(const struct Chart3DLightArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DLightArchive *)arg1 unarchiver:(id)arg2;

@end

