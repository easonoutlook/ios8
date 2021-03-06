/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct BookmarkAndHistoryCompletionMatch;

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct FrameMetadata {
    void **_field1;
    struct Vector<OpaqueJSValue *, 0, WTF::CrashOnOverflow> _field2;
    struct OpaqueJSValue *_field3;
    struct OpaqueJSValue *_field4;
    struct OpaqueJSContext *_field5;
    id _field6;
    id _field7;
};

struct HashMap<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<WTF::OwnPtr<FrameMetadata>>> {
    struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<WTF::OwnPtr<FrameMetadata>>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>> m_impl;
};

struct HashTable<OpaqueFormAutoFillFrame *, WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>>, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>>>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashMap<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>, WTF::PtrHash<OpaqueFormAutoFillFrame *>, WTF::HashTraits<OpaqueFormAutoFillFrame *>, WTF::HashTraits<WTF::OwnPtr<FrameMetadata>>>::KeyValuePairTraits, WTF::HashTraits<OpaqueFormAutoFillFrame *>> {
    struct KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>> *m_table;
    int m_tableSize;
    int m_tableSizeMask;
    int m_keyCount;
    int m_deletedCount;
};

struct KeyValuePair<OpaqueFormAutoFillFrame *, WTF::OwnPtr<FrameMetadata>>;

struct OpaqueJSContext;

struct OpaqueJSValue;

struct PassRefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> {
    struct BookmarkAndHistoryCompletionMatch *_field1;
};

struct RawData {
    _Bool _field1;
    void *_field2;
    int _field3;
};

struct RefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> {
    struct BookmarkAndHistoryCompletionMatch *m_ptr;
};

struct SuddenTerminationDisabler;

struct URLCompletionDatabase;

struct Vector<OpaqueJSValue *, 0, WTF::CrashOnOverflow> {
    struct OpaqueJSValue **_field1;
    unsigned int _field2;
    unsigned int _field3;
};

struct Vector<double, 0, WTF::CrashOnOverflow> {
    double *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct Vector<int, 0, WTF::CrashOnOverflow> {
    int *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct duration<long long, std::__1::ratio<1, 1000000000>> {
    long long __rep_;
};

struct duration<long long, std::__1::ratio<1, 1000>> {
    long long __rep_;
};

struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> {
    struct duration<long long, std::__1::ratio<1, 1000000000>> __d_;
};

struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> {
    struct __compressed_pair<SafariShared::SuddenTerminationDisabler *, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> {
        struct SuddenTerminationDisabler *__first_;
    } __ptr_;
};

struct unique_ptr<SafariShared::URLCompletionDatabase, std::__1::default_delete<SafariShared::URLCompletionDatabase>> {
    struct __compressed_pair<SafariShared::URLCompletionDatabase *, std::__1::default_delete<SafariShared::URLCompletionDatabase>> {
        struct URLCompletionDatabase *__first_;
    } __ptr_;
};

#pragma mark Typedef'd Structures

typedef struct {
    struct {
        unsigned short _field1;
        unsigned short _field2;
    } _field1[32];
    unsigned long long _field2;
} CDStruct_f2b84ca7;

// Template types
typedef struct PassRefPtr<SafariShared::BookmarkAndHistoryCompletionMatch> {
    struct BookmarkAndHistoryCompletionMatch *_field1;
} PassRefPtr_8dece646;

typedef struct Vector<double, 0, WTF::CrashOnOverflow> {
    double *m_buffer;
    unsigned int m_capacity;
    unsigned int m_size;
} Vector_4bee0f08;

typedef struct duration<long long, std::__1::ratio<1, 1000>> {
    long long __rep_;
} duration_6174cf92;

typedef struct time_point<std::__1::chrono::steady_clock, std::__1::chrono::duration<long long, std::__1::ratio<1, 1000000000>>> {
    struct duration<long long, std::__1::ratio<1, 1000000000>> __d_;
} time_point_e708cccf;

