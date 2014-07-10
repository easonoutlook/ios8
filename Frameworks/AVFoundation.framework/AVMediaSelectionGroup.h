/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"

@class AVMediaSelectionGroupInternal, AVMediaSelectionOption, NSArray;

@interface AVMediaSelectionGroup : NSObject <NSCopying>
{
    AVMediaSelectionGroupInternal *_mediaSelectionGroup;
}

+ (id)mediaSelectionOptionsFromArray:(id)arg1 withoutMediaCharacteristics:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withMediaCharacteristics:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 filteredAndSortedAccordingToPreferredLanguages:(id)arg2;
+ (id)mediaSelectionOptionsFromArray:(id)arg1 withLocale:(id)arg2;
+ (id)playableMediaSelectionOptionsFromArray:(id)arg1;
+ (id)mediaSelectionGroupWithAsset:(id)arg1 dictionary:(id)arg2;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(_Bool)arg2;
@property(readonly, nonatomic) AVMediaSelectionOption *defaultOption;
- (_Bool)_isStreamingGroup;
- (_Bool)_matchesGroupID:(id)arg1 mediaType:(id)arg2;
- (id)_groupMediaType;
- (id)_groupID;
- (id)dictionary;
@property(readonly, nonatomic) _Bool allowsEmptySelection;
@property(readonly, nonatomic) NSArray *options;
- (id)asset;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)_weakReference;
- (id)init;

@end

