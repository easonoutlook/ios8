/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <Social/SLComposeServiceViewController.h>

#import "SLMicroBlogAccountsTableViewControllerDelegate-Protocol.h"
#import "SLMicroBlogMentionsDelegate-Protocol.h"
#import "SLSheetPlaceViewControllerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSArray, NSObject<SLMicroBlogSheetDelegate>, NSString, SLComposeSheetConfigurationItem, SLMicroBlogAccountsTableViewController, SLMicroBlogMentionsViewController, SLMicroBlogUserRecord, SLPlace, SLSheetPlaceViewController;

@interface SLMicroBlogComposeViewController : SLComposeServiceViewController <UITextViewDelegate, SLMicroBlogMentionsDelegate, SLMicroBlogAccountsTableViewControllerDelegate, SLSheetPlaceViewControllerDelegate>
{
    NSObject<SLMicroBlogSheetDelegate> *_microBlogSheetDelegate;
    NSString *_serviceAccountTypeIdentifier;
    SLMicroBlogMentionsViewController *_mentionsViewController;
    unsigned long long _mentionStartLocation;
    _Bool _mentionPendingStart;
    _Bool _rotatedDuringAccountsPopover;
    _Bool _usingLocationOverride;
    NSArray *_accountUserRecords;
    NSArray *_accountIdentifiers;
    SLMicroBlogUserRecord *_selectedAccountUserRecord;
    SLComposeSheetConfigurationItem *_accountConfigurationItem;
    SLComposeSheetConfigurationItem *_locationConfigurationItem;
    SLMicroBlogAccountsTableViewController *_accountViewController;
    SLSheetPlaceViewController *_placeViewController;
    SLPlace *_currentPlace;
    long long _shortenedURLCost;
    long long _maxURLLength;
    _Bool _isPresentingPlaces;
}

+ (id)serviceBundle;
- (void).cxx_destruct;
- (void)textViewDidChangeSelection:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)didSelectPost;
- (id)_mentionsSearchString;
- (void)applyMention:(id)arg1;
- (void)mentionsViewController:(id)arg1 finishedWithResult:(id)arg2;
- (void)_dismissMentionsViewController;
- (void)_presentMentionsViewControllerIfApplicableForSearchString:(id)arg1;
- (void)_presentMentionsViewControllerWithSearchString:(id)arg1;
- (void)noteLocationInfoChanged:(id)arg1;
- (void)setGeotagStatus:(int)arg1;
- (void)placeViewController:(id)arg1 willDisappear:(_Bool)arg2;
- (void)placeViewController:(id)arg1 didSelectPlace:(id)arg2;
- (id)_placeViewController;
- (void)updateGeotagStatus;
- (void)_presentPlaceViewController;
- (void)updateShortenedURLCost;
- (int)characterCountForEnteredText:(id)arg1 attachments:(id)arg2;
- (_Bool)_countMediaAttachmentsTowardCharacterCount;
- (long long)_characterCountForText:(id)arg1;
- (id)completeText:(id)arg1 withAttachments:(id)arg2;
- (_Bool)isContentValid;
- (int)_charactersRemainingWithText:(id)arg1;
- (void)_hostApplicationDidEnterBackground;
- (void)_hostApplicationWillEnterForeground;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)presentNoAccountsAlert;
- (void)_presentNoAccountsAlertIfNecessaryAndReady;
- (void)presentationAnimationDidFinish;
@property __weak NSObject<SLMicroBlogSheetDelegate> *microBlogSheetDelegate;
- (id)configurationItems;
- (id)_locationConfigurationItem;
- (void)_performLocationAction;
- (id)_accountConfigurationItem;
- (void)accountsViewController:(id)arg1 didSelectAccountUserRecord:(id)arg2;
- (void)_presentAccountPickerController;
- (void)_beginLoadingAccountProfileImages;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (void)appWillEnterForeground:(id)arg1;

@end

