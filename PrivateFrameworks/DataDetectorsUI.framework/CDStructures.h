/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct __CFRuntimeBase {
    unsigned long long _field1;
    unsigned char _field2[4];
    unsigned int _field3;
};

struct __CFString;

struct __DDQueryOffset {
    long long _field1;
    long long _field2;
};

struct __DDResult {
    struct __CFRuntimeBase _field1;
    struct __DDQueryRange {
        struct __DDQueryOffset _field1;
        struct __DDQueryOffset _field2;
    } _field2;
    struct {
        long long _field1;
        long long _field2;
    } _field3;
    long long _field4;
    struct __CFArray *_field5;
    struct __CFString *_field6;
    struct __CFString *_field7;
    void *_field8;
    void *_field9;
};

struct __DDScanQuery {
    struct __CFRuntimeBase _field1;
    struct __DDQueryFragment *_field2;
    long long _field3;
    long long _field4;
    void *_field5;
    void *_field6;
};

