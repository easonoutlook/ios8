/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreDAV/CoreDAVPropertyFindBaseTask.h>

@class NSDictionary, NSSet;

@interface CoreDAVPrincipalPropertySearchTask : CoreDAVPropertyFindBaseTask
{
    NSSet *_searchItems;
    _Bool _applyToPrincipalCollectionSet;
    NSDictionary *_extraAttributes;
}

@property(nonatomic) _Bool applyToPrincipalCollectionSet; // @synthesize applyToPrincipalCollectionSet=_applyToPrincipalCollectionSet;
@property(retain, nonatomic) NSDictionary *extraAttributes; // @synthesize extraAttributes=_extraAttributes;
@property(retain, nonatomic) NSSet *searchItems; // @synthesize searchItems=_searchItems;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)requestBody;
- (id)httpMethod;
- (id)initWithPropertySearches:(id)arg1 propertiesToFind:(id)arg2 atURL:(id)arg3 applyToPrincipalCollectionSet:(_Bool)arg4 extraAttributes:(id)arg5;
- (void)dealloc;
- (id)initWithPropertiesToFind:(id)arg1 atURL:(id)arg2;

@end

