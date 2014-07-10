/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "TSPStreamingDistributableUnarchiver-Protocol.h"

@class TSPDatabase, TSPDistributableFileManager;

// Not exported
@interface TSPDistributableReader : NSObject <TSPStreamingDistributableUnarchiver>
{
    TSPDatabase *_database;
    TSPDistributableFileManager *_fileManager;
    _Bool _hasReadTangierVersionRoot;
    _Bool _isCancelled;
}

+ (_Bool)readCheckCrcFromArchiveInputStream:(id)arg1 crc:(unsigned int *)arg2 error:(id *)arg3;
- (void).cxx_destruct;
- (_Bool)_initializeNewDocumentDirectory:(id)arg1;
- (_Bool)handleFileDescriptorProtoWithInputStream:(id)arg1 length:(unsigned int)arg2 error:(id *)arg3;
- (_Bool)handleClassInfoWithClassType:(int)arg1 className:(id)arg2 isProtobufClass:(_Bool)arg3 error:(id *)arg4;
- (_Bool)handleObjectWithIdentifier:(long long)arg1 fileStateIdentifier:(id)arg2 version:(unsigned int)arg3 classType:(int)arg4 stream:(id)arg5 length:(long long)arg6 relationshipTargets:(long long *)arg7 relationshipCount:(unsigned int)arg8 error:(id *)arg9;
- (_Bool)handleArchivedVersions:(CDStruct_4bcfbbae)arg1 error:(id *)arg2;
- (_Bool)readFromDistributableArchiveStream:(id)arg1 estimatedDataLength:(long long)arg2 supplementalDataBundle:(id)arg3 error:(id *)arg4;
- (void)cancel;
- (id)initWithDestinationPath:(id)arg1;

@end

