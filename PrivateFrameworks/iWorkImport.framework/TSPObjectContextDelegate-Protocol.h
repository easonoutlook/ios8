/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "TSPSupportDirectoryDelegate-Protocol.h"

@class NSUUID;

@protocol TSPObjectContextDelegate <TSPSupportDirectoryDelegate>

@optional
@property(readonly, nonatomic) _Bool preserveDocumentRevisionIdentifierForSequenceZero;
@property(readonly, nonatomic) NSUUID *baseUUIDForObjectUUID;
@property(readonly, nonatomic) _Bool canUpgradeDocumentSupport;
@property(readonly, nonatomic) _Bool areNewExternalReferencesToDataAllowed;
@property(readonly, nonatomic) _Bool isDocumentSupportTemporary;
@property(readonly, nonatomic) _Bool ignoreDocumentSupport;
@property(readonly, nonatomic) id <NSFilePresenter> filePresenter;
- (void)gilligan_data:(id)arg1 didMoveFromPackageIdentifier:(unsigned char)arg2 packageLocator:(id)arg3 toPackageIdentifier:(unsigned char)arg4 packageLocator:(id)arg5;
- (_Bool)gilligan_isRemoteData:(id)arg1;
- (void)context:(id)arg1 didDownloadDocumentResources:(id)arg2 failedOrCancelledDocumentResources:(id)arg3 error:(id)arg4;
- (id)persistenceWarningsForData:(id)arg1 isReadable:(_Bool)arg2 isExternal:(_Bool)arg3;
- (_Bool)areExternalReferencesToDataAllowedAtURL:(id)arg1;
- (id)documentPasswordHintForWrite;
- (id)additionalDocumentPropertiesForWrite;
- (id)packageDataForWrite;
- (void)decryptedDocumentWithKey:(id)arg1;
- (_Bool)retrievePassphraseWithConsumer:(id)arg1;
- (void)didLoadDocumentWrittenByPreviousVersion;
- (void)makeDocumentReadOnly;
- (void)addPersistenceWarnings:(id)arg1;
- (void)presentPersistenceError:(id)arg1;
@end

