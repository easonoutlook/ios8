/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPDatabaseObject.h>

@class NSString, NSURL;

// Not exported
@interface TSPDatabaseObjectWithFileState : TSPDatabaseObject
{
    NSString *_fileState;
    NSURL *_packageURL;
}

- (void).cxx_destruct;
- (id)fileURL;
- (id)fileState;
- (_Bool)hasFileState;
- (long long)dataState;
- (_Bool)hasDataState;
- (id)initWithIdentifier:(long long)arg1 classType:(int)arg2 fileState:(id)arg3 packageURL:(id)arg4;

@end

