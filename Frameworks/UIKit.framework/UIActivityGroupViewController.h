/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UICollectionViewController.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "_UIActivityGroupViewDelegateFlowLayout-Protocol.h"

@class NSArray, NSDictionary, NSIndexPath, UILongPressGestureRecognizer, UIView, _UIActivityUserDefaults, _UIUserDefaultsActivity;

@interface UIActivityGroupViewController : UICollectionViewController <_UIActivityGroupViewDelegateFlowLayout, UIGestureRecognizerDelegate>
{
    _Bool _darkStyleOnLegacyApp;
    _Bool _embedded;
    _Bool _picker;
    _Bool _hasActivities;
    _Bool _activityIndexDidChangeWhileDragging;
    id <UIActivityGroupViewControllerDelegate> _delegate;
    long long _activityCategory;
    NSDictionary *_customActivityTitles;
    NSArray *_activities;
    NSArray *_visibleActivities;
    _UIActivityUserDefaults *_userDefaults;
    _UIUserDefaultsActivity *_userDefaultsActivity;
    UILongPressGestureRecognizer *_editingGestureRecognizer;
    UIView *_draggingView;
    NSIndexPath *_indexPathForMenuActivity;
    struct CGPoint _initialDraggingLocation;
}

@property(copy, nonatomic) NSIndexPath *indexPathForMenuActivity; // @synthesize indexPathForMenuActivity=_indexPathForMenuActivity;
@property(nonatomic) _Bool activityIndexDidChangeWhileDragging; // @synthesize activityIndexDidChangeWhileDragging=_activityIndexDidChangeWhileDragging;
@property(retain, nonatomic) UIView *draggingView; // @synthesize draggingView=_draggingView;
@property(nonatomic) struct CGPoint initialDraggingLocation; // @synthesize initialDraggingLocation=_initialDraggingLocation;
@property(retain, nonatomic) UILongPressGestureRecognizer *editingGestureRecognizer; // @synthesize editingGestureRecognizer=_editingGestureRecognizer;
@property(retain, nonatomic) _UIUserDefaultsActivity *userDefaultsActivity; // @synthesize userDefaultsActivity=_userDefaultsActivity;
@property(retain, nonatomic) _UIActivityUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(copy, nonatomic) NSArray *visibleActivities; // @synthesize visibleActivities=_visibleActivities;
@property(nonatomic) _Bool hasActivities; // @synthesize hasActivities=_hasActivities;
@property(nonatomic, getter=isPicker) _Bool picker; // @synthesize picker=_picker;
@property(nonatomic, getter=isEmbedded) _Bool embedded; // @synthesize embedded=_embedded;
@property(nonatomic) _Bool darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
@property(copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property(copy, nonatomic) NSDictionary *customActivityTitles; // @synthesize customActivityTitles=_customActivityTitles;
@property(nonatomic) long long activityCategory; // @synthesize activityCategory=_activityCategory;
@property(nonatomic) id <UIActivityGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)activityUserDefaultsDidChange:(id)arg1;
- (void)ignoreUserDefaultsChangesWhileUsingBlock:(id)arg1;
- (void)unregisterForActivityUserDefaultsChanges;
- (void)registerForActivityUserDefaultsChanges;
- (void)hideItemAtIndexPath:(id)arg1;
- (id)activityGroupViewLayout;
- (_Bool)collectionView:(id)arg1 layout:(id)arg2 moveItemAtIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (_Bool)canMoveItemAtIndexPath:(id)arg1 toIndexPath:(id)arg2;
- (void)handleEditingGesture:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (struct UIEdgeInsets)_preferredSectionInset;
- (struct CGSize)_preferredCellSize;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (_Bool)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)activityForItemAtIndexPath:(id)arg1;
- (void)renameActivity:(id)arg1;
- (void)hideActivity:(id)arg1;
- (void)setEditing:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)_setVisibleActivities:(id)arg1 animated:(_Bool)arg2;
- (void)_updateVisibleActivitiesAnimated:(_Bool)arg1;
- (void)_setActivities:(id)arg1 animated:(_Bool)arg2;
- (void)setActivities:(id)arg1 animated:(_Bool)arg2;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithActivityCategory:(long long)arg1 userDefaults:(id)arg2 userDefaultsIdentifier:(id)arg3;
- (id)initWithActivityCategory:(long long)arg1;

@end

