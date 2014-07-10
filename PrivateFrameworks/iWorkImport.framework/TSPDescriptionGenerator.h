/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, NSMutableOrderedSet, NSObject<OS_dispatch_queue>, TSPObjectContext;

// Not exported
@interface TSPDescriptionGenerator : NSObject
{
    TSPObjectContext *_context;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableOrderedSet *_components;
    struct map<long long, TSP::DescriptionPrinterMessage, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, TSP::DescriptionPrinterMessage>>> _messageMap;
    NSMutableDictionary *_objects;
    NSMutableDictionary *_uuidMap;
    NSMutableDictionary *_inverseUUIDMap;
}

+ (_Bool)dumpMessagesForDocument:(id)arg1 decryptionKey:(id)arg2 toURL:(id)arg3;
+ (id)filenameForPackageIdentifier:(unsigned char)arg1;
+ (id)directoryForDocumentUUID:(id)arg1 versionUUID:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)descriptionForIdentifier:(long long)arg1;
- (_Bool)dumpComponentMessages:(id)arg1 printNewLine:(_Bool)arg2 withPrinter:(struct ReferencePrinter *)arg3 outputStream:(struct FileOutputStream *)arg4;
- (struct ReferencePrinter *)newReferencePrinter;
- (void)performPrintOperationBlock:(id)arg1;
- (_Bool)dumpMessagesToFilePath:(id)arg1;
- (_Bool)dumpMessagesForDocumentUUID:(id)arg1 versionUUID:(id)arg2 packageIdentifier:(unsigned char)arg3;
- (void)addUUIDMapEntriesForComponent:(id)arg1;
- (void)addComponent:(id)arg1;
- (id)newPrinterCustomPropertiesHandler;
- (id)newObjectIdentifierForUUIDHandler;
- (void)addObject:(id)arg1;
- (void)addMessage:(const struct Message *)arg1 withStrongReferencesMap:(hash_map_43d567e3 *)arg2 forObjectIdentifier:(long long)arg3;
- (void)addArchiver:(id)arg1;
- (map_b332c0f2 *)_messageAlternateMapFromAlternateArchivers:(id)arg1;
- (hash_map_43d567e3 *)_strongReferencesFromArchiver:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

