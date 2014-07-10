/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class BRCItemID, BRFieldCKInfo, NSData, NSString;

@interface BRCStatInfo : NSObject <NSCopying, NSSecureCoding>
{
    BRFieldCKInfo *_ckInfo;
    BRCItemID *_parentID;
    BOOL _state;
    BOOL _type;
    BOOL _mode;
    int _creator;
    long long _birthtime;
    NSString *_filenameOrAliasTarget;
    _Bool _hiddenExt;
    NSData *_xattrSignature;
    NSData *_finderTags;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSData *finderTags; // @synthesize finderTags=_finderTags;
@property(retain, nonatomic) NSData *xattrSignature; // @synthesize xattrSignature=_xattrSignature;
@property(nonatomic, getter=isHiddenExt) _Bool hiddenExt; // @synthesize hiddenExt=_hiddenExt;
@property(retain, nonatomic) NSString *filename; // @synthesize filename=_filenameOrAliasTarget;
@property(retain, nonatomic) BRCItemID *parentID; // @synthesize parentID=_parentID;
@property(nonatomic) long long birthtime; // @synthesize birthtime=_birthtime;
@property(nonatomic) int creator; // @synthesize creator=_creator;
@property(nonatomic) BOOL mode; // @synthesize mode=_mode;
@property(nonatomic) BOOL type; // @synthesize type=_type;
@property(nonatomic) BOOL state; // @synthesize state=_state;
@property(retain, nonatomic) BRFieldCKInfo *ckInfo; // @synthesize ckInfo=_ckInfo;
- (void).cxx_destruct;
- (_Bool)isWritable;
- (_Bool)isExecutable;
- (unsigned long long)diffAgainst:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)check:(id)arg1 logToFile:(struct __sFILE *)arg2;
- (_Bool)checkStateWithItemID:(id)arg1 logToFile:(struct __sFILE *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStatInfo:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)description;
- (id)descriptionWithContext:(id)arg1;
@property(readonly, nonatomic) BRCItemID *aliasTargetItemID;
@property(readonly, nonatomic) NSString *aliasTargetContainerID;
@property(readonly, nonatomic) NSString *aliasTargetZoneName;
@property(readonly, nonatomic) NSString *displayName;

@end

