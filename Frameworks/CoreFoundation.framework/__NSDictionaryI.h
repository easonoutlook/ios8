/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreFoundation/NSDictionary.h>

// Not exported
@interface __NSDictionaryI : NSDictionary
{
    unsigned int _used:58;
    unsigned int _szidx:6;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)__new:(const id *)arg1:(const id *)arg2:(unsigned long long)arg3:(_Bool)arg4:(_Bool)arg5;
- (double)_clumpingInterestingThreshold;
- (double)_clumpingFactor;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (void)finalize;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(id)arg2;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2 count:(unsigned long long)arg3;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;

@end

