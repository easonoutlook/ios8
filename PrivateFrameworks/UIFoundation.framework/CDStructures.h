/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@class NSFont, NSMutableParagraphStyle;

#pragma mark Named Structures

struct CGAffineTransform {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct RTFColor;

struct RTFFont;

struct RTFStyle;

struct _NSAttributeDictionaryElement {
    unsigned long long hash;
    id key;
    id value;
};

struct _NSAttributeInfo {
    unsigned int toUniCharEncoding;
    unsigned int codePageEncoding;
    NSFont *font;
    double fontSize;
    double kern;
    NSMutableParagraphStyle *paraStyle;
    unsigned int bold:1;
    unsigned int italic:1;
    unsigned int fontIsValid:1;
    unsigned int paraStyleIsValid:1;
    unsigned int kernIsValid:1;
    unsigned int attributesSameAsBefore:1;
    unsigned int multiByteEncoding:1;
    unsigned int unicodeAlternativeLength:3;
    unsigned int tabStopType:4;
    unsigned int curAttributesNeedsCopying:1;
    unsigned int paraStyleNeedsCopying:1;
    unsigned int hasWritingDirectionAttribute:1;
    unsigned int :15;
};

struct _NSGlyphNode;

struct _NSGlyphTree {
    struct _NSGlyphNode *rootNode;
    struct _NSGlyphNode *curNode;
    unsigned long long curCharIndex;
    unsigned long long curGlyphIndex;
};

struct _NSLayoutNode;

struct _NSLayoutTree {
    struct _NSLayoutNode *rootNode;
    struct _NSLayoutNode *curNode;
    unsigned long long curGlyphIndex;
    double curLongitudinalOrigin;
    struct CGRect extraLineFragmentRect;
    struct CGRect extraLineFragmentUsedRect;
    unsigned long long glyphsPerLineEstimate;
    double offsetPerLineEstimate;
};

struct _NSRTFPriv {
    void *reader;
    char *rtfInput;
    unsigned long long rtfInputLength;
    unsigned long long rtfInputLocation;
    unsigned long long rtfHeaderEndLocation;
    int pushedChar;
    int pushedClass;
    int pushedMajor;
    int pushedMinor;
    int pushedParam;
    char pushedTextBuf[1024];
    int prevChar;
    int bumpLine;
    struct RTFFont *fontList;
    struct RTFColor *colorList;
    struct RTFStyle *styleList;
    char *inputName;
    char *outputName;
    void *ccb[5];
    void *readHook;
    void *msgProc;
    void *panicProc;
    char textBuf[1024];
    int textLen;
    int class;
    int major;
    int minor;
    int param;
    long long lineNum;
    long long linePos;
    int groupState;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct _NSRunBlock {
    unsigned long long _field1;
    unsigned char _field2[0];
};

struct _NSStoredContainerUsage {
    struct CGRect _field1;
    struct CGRect _field2;
    CDStruct_cfe5321f _field3;
    struct CGRect _field4;
    struct _NSRange _field5;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned int _forceColorWrite:1;
    unsigned int _activeFontFeatures:1;
    unsigned int _preserveNaturalAlignment:1;
    unsigned int _reserved:29;
} CDStruct_cfe5321f;

typedef struct {
    long long location;
    long long length;
} CDStruct_627e0f85;

typedef struct {
    id _field1;
    id _field2;
    long long _field3;
    long long _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    struct CGRect _field9;
    struct {
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :24;
    } _field10;
} CDStruct_ec8253cd;

typedef struct {
    struct *_field1;
    struct _NSRange _field2;
    struct _NSRange _field3;
    float _field4;
    float _field5;
    void *_field6;
    void *_field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    struct CGRect _field14;
    struct CGRect _field15;
    struct _NSRange _field16;
    id _field17;
    double _field18;
    long long _field19;
    struct {
        unsigned int :4;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :4;
        unsigned int :4;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :1;
        unsigned int :2;
        unsigned int :1;
        unsigned int :10;
    } _field20;
    void *_field21[0];
} CDStruct_9b8416ed;

#pragma mark Typedef'd Unions

typedef union {
    struct {
        double _field1;
        double _field2;
        double _field3;
        long long _field4;
    } _field1;
    struct {
        struct CGRect _field1;
    } _field2;
} CDUnion_09a75e3c;

