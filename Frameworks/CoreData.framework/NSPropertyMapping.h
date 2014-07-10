/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSExpression, NSString;

@interface NSPropertyMapping : NSObject
{
    void *_reserved;
    NSArray *_transformValidations;
    NSArray *_propertyTransforms;
    NSString *_name;
    NSExpression *_valueExpression;
    NSDictionary *_userInfo;
    struct __propertyMappingFlags {
        unsigned int _isInUse:1;
        unsigned int _reservedPropertyMapping:31;
    } _propertyMappingFlags;
}

+ (void)initialize;
@property(retain) NSDictionary *userInfo;
@property(retain) NSExpression *valueExpression;
@property(copy) NSString *name;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)_transformValidations;
- (void)_setTransformValidations:(id)arg1;
- (id)_propertyTransforms;
- (void)_setPropertyTransforms:(id)arg1;
- (void)_throwIfNotEditable;
- (void)_setIsEditable:(_Bool)arg1;
- (void)_createCachesAndOptimizeState;
- (_Bool)isEditable;
- (id)initWithName:(id)arg1 valueExpression:(id)arg2;
- (id)_initWithDestinationName:(id)arg1 valueExpression:(id)arg2;

@end

