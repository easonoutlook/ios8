/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CALayer.h>

@class NSString;

@interface CABackdropLayer : CALayer
{
}

+ (_Bool)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (_Bool)_hasRenderLayerSubclass;
+ (id)defaultValueForKey:(id)arg1;
@property double statisticsInterval;
@property(copy) NSString *statisticsType;
@property _Bool disablesOccludedBackdropBlurs;
@property double marginWidth;
@property struct CGRect backdropRect;
@property double scale;
@property(copy) NSString *groupName;
@property(getter=isEnabled) _Bool enabled;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg1;
- (_Bool)_renderLayerDefinesProperty:(unsigned int)arg1;
- (struct Layer *)_copyRenderLayer:(struct Transaction *)arg1 layerFlags:(unsigned int)arg2 commitFlags:(unsigned int *)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (id)statisticsValues;
- (void)layerDidBecomeVisible:(_Bool)arg1;

@end

