/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSCH3DTexturesMaterial.h>

// Not exported
@interface TSCH3DEmissiveMaterial : TSCH3DTexturesMaterial
{
}

+ (id)instanceWithArchive:(const struct Chart3DEmissiveMaterialArchive *)arg1 unarchiver:(id)arg2;
- (struct MaterialShaderVariables)defaultShaderVariables;
- (void)saveToArchive:(struct Chart3DEmissiveMaterialArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DEmissiveMaterialArchive *)arg1 unarchiver:(id)arg2;

@end

