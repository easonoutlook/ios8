/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSMutableArray, _IntArray2D;

// Not exported
@interface _EditScript : NSObject
{
    _Bool _orderAtomsAscending;
    _IntArray2D *_distanceMatrix;
    long long _currentOperation;
    id <_EditScriptData> _itemAData;
    id <_EditScriptData> _itemBData;
    NSArray *_operationPrecedenceArray;
    NSMutableArray *_script;
}

@property(retain, nonatomic) NSMutableArray *script; // @synthesize script=_script;
@property(copy, nonatomic) NSArray *operationPrecedenceArray; // @synthesize operationPrecedenceArray=_operationPrecedenceArray;
- (void)finalizeCurrentScriptAtom;
- (void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4;
- (void)initializeCurrentScriptAtom;
- (void)computeEditsFromMatrix;
- (void)computeDistanceMatrix;
- (id)description;
- (id)initWithOperationPrecedence:(long long)arg1 orderAtomsAscending:(_Bool)arg2;
- (id)operationPrecedenceArrayFromOperationPrecedence:(long long)arg1;
- (void)dealloc;

@end

