/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface CKObjCClass : NSObject
{
    Class _handle;
    NSString *_name;
    NSDictionary *_propertiesByName;
    NSArray *_sortedProperties;
}

+ (id)classForObject:(id)arg1;
+ (id)classForHandle:(Class)arg1;
@property(readonly, nonatomic) NSArray *sortedProperties; // @synthesize sortedProperties=_sortedProperties;
@property(readonly, nonatomic) NSDictionary *propertiesByName; // @synthesize propertiesByName=_propertiesByName;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) Class handle; // @synthesize handle=_handle;
- (void).cxx_destruct;
- (id)propertyForName:(id)arg1;
- (id)allProperties;
- (id)initWithHandle:(Class)arg1;

@end

