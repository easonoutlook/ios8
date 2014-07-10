/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSPredicate, NSString;

@interface CKQuery : NSObject <NSSecureCoding, NSCopying>
{
    NSString *_recordType;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property(copy, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property(copy, nonatomic) NSString *recordType; // @synthesize recordType=_recordType;
- (void).cxx_destruct;
- (id)description;
- (id)CKPropertiesDescription;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithRecordType:(id)arg1 predicate:(id)arg2;
- (id)init;

@end

