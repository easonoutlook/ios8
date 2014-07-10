/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "BSSettingDescriptionProvider-Protocol.h"
#import "BSXPCCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class BSSettings, NSError;

@interface BSActionResponse : NSObject <NSCopying, BSXPCCoding, BSSettingDescriptionProvider>
{
    BSSettings *_info;
    NSError *_error;
}

+ (id)responseForError:(id)arg1;
+ (id)responseWithInfo:(id)arg1;
+ (id)response;
@property(readonly, retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) BSSettings *info; // @synthesize info=_info;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)valueDescriptionForFlag:(long long)arg1 object:(id)arg2 ofSetting:(unsigned long long)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithInfo:(id)arg1 error:(id)arg2;

@end
