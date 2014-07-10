/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SCNAuthoringEnvironment, SCNNode;

// Not exported
@interface SCNManipulator : NSObject
{
    SCNAuthoringEnvironment *_authoringEnvironment;
    SCNNode *_target;
}

@property(nonatomic) SCNNode *target; // @synthesize target=_target;
- (_Bool)mouseUp:(CDStruct_edec59f9)arg1;
- (_Bool)mouseDown:(CDStruct_edec59f9)arg1;
- (_Bool)mouseDragged:(CDStruct_edec59f9)arg1;
- (_Bool)mouseMoved:(CDStruct_edec59f9)arg1;
- (void)draw;
- (void)_setAuthoringEnvironment:(id)arg1;
@property(readonly) SCNAuthoringEnvironment *authoringEnvironment;

@end

