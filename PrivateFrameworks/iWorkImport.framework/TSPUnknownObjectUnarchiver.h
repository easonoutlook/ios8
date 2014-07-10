/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSPUnarchiver.h>

@class NSObject<OS_dispatch_data>, NSString;

// Not exported
@interface TSPUnknownObjectUnarchiver : TSPUnarchiver
{
    shared_ptr_bafc106c _archiveInfo;
    NSObject<OS_dispatch_data> *_messagesData;
    NSString *_packageLocator;
}

@property(readonly, nonatomic) NSString *packageLocator; // @synthesize packageLocator=_packageLocator;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *messagesData; // @synthesize messagesData=_messagesData;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)canValidateReferences;
- (shared_ptr_bafc106c)archiveInfo;
- (const struct Message *)message;
- (id)initWithIdentifier:(long long)arg1 archiveInfo:(shared_ptr_bafc106c)arg2 messagesData:(id)arg3 packageLocator:(id)arg4 objectDelegate:(id)arg5 lazyReferenceDelegate:(id)arg6 delegate:(id)arg7 error:(id *)arg8;

@end

