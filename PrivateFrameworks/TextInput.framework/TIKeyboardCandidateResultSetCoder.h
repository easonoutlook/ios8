/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSData, NSMutableData;

@interface TIKeyboardCandidateResultSetCoder : NSObject
{
    NSMutableData *_mutableData;
    NSData *_data;
    unsigned long long _offset;
}

+ (id)decodeWithData:(id)arg1;
+ (id)encodeWithCandidateResultSet:(id)arg1;
+ (Class)classFromCandidateType:(int)arg1;
+ (id)candidateTypeToClassNameMap;
@property(nonatomic) unsigned long long offset; // @synthesize offset=_offset;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSMutableData *mutableData; // @synthesize mutableData=_mutableData;
- (id)candidateResultSet;
- (id)dataFromCandidateResultSet:(id)arg1;
- (id)decodePointerValueArray;
- (void)encodePointerValueArray:(id)arg1;
- (id)decodeStringArray;
- (void)encodeStringArray:(id)arg1;
- (id)decodeString;
- (void)encodeString:(id)arg1;
- (unsigned long long)decodeUInt64;
- (void)encodeUInt64:(unsigned long long)arg1;
- (unsigned int)decodeUInt32;
- (void)encodeUInt32:(unsigned int)arg1;
- (unsigned short)decodeShort;
- (void)encodeShort:(unsigned short)arg1;
- (unsigned char)decodeByte;
- (void)encodeByte:(unsigned char)arg1;
- (_Bool)decodeBool;
- (void)encodeBool:(_Bool)arg1;
- (id)decodeCandidate;
@property(readonly, nonatomic) const char *currentPosition;
@property(readonly, nonatomic) const char *bytes;
- (void)dealloc;
- (id)initWithData:(id)arg1 mutableData:(id)arg2;
- (id)initForDecodingWithData:(id)arg1;
- (id)initForEncoding;

@end

