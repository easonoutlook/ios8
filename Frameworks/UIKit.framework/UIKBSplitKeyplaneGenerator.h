/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableArray, UIKBTree, UIKeyboardSliceSet, UIKeyboardTransitionSlice;

// Not exported
@interface UIKBSplitKeyplaneGenerator : NSObject
{
    NSMutableArray *_rows;
    NSDictionary *_splitLayoutHints;
    UIKBTree *_sourceKeyboard;
    UIKBTree *_sourceKeyplane;
    struct CGSize _splitKeySizeFactor;
    struct CGSize _keyboardSize;
    double _leftSideWidestRow;
    double _rightSideWidestRow;
    long long _keyboardType;
    UIKeyboardSliceSet *_sliceSet;
    UIKeyboardTransitionSlice *_leftSlice;
    UIKeyboardTransitionSlice *_rightSlice;
}

- (id)generateRivenKeyplaneFromKeyplane:(id)arg1 forKeyboard:(id)arg2;
- (id)finalizeSplitKeyplane;
- (void)initializeGeneratorForKeyplane:(id)arg1 name:(id)arg2;
- (void)organizeKeyplaneIntoRows;
- (id)hintsForRow:(id)arg1;
- (void)splitRow:(id)arg1;
- (void)alignSpaceKeyEdges;
- (void)addKey:(id)arg1 withShape:(id)arg2 forRow:(id)arg3 attribs:(id)arg4 left:(_Bool)arg5 force:(_Bool)arg6 isDefaultWidth:(_Bool)arg7;
- (void)commitUncommittedSlices;
- (void)splitSpaceKey:(id)arg1 leftSpace:(id)arg2 left:(struct CGRect)arg3 right:(struct CGRect)arg4;
- (void)addSliceStart:(struct CGRect)arg1 end:(struct CGRect)arg2 startToken:(id)arg3 endToken:(id)arg4 left:(_Bool)arg5 normalization:(int)arg6 isDefaultWidth:(_Bool)arg7 row:(int)arg8;
- (id)keysOrderedByPosition;
- (void)dealloc;
- (id)init;

@end

