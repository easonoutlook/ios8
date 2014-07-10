/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSObject<TSDTrackerManipulator>;

// Not exported
@interface TSDTrackerManipulatorCoordinator : NSObject
{
    NSMutableSet *mRegisteredTMs;
    NSObject<TSDTrackerManipulator> *mControllingTM;
}

+ (void)p_removeDynamicSubclass:(id)arg1;
+ (void)p_dynamicallySubclassGRForNotification:(id)arg1;
@property(readonly, nonatomic) NSObject<TSDTrackerManipulator> *controllingTM; // @synthesize controllingTM=mControllingTM;
- (void)p_notifyControlChange;
- (void)operationDidEnd;
- (void)operationWillEnd;
- (_Bool)relinquishTrackerManipulatorControl:(id)arg1;
- (_Bool)takeControlWithTrackerManipulator:(id)arg1;
- (_Bool)hasRegisteredTrackerManipulator:(id)arg1;
- (void)unregisterTrackerManipulator:(id)arg1;
- (void)registerTrackerManipulator:(id)arg1;
- (void)dealloc;
- (id)init;

@end

