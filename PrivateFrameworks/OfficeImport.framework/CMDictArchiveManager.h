/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CMArchiveManager.h>

@class NSMutableDictionary, NSMutableString, NSString;

// Not exported
@interface CMDictArchiveManager : CMArchiveManager
{
    NSMutableString *mCssString;
    NSMutableDictionary *mStyleCache;
    NSMutableDictionary *mResources;
    NSString *mPrefix;
    NSString *mResourceUrlProtocol;
    NSMutableString *mMainHtml;
    NSString *mName;
    _Bool mIsFrameset;
}

- (id)cssStylesheetString;
- (void)pushCssToPath:(id)arg1;
- (void)addCssStyle:(id)arg1 withName:(id)arg2;
- (id)addCssStyle:(id)arg1;
- (id)resourceUrlProtocol;
- (unsigned long long)resourceCount;
- (id)copyDictionaryWithSizeInfos:(_Bool)arg1;
- (void)pushText:(id)arg1 toPath:(id)arg2;
- (void)pushData:(id)arg1 toPath:(id)arg2;
- (id)copyResourceWithName:(id)arg1;
- (id)name;
- (void)setIsFrameset;
- (void)dealloc;
- (id)initWithName:(id)arg1 resourcePathPrefix:(id)arg2;

@end

