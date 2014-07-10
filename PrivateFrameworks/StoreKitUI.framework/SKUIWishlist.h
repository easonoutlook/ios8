/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, SSWishlist;

@interface SKUIWishlist : NSObject
{
    SSWishlist *_database;
}

+ (id)activeWishlist;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)removeItemsWithItemIdentifiers:(id)arg1;
- (void)postChangeNotification;
@property(readonly, copy, nonatomic) NSArray *items;
- (_Bool)containsItemWithIdentifier:(long long)arg1;
- (void)addItem:(id)arg1;
@property(readonly, nonatomic) long long accountIdentifier;
- (id)initWithAccountIdentifier:(long long)arg1;

@end

