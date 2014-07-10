/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "ISURLOperationDelegate-Protocol.h"

@class IKAppContext, JSManagedValue, NSArray, NSMutableArray;

@interface IKScriptsEvaluator : NSObject <ISURLOperationDelegate>
{
    _Bool _isJingleRequest;
    _Bool _success;
    NSArray *_scripts;
    IKAppContext *_appContext;
    JSManagedValue *_callback;
    NSMutableArray *_records;
}

@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property(retain, nonatomic) JSManagedValue *callback; // @synthesize callback=_callback;
@property(nonatomic) __weak IKAppContext *appContext; // @synthesize appContext=_appContext;
@property(retain, nonatomic) NSArray *scripts; // @synthesize scripts=_scripts;
@property(nonatomic) _Bool isJingleRequest; // @synthesize isJingleRequest=_isJingleRequest;
- (void).cxx_destruct;
- (void)_sendCallback:(id)arg1 inContext:(id)arg2 success:(_Bool)arg3;
- (void)_operation:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3;
- (void)operation:(id)arg1 willSendRequest:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 didReceiveResponse:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)evaluate;
- (id)initWithScripts:(id)arg1 withContext:(id)arg2 callback:(id)arg3 jingleRequest:(_Bool)arg4;

@end

