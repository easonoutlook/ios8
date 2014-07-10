/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_queue>;

// Not exported
@interface TCMessageContext : NSObject
{
    NSMutableSet *m_warnings;
    NSMutableSet *m_errors;
    NSMutableArray *m_currentObjectStack;
    NSMutableDictionary *m_placeholderToObjectIdMap;
    NSObject<OS_dispatch_queue> *mMessageSyncQueue;
}

+ (void)restoreObjectStack:(unsigned int)arg1;
+ (unsigned long long)saveObjectStack;
+ (void)replacePlaceholdersWithObjects;
+ (void)setObject:(id)arg1 forPlaceholder:(id)arg2;
+ (void)popCurrentPlaceholder:(id)arg1;
+ (id)pushCurrentPlaceholder;
+ (void)popCurrentObject;
+ (void)pushCurrentObject:(id)arg1;
+ (_Bool)isFileStructuredStorage;
+ (void)setIsFileStructuredStorage:(_Bool)arg1;
+ (id)getErrorArray;
+ (id)getWarningArray;
+ (void)removeContextForCurrentThread;
+ (void)createContextForCurrentThread;
+ (void)reportErrorException:(id)arg1;
+ (void)reportWarningException:(id)arg1;
+ (void)reportError:(struct TCTaggedMessageStructure *)arg1;
+ (void)reportWarning:(struct TCTaggedMessageStructure *)arg1;
+ (void)reportObject:(id)arg1 withWarning:(struct TCTaggedMessageStructure *)arg2;
+ (id)currentObjectOrPlaceholder;
+ (void)reportObjectOrPlaceholder:(id)arg1 withWarning:(struct TCTaggedMessageStructure *)arg2 parameters:(struct __va_list_tag [1])arg3;
+ (void)initialize;
- (void)reportWarningForObject:(id)arg1 affectedObject:(id)arg2 warning:(struct TCTaggedMessageStructure *)arg3 parameterList:(struct __va_list_tag [1])arg4;
- (void)dealloc;
- (id)init;
- (void)replacePlaceholdersWithObjects;
- (void)setObject:(id)arg1 forPlaceholderKey:(id)arg2;
- (void)popPlaceholder:(id)arg1;
- (id)pushPlaceholder;
- (void)popObject;
- (void)pushObject:(id)arg1;
- (void)addWarningMessageEntry:(id)arg1;
- (void)addErrorMessageEntry:(id)arg1;
- (id)currentObject;

@end

