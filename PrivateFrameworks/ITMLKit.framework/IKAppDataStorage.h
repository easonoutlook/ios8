/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IKAppDataStoring-Protocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface IKAppDataStorage : NSObject <IKAppDataStoring>
{
    unsigned long long _format;
    NSString *_filePath;
    NSString *_identifier;
    NSMutableDictionary *_storageDict;
    NSObject<OS_dispatch_queue> *_storageQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue; // @synthesize storageQueue=_storageQueue;
@property(retain, nonatomic) NSMutableDictionary *storageDict; // @synthesize storageDict=_storageDict;
@property(readonly, retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
- (void).cxx_destruct;
- (void)_saveDict:(id)arg1;
- (void)clear;
- (void)removeDataForKey:(id)arg1;
- (unsigned long long)setData:(id)arg1 forKey:(id)arg2;
- (id)getDataForKey:(id)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)initWithFilePath:(id)arg1 identifier:(id)arg2;

@end

