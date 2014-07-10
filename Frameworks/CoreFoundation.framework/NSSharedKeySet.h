/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSFastEnumeration-Protocol.h"

@interface NSSharedKeySet : NSObject <NSFastEnumeration, NSCopying, NSCoding>
{
    char *_g;
    unsigned char _select;
    void *_rankTable;
    double _c;
    unsigned int _M;
    unsigned int _factor;
    unsigned int _numKey;
    unsigned int *_seeds;
    id *_keys;
    NSSharedKeySet *_subSharedKeySet;
}

+ (id)keySetWithKeys:(id)arg1;
@property(retain) NSSharedKeySet *subSharedKeySet; // @synthesize subSharedKeySet=_subSharedKeySet;
@property id *keys; // @synthesize keys=_keys;
@property unsigned int *seeds; // @synthesize seeds=_seeds;
@property unsigned int numKey; // @synthesize numKey=_numKey;
@property unsigned int factor; // @synthesize factor=_factor;
@property unsigned int M; // @synthesize M=_M;
@property double c; // @synthesize c=_c;
@property void *rankTable; // @synthesize rankTable=_rankTable;
@property unsigned char select; // @synthesize select=_select;
@property char *g; // @synthesize g=_g;
- (unsigned long long)keySetCount;
- (void)finalize;
- (void)dealloc;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)keyAtIndex:(unsigned long long)arg1;
- (unsigned long long)indexForKey:(id)arg1;
- (id)allKeys;
- (unsigned long long)maximumIndex;
- (_Bool)isEmpty;
- (unsigned long long)count;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithKeys:(id *)arg1 count:(unsigned long long)arg2;
- (id)generateSubclassCode:(id)arg1 printChainOfKeySetIfPossible:(_Bool)arg2 printSpecialCode:(unsigned long long)arg3;

@end

