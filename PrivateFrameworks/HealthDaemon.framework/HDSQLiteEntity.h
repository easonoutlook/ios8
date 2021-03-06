/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <HealthDaemon/HDSQLiteEntity-Protocol.h>

@interface HDSQLiteEntity : NSObject <HDSQLiteEntity>
{
    long long _persistentID;
}

+ (_Bool)_insertValues:(id)arg1 intoTable:(id)arg2 withPidOrNil:(id)arg3 database:(id)arg4;
+ (void)applyPropertySetters:(id)arg1 toObject:(id)arg2 withProperties:(id)arg3 values:(id *)arg4;
+ (id)joinClauseForProperty:(id)arg1;
+ (id)foreignKeyColumnForTable:(id)arg1;
+ (id)foreignDatabaseTablesToDelete;
+ (id)foreignDatabaseTableForProperty:(id)arg1;
+ (id)foreignDatabaseColumnForProperty:(id)arg1;
+ (id)disambiguatedSQLForProperty:(id)arg1;
+ (id)disambiguatedDatabaseTable;
+ (id)databaseTable;
+ (id)databaseName;
+ (id)databaseValueForProperty:(id)arg1 clientValue:(id)arg2;
+ (id)associationPropertyForEntityClass:(Class)arg1;
+ (id)databasePropertyToSetClientProperty:(id)arg1;
+ (id)databasePropertyToGetClientProperty:(id)arg1;
+ (id)copyDatabaseDictionaryToSetClientDictionary:(id)arg1;
+ (id)entityWithPersistentID:(id)arg1;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 orderingDirections:(id)arg4;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3;
+ (id)queryWithDatabase:(id)arg1 predicate:(id)arg2;
+ (id)sumValueForProperty:(id)arg1 predicate:(id)arg2 groupBy:(id)arg3 database:(id)arg4;
+ (id)avgValueForProperty:(id)arg1 predicate:(id)arg2 groupBy:(id)arg3 database:(id)arg4;
+ (id)minValueForProperty:(id)arg1 predicate:(id)arg2 groupBy:(id)arg3 database:(id)arg4;
+ (id)maxValueForProperty:(id)arg1 predicate:(id)arg2 groupBy:(id)arg3 database:(id)arg4;
+ (id)aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 groupBy:(id)arg4 database:(id)arg5;
+ (id)propertyValueForAnyInDatabase:(id)arg1 property:(id)arg2 predicate:(id)arg3;
+ (id)propertyValuesForAnyInDatabase:(id)arg1 properties:(id)arg2 predicate:(id)arg3;
+ (void)enumerateEntitiesInDatabase:(id)arg1 predicate:(id)arg2 usingBlock:(id)arg3;
+ (id)anyInDatabase:(id)arg1 predicate:(id)arg2;
@property(readonly, nonatomic) long long persistentID; // @synthesize persistentID=_persistentID;
- (_Bool)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2 database:(id)arg3;
- (id)_copyTableClusteredValuesWithValues:(id)arg1;
- (void)getValuesForProperties:(id)arg1 withDatabase:(id)arg2 applier:(id)arg3;
- (id)valueForProperty:(id)arg1 database:(id)arg2;
- (id)valueForExternalProperty:(id)arg1;
- (_Bool)setValuesWithDictionary:(id)arg1 database:(id)arg2;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2 database:(id)arg3;
- (void)setExternalValuesWithDictionary:(id)arg1;
- (void)getValues:(id *)arg1 forProperties:(id *)arg2 count:(unsigned long long)arg3 database:(id)arg4;
- (_Bool)existsInDatabase:(id)arg1;
- (_Bool)deleteFromDatabase:(id)arg1;
- (id)initWithPropertyValues:(id)arg1 inDatabase:(id)arg2;
- (id)initWithPersistentID:(long long)arg1;

@end

