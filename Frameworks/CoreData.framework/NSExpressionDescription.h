/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/NSPropertyDescription.h>

@class NSExpression;

@interface NSExpressionDescription : NSPropertyDescription
{
    id _reservedtype1_1;
    id _reservedtype1_2;
    unsigned long long _reservedtype1_3;
    id _reservedtype1_4;
    unsigned long long _reservedtype1_5;
    id _reservedtype1_6;
    void *_reservedtype2_1;
    void *_reservedtype2_2;
    void *_reservedtype2_3;
    NSExpression *_expression;
    unsigned long long _expressionResultType;
}

- (void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7;
- (unsigned long long)_propertyType;
@property unsigned long long expressionResultType;
@property(retain) NSExpression *expression;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

@end

