/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "UIAlertViewDelegate-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, PLTableViewEditableCell, UIAlertView, UIImageView, UIPickerView, UITableView, UITableViewCell, UIView, VUCategory, VUCategoryCell, VUFooterContainerView;

@interface VUPublishViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIPickerViewDelegate, UIAlertViewDelegate>
{
    UITableView *_tableView;
    UIPickerView *_picker;
    UIView *_pickerContainer;
    _Bool _viewShrunk;
    _Bool _showingPicker;
    UIImageView *_headerImageView;
    PLTableViewEditableCell *_titleCell;
    PLTableViewEditableCell *_descriptionCell;
    double _descriptionHeight;
    PLTableViewEditableCell *_optionCells[2];
    NSMutableArray *_tagCells;
    VUCategoryCell *_categoryCell;
    NSArray *_accessCells;
    unsigned long long _accessRow;
    UITableViewCell *_accountCell;
    VUFooterContainerView *_footerContainer;
    UIAlertView *_authenticationAlert;
    UIAlertView *_accountAlert;
    UIAlertView *_authenticationFailedAlert;
    struct {
        long long title;
        long long hd;
        long long tags;
        long long category;
        long long access;
        long long account;
    } _sectionIndices;
    _Bool _showHDSection;
    _Bool _enableHDSection;
    int _selectedOption;
    id <VUPublishViewControllerDelegate> _delegate;
    long long _SDSize;
    long long _HDSize;
}

@property(readonly, nonatomic) int selectedOption; // @synthesize selectedOption=_selectedOption;
@property(nonatomic) long long HDSize; // @synthesize HDSize=_HDSize;
@property(nonatomic) long long SDSize; // @synthesize SDSize=_SDSize;
@property(nonatomic) _Bool enableHDSection; // @synthesize enableHDSection=_enableHDSection;
@property(nonatomic) _Bool showHDSection; // @synthesize showHDSection=_showHDSection;
@property(nonatomic) __weak id <VUPublishViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) VUCategory *videoCategory;
@property(readonly, nonatomic) NSArray *videoTags;
@property(readonly, nonatomic) NSString *videoDescription;
@property(readonly, nonatomic) NSString *videoTitle;
- (void)_authenticatorFailed:(id)arg1;
- (void)_authenticatorStateChanged:(id)arg1;
- (void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)editableTagCellEndOfTagCharacterPressed:(id)arg1;
- (void)editableCell:(id)arg1 textChanged:(id)arg2;
- (void)editableCellReturnPressed:(id)arg1;
- (void)editableCellDidBeginEditing:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (double)pickerView:(id)arg1 rowHeightForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)termsOfUseURL;
- (id)termsOfUseString;
- (id)accountString;
- (id)accountAlert;
- (id)headerLogo;
- (void)authReturnKeyPressed:(id)arg1;
- (id)authenticator;
- (id)accessCells;
- (id)categories;
- (void)_termsButtonPressed:(id)arg1;
- (void)_hidePicker;
- (void)_showPicker;
- (void)_unshrinkView;
- (void)_shrinkView;
- (void)_automaticKeyboardDidHide:(id)arg1;
- (void)_automaticKeyboardDidShow:(id)arg1;
- (void)orderOutKeyboard;
- (void)resignResponder;
- (void)_footerFrameDidChangeWithSplitKeyboard:(_Bool)arg1;
- (void)_updatePublishButton;
- (long long)_indexOfBlankTagCellOtherThan:(id)arg1;
- (void)_addNewTagCell;
- (void)_updateAccountCell;
- (void)_cancel;
- (void)_publish;
- (_Bool)_isAuthenticated;
- (void)showAlertWithTitle:(id)arg1 message:(id)arg2;
- (_Bool)checkParametersAndWarn;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

