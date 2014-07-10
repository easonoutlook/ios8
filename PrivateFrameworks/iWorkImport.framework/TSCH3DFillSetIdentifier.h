/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

// Not exported
@interface TSCH3DFillSetIdentifier : NSObject
{
    NSString *mTextureSetID;
    unsigned long long mSeriesIndex;
    int mFillPropertyType;
}

+ (id)instanceWithDEPRECATEDArchive:(const struct DEPRECATEDChart3DFillArchive *)arg1 unarchiver:(id)arg2;
+ (id)instanceWithArchive:(const struct Chart3DFillArchive *)arg1 unarchiver:(id)arg2;
+ (id)identifierWithContentsOfDictionary:(id)arg1;
+ (id)identifierWithFillPropertyType:(int)arg1 seriesIndex:(unsigned long long)arg2 textureSetID:(id)arg3;
+ (id)identifierWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3;
@property(readonly, nonatomic) unsigned long long seriesIndex; // @synthesize seriesIndex=mSeriesIndex;
@property(readonly, nonatomic) NSString *textureSetID; // @synthesize textureSetID=mTextureSetID;
@property(readonly, nonatomic) NSString *textureSetFilename;
- (_Bool)isStoredInLocalBundle;
- (id)localDirectoryPath;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)saveToArchive:(struct Chart3DFillArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct Chart3DFillArchive *)arg1 unarchiver:(id)arg2;
- (unsigned long long)countOfSeriesInFillSet;
- (id)loadPropertiesDictionary;
- (_Bool)isSageCompatible;
- (id)p_version;
- (id)p_getPlist;
- (id)p_loadPlist;
- (id)p_plistData;
- (id)p_plistPath;
- (id)p_sageFillSetList;
- (unsigned long long)seriesIndexFromSageSeriesName:(id)arg1;
- (id)sageSeriesName;
- (id)p_sageSeriesNames;
- (int)fillPropertyTypeFromName:(id)arg1;
- (id)sageFillName;
- (id)p_sageFillPropertyNames;
- (id)dictionaryRepresentation;
- (id)initWithContentsOfDictionary:(id)arg1;
- (id)initWithFillPropertyType:(int)arg1 seriesIndex:(unsigned long long)arg2 textureSetID:(id)arg3;
- (id)initWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3;

@end

