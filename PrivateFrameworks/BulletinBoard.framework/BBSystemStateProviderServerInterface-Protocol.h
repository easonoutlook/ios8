/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol BBSystemStateProviderServerInterface <NSObject>
- (void)noteRestrictedSectionIDsDidChange:(id)arg1;
- (void)noteChangeOfState:(unsigned long long)arg1 newValue:(_Bool)arg2;
- (void)noteOccurrenceOfEvent:(unsigned long long)arg1;
@end

