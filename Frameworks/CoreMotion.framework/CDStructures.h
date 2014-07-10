/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#pragma mark Named Structures

struct CLConnection;

struct CLConnectionClient {
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field1;
    id _field2;
    id _field3;
    id _field4;
    struct CLConnection *_field5;
    struct CLNameValuePair _field6;
    struct CLNameValuePair _field7;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field8;
    id _field9;
    void _field10;
    id _field11;
    void _field12;
    struct map<std::__1::basic_string<char>, void (^)(CLConnectionMessage *), std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>>> _field13;
    id _field14;
    void _field15;
    id _field16;
    void _field17;
};

struct CLConnectionMessage {
    id _field1;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _field2;
    id _field3;
    id _field4;
};

struct CLMotionActivity {
    int type;
    int confidence;
    int mountedState;
    int mountedConfidence;
    float tilt;
    double timestamp;
    int exitState;
    double estExitTime;
    double startTime;
};

struct CLNameValuePair {
    void **_field1;
    struct __CFDictionary *_field2;
};

struct CLNotifierBase {
    void **_field1;
};

struct CLNotifierClientBase {
    void **_field1;
};

struct Dispatcher {
    void **_field1;
    id _field2;
};

struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
    struct __tree_node_base<void *> *__left_;
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned long long _field1;
                    unsigned long long _field2;
                    char *_field3;
                } _field1;
                struct __short {
                    union {
                        unsigned char _field1;
                        char _field2;
                    } _field1;
                    char _field2[23];
                } _field2;
                struct __raw {
                    unsigned long long _field1[3];
                } _field3;
            } _field1;
        } _field1;
    } _field1;
};

struct map<SEL *, CLIntersiloInterfaceSelectorInfo *, std::__1::less<SEL *>, std::__1::allocator<std::__1::pair<SEL *const, CLIntersiloInterfaceSelectorInfo *>>> {
    struct __tree<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, std::__1::__map_value_compare<SEL *, std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, std::__1::less<SEL *>, true>, std::__1::allocator<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>>> {
        struct __tree_node<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<SEL *, std::__1::__value_type<SEL *, CLIntersiloInterfaceSelectorInfo *>, std::__1::less<SEL *>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct map<std::__1::basic_string<char>, void (^)(CLConnectionMessage *), std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>>> {
    struct __tree<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, std::__1::less<std::__1::basic_string<char>>, true>, std::__1::allocator<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>>> {
        struct __tree_node<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, void *> *_field1;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> _field1;
        } _field2;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<std::__1::basic_string<char>, std::__1::__value_type<std::__1::basic_string<char>, void (^)(CLConnectionMessage *)>, std::__1::less<std::__1::basic_string<char>>, true>> {
            unsigned long long _field1;
        } _field3;
    } _field1;
};

struct map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int>>> {
    struct __tree<std::__1::__value_type<unsigned long, int>, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true>, std::__1::allocator<std::__1::__value_type<unsigned long, int>>> {
        struct __tree_node<std::__1::__value_type<unsigned long, int>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<unsigned long, int>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<unsigned long, std::__1::__value_type<unsigned long, int>, std::__1::less<unsigned long>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

#if 0
// Names with conflicting types:
typedef struct {
    double timestamp;
    CDStruct_bdecc0cd orientation;
} Sample_59071443;

#endif

#pragma mark Typedef'd Structures

typedef struct {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
} CDStruct_afa449f9;

typedef struct {
    double w;
    double x;
    double y;
    double z;
} CDStruct_bf7dff04;

typedef struct {
    double x;
    double y;
    double z;
} CDStruct_31142d93;

typedef struct {
    double _field1;
    double _field2;
} CDStruct_c3b9c2ee;

typedef struct {
    float x;
    float y;
    float z;
} CDStruct_03942939;

typedef struct {
    float pressure;
    float temperature;
} CDStruct_ebf20f05;

typedef struct {
    int type;
} CDStruct_bdecc0cd;

typedef struct {
    CDStruct_bf7dff04 _field1;
    CDStruct_03942939 _field2;
    CDStruct_03942939 _field3;
    CDStruct_03942939 _field4;
    int _field5;
    _Bool _field6;
    _Bool _field7;
    _Bool _field8;
} CDStruct_7fb6ae47;

typedef struct {
    CDStruct_31142d93 _field1;
    int _field2;
} CDStruct_27fd20ed;

