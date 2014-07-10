/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBook/ABPredicate.h>

#import "DASearchQueryConsumer-Protocol.h"

@class DAContactsSearchQuery, DADConnection, NSConditionLock, NSMutableArray, NSString;

@interface ABServerSearchPredicate : ABPredicate <DASearchQueryConsumer>
{
    void *_source;
    NSString *_accountIdentifier;
    NSString *_searchString;
    _Bool _includeSourceInResults;
    DADConnection *_connection;
    DAContactsSearchQuery *_searchQuery;
    NSMutableArray *_searchResults;
    NSConditionLock *_doneLock;
    int _error;
    id <ABPredicateDelegate> _delegate;
    _Bool _includePhotosInResults;
}

@property(retain, nonatomic) DADConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) int error; // @synthesize error=_error;
@property(nonatomic) id <ABPredicateDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool includePhotosInResults; // @synthesize includePhotosInResults=_includePhotosInResults;
@property(nonatomic) _Bool includeSourceInResults; // @synthesize includeSourceInResults=_includeSourceInResults;
@property(copy, nonatomic) NSString *searchString; // @synthesize searchString=_searchString;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) void *source; // @synthesize source=_source;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (void)_searchQueryIsDone;
- (int)_errorForDAStatusCode:(long long)arg1;
- (void)ab_runPredicateWithSortOrder:(unsigned int)arg1 inAddressBook:(void *)arg2 withDelegate:(id)arg3;
- (void)runPredicateWithDelegate:(id)arg1;
- (void)runPredicate;
- (void)dealloc;
- (id)initWithSearchString:(id)arg1 source:(void *)arg2 account:(id)arg3;
- (id)initWithSearchString:(id)arg1 source:(void *)arg2 account:(id)arg3 includeSourceInResults:(_Bool)arg4;
- (id)initWithSearchString:(id)arg1 source:(void *)arg2 account:(id)arg3 includeSourceInResults:(_Bool)arg4 includePhotosInResults:(_Bool)arg5;

@end

