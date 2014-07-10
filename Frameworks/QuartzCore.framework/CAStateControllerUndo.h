/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CAStateRecorder-Protocol.h"

@class CAState, NSMutableArray;

// Not exported
@interface CAStateControllerUndo : NSObject <CAStateRecorder>
{
    CAStateControllerUndo *_next;
    CAState *_state;
    NSMutableArray *_elements;
    NSMutableArray *_transitions;
}

@property(retain, nonatomic) NSMutableArray *transitions; // @synthesize transitions=_transitions;
@property(retain, nonatomic) NSMutableArray *elements; // @synthesize elements=_elements;
@property(retain, nonatomic) CAState *state; // @synthesize state=_state;
@property(readonly) CAStateControllerUndo *next; // @synthesize next=_next;
- (void)dealloc;
- (void)addTransition:(id)arg1;
- (void)willAddLayer:(id)arg1;
- (void)addElement:(id)arg1;

@end
