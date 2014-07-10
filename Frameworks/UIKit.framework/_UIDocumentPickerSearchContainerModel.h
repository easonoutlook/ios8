/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/_UIDocumentPickerContainerModel.h>

#import "SPSearchAgentDelegate-Protocol.h"

@class NSArray, NSString, SPSearchAgent;

// Not exported
@interface _UIDocumentPickerSearchContainerModel : _UIDocumentPickerContainerModel <SPSearchAgentDelegate>
{
    NSArray *_modelObjects;
    SPSearchAgent *_searchAgent;
}

@property(retain, nonatomic) SPSearchAgent *searchAgent; // @synthesize searchAgent=_searchAgent;
@property(retain, nonatomic) NSArray *modelObjects; // @synthesize modelObjects=_modelObjects;
- (id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2;
- (void)searchAgentClearedResults:(id)arg1;
- (void)searchAgentUpdatedResults:(id)arg1;
@property(retain, nonatomic) NSString *queryString;
- (id)displayTitle;
- (void)dealloc;
- (void)stopMonitoringChanges;
- (void)startMonitoringChanges;

@end
