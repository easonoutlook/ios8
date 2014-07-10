/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface DAFolder : NSObject
{
    _Bool _isDefault;
    _Bool _hasRemoteChanges;
    NSString *_folderName;
    NSString *_folderID;
    NSString *_parentFolderID;
    long long _dataclass;
}

@property(nonatomic) _Bool hasRemoteChanges; // @synthesize hasRemoteChanges=_hasRemoteChanges;
@property(nonatomic) _Bool isDefault; // @synthesize isDefault=_isDefault;
@property(nonatomic) long long dataclass; // @synthesize dataclass=_dataclass;
@property(copy, nonatomic) NSString *parentFolderID; // @synthesize parentFolderID=_parentFolderID;
@property(copy, nonatomic) NSString *folderID; // @synthesize folderID=_folderID;
@property(copy, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)parentMailboxID;
- (id)mailboxID;

@end

