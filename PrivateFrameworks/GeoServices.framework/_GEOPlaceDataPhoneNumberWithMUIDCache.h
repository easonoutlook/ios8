/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "_GEOPlaceDataCacheProxy-Protocol.h"

// Not exported
@interface _GEOPlaceDataPhoneNumberWithMUIDCache : NSObject <_GEOPlaceDataCacheProxy>
{
    struct _GEOGenericContainer<unsigned long long, GEOPDPlace *, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, geo::GEOGenericContainerStrongReferenceTag, 64, 2097152, geo::GEOGenericContainerLockingTag, detail::_default_pointer_type> _cache;
    struct unordered_map<unsigned long long, unsigned long long, std::__1::hash<unsigned long long>, std::__1::equal_to<unsigned long long>, std::__1::allocator<std::__1::pair<const unsigned long long, unsigned long long>>> _phoneNumberCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)shrinkToSize:(unsigned long long)arg1 finished:(id)arg2;
- (void)calculateFreeableSpaceWithHandler:(id)arg1;
- (void)evictAllEntries;
- (void)evictPlaceDataForMUID:(unsigned long long)arg1;
- (void)setPlaceData:(id)arg1 forMUID:(unsigned long long)arg2;
- (unsigned long long)muidForPhoneNumber:(unsigned long long)arg1;
- (id)placeDataForMUID:(unsigned long long)arg1;
- (id)placeDataForPhoneNumber:(unsigned long long)arg1;
- (id)init;

@end

