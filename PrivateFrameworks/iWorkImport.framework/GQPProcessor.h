/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GQSDocument, SFUCryptoKey, SFUZipArchive, SFUZipInflateInputStream;

// Not exported
@interface GQPProcessor : NSObject
{
    struct _xmlTextReader *mReader;
    struct _xmlParserInputBuffer {
        void *_field1;
        void *_field2;
        void *_field3;
        struct _xmlCharEncodingHandler *_field4;
        struct _xmlBuf *_field5;
        struct _xmlBuf *_field6;
        int _field7;
        int _field8;
        unsigned long long _field9;
    } *mParserInputBuffer;
    SFUZipArchive *mArchive;
    SFUCryptoKey *mCryptoKey;
    unsigned long long mTotalBytesToConsume;
    SFUZipInflateInputStream *mInputStream;
    stack_e5003a0d *mStateStack;
    stack_00018fe6 *mActionStack;
    GQSDocument *mDocumentState;
    struct __QLPreviewRequest *mOutputPreviewRequest;
    struct __CFBundle *mBundle;
    struct CGSize mThumbnailSize;
    _Bool mWrongFormat;
    unsigned char mIsProgressive;
}

+ (struct _xmlTextReader *)createXmlReaderWithPath:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3;
+ (struct _xmlTextReader *)createXmlReaderWithZipArchive:(id)arg1 indexFileName:(id)arg2 cryptoKey:(id)arg3 indexEntry:(id *)arg4 zipInputStream:(id *)arg5;
+ (void)initialize;
- (id).cxx_construct;
- (void)setWrongFormat:(_Bool)arg1;
- (_Bool)isWrongFormat;
- (void)setProgressiveMode:(unsigned char)arg1;
- (void)setThumbnailSize:(struct CGSize)arg1;
- (struct CGSize)thumbnailSize;
- (id)cryptoKey;
- (id)documentState;
- (stack_00018fe6 *)actionStack;
- (stack_e5003a0d *)stateStack;
- (_Bool)go;
- (void)setBundle:(struct __CFBundle *)arg1;
- (struct __CFBundle *)bundle;
- (id)archive;
- (void)pushInitialState;
- (void)dealloc;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest *)arg3 cryptoKey:(id)arg4;
- (id)initWithZipArchive:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest *)arg3;
- (id)initWithPath:(id)arg1 indexFileName:(id)arg2 previewRequest:(struct __QLPreviewRequest *)arg3 cryptoKey:(id)arg4;

@end

