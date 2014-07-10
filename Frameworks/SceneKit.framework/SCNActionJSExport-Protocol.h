/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSExport-Protocol.h"

@protocol SCNActionJSExport <JSExport>
+ (id)customActionWithDuration:(double)arg1 actionBlock:(id)arg2;
+ (id)javaScriptActionWithScript:(id)arg1 duration:(double)arg2;
+ (id)runBlock:(id)arg1 queue:(void)arg2;
+ (id)runBlock:(id)arg1;
+ (id)removeFromParentNode;
+ (id)waitForDuration:(double)arg1 withRange:(double)arg2;
+ (id)waitForDuration:(double)arg1;
+ (id)fadeOpacityTo:(double)arg1 duration:(double)arg2;
+ (id)fadeOpacityBy:(double)arg1 duration:(double)arg2;
+ (id)fadeOutWithDuration:(double)arg1;
+ (id)fadeInWithDuration:(double)arg1;
+ (id)repeatActionForever:(id)arg1;
+ (id)repeatAction:(id)arg1 count:(unsigned long long)arg2;
+ (id)group:(id)arg1;
+ (id)sequence:(id)arg1;
+ (id)scaleTo:(double)arg1 duration:(double)arg2;
+ (id)scaleBy:(double)arg1 duration:(double)arg2;
+ (id)rotateToAxisAngle:(struct SCNVector4)arg1 duration:(double)arg2;
+ (id)rotateByAngle:(double)arg1 aroundAxis:(struct SCNVector3)arg2 duration:(double)arg3;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4 shortestUnitArc:(_Bool)arg5;
+ (id)rotateToX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)rotateByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
+ (id)moveTo:(struct SCNVector3)arg1 duration:(double)arg2;
+ (id)moveBy:(struct SCNVector3)arg1 duration:(double)arg2;
+ (id)moveByX:(double)arg1 y:(double)arg2 z:(double)arg3 duration:(double)arg4;
@property(nonatomic) double speed;
@property(nonatomic) long long timingMode;
@property(nonatomic) double duration;
- (id)copy;
- (id)reversedAction;
@end
