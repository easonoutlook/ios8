/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <HealthDaemon/HDDataEntity.h>

@interface HDSampleEntity : HDDataEntity
{
}

+ (void)_columnNamesAndSortOrderingsForDataType:(id)arg1 sortDescriptors:(id)arg2 withBlock:(id)arg3;
+ (long long)preferredEntityType;
+ (id)UUIDsForSamplesWithTypes:(id)arg1 filter:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (long long)countOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingFilter:(id)arg3 withError:(id *)arg4;
+ (id)sourceIDsForSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 orderBy:(id)arg4 directions:(id)arg5 limit:(unsigned long long)arg6 handler:(id)arg7;
+ (void)enumerateSamplesWithType:(id)arg1 healthDaemon:(id)arg2 filter:(id)arg3 sortDescriptors:(id)arg4 limit:(unsigned long long)arg5 handler:(id)arg6;
+ (void)enumerateUUIDsOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingFilter:(id)arg3 limit:(unsigned long long)arg4 withHandler:(id)arg5;
+ (id)samplesWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 limit:(unsigned long long)arg4 anchor:(id *)arg5 error:(id *)arg6;
+ (_Bool)deleteAllSamplesWithTypes:(id)arg1 sourceBundleIdentifier:(id)arg2 healthDaemon:(id)arg3 error:(id *)arg4;
+ (id)mostRecentSampleWithType:(id)arg1 healthDaemon:(id)arg2 predicate:(id)arg3 error:(id *)arg4;
+ (void)enumerateStartDatesOfSamplesWithType:(id)arg1 healthDaemon:(id)arg2 matchingFilter:(id)arg3 limit:(unsigned long long)arg4 withHandler:(id)arg5;
+ (id)columnNameForSortIdentifier:(id)arg1;
+ (id)_tableValuesFromDataObject:(id)arg1;
+ (id)_propertySettersForDataObject;
+ (Class)_associatedDataObjectClass;
+ (id)_columnsSQL;
+ (id)_databaseTable;
+ (void)load;

@end

