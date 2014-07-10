/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "KNAnimationPlugin-Protocol.h"

@class KNAnimationContext;

// Not exported
@interface KNAnimationEffect : NSObject <KNAnimationPlugin>
{
    KNAnimationContext *mAnimationContext;
}

+ (id)updateDirectionAttributeValue:(long long)arg1 andCustomTextDirectionValue:(unsigned long long)arg2 turnOffBounce:(_Bool)arg3 turnOffMotionBlur:(_Bool)arg4 forAttributes:(id)arg5;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned long long)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (id)initWithAnimationContext:(id)arg1;

@end

