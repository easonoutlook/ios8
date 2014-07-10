/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CC_SHA1state_st {
    unsigned int h0;
    unsigned int h1;
    unsigned int h2;
    unsigned int h3;
    unsigned int h4;
    unsigned int Nl;
    unsigned int Nh;
    unsigned int data[16];
    int num;
};

struct NSObject {
    Class _field1;
};

struct __sFILE {
    char *_field1;
    int _field2;
    int _field3;
    short _field4;
    short _field5;
    struct __sbuf _field6;
    int _field7;
    void *_field8;
    void *_field9;
    void *_field10;
    void *_field11;
    void *_field12;
    struct __sbuf _field13;
    struct __sFILEX *_field14;
    int _field15;
    unsigned char _field16[3];
    unsigned char _field17[1];
    struct __sbuf _field18;
    int _field19;
    long long _field20;
};

struct __sbuf {
    char *_field1;
    int _field2;
};

struct __va_list_tag {
    unsigned int _field1;
    unsigned int _field2;
    void *_field3;
    void *_field4;
};

struct backup_detector {
    unsigned long long _field1;
    unsigned long long _field2;
    unsigned long long _field3;
};

struct timespec {
    long long tv_sec;
    long long tv_nsec;
};

#if 0
// Names with conflicting types:
typedef struct {
    Class _field1;
    id _field2;
    Class _field3;
    SEL _field4;
    id _field5;
    void _field6;
    id _field7;
    _Bool _field8;
    _Bool _field9;
    id _field10;
    id _field11;
    unsigned long long _field12;
    unsigned long long _field13;
    id _field14;
} PQLResultSet_eaab28ac;

typedef struct {
    Class _field1;
} PQLResultSet_67aa68bb;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    id _field2;
    id _field3;
    unsigned long long _field4;
} CDStruct_b86b310a;

typedef struct {
    unsigned long long _field1;
    id *_field2;
    unsigned long long *_field3;
    unsigned long long _field4[5];
} CDStruct_70511ce9;

