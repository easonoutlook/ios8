/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPFileDataStorage.h>

@class NSURL, SFUCryptoKey;

// Not exported
@interface TSPTemporaryDataStorage : TSPFileDataStorage
{
    NSURL *_URL;
    SFUCryptoKey *_decryptionKey;
    _Bool _gilligan_isRemote;
    _Bool _isMissingData;
}

@property(nonatomic) _Bool isMissingData; // @synthesize isMissingData=_isMissingData;
- (void)setGilligan_isRemote:(_Bool)arg1;
- (_Bool)gilligan_isRemote;
- (void).cxx_destruct;
- (_Bool)writeData:(id)arg1 toBundleWriter:(id)arg2 preferredFilename:(id)arg3 filename:(id *)arg4 didCopyDataToBundle:(_Bool *)arg5;
- (void)performIOChannelReadWithAccessor:(id)arg1;
- (void)performReadWithAccessor:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 decryptionKey:(id)arg2;

@end

