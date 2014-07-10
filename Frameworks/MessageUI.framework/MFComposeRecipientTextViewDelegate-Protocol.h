/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol MFComposeRecipientTextViewDelegate <NSObject>

@optional
- (_Bool)chooseSelectedSearchResultForComposeRecipientView:(id)arg1;
- (void)selectPreviousSearchResultForComposeRecipientView:(id)arg1;
- (void)selectNextSearchResultForComposeRecipientView:(id)arg1;
- (void)dismissSearchResultsForComposeRecipientView:(id)arg1;
- (_Bool)presentSearchResultsForComposeRecipientView:(id)arg1;
- (_Bool)composeRecipientViewShowingSearchResults:(id)arg1;
- (void)composeRecipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientViewReturnPressed:(id)arg1;
- (unsigned long long)presentationOptionsForRecipient:(id)arg1;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (id)composeRecipientView:(id)arg1 composeRecipientForRecord:(void *)arg2 identifier:(int)arg3;
- (id)composeRecipientView:(id)arg1 composeRecipientForAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 showCorecipients:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 showPersonCardForAtom:(id)arg2;
- (void)composeRecipientViewDidFinishPickingRecipient:(id)arg1;
- (void)composeRecipientViewRequestAddRecipient:(id)arg1;
- (_Bool)recipientViewShouldIgnoreFirstResponderChanges:(id)arg1;
- (void)recipientViewDidResignFirstResponder:(id)arg1;
- (void)recipientViewDidBecomeFirstResponder:(id)arg1;
- (void)composeRecipientView:(id)arg1 didSelectRecipients:(id)arg2;
- (void)composeRecipientView:(id)arg1 textDidChange:(id)arg2;
- (void)composeRecipientView:(id)arg1 didChangeSize:(struct CGSize)arg2;
- (void)composeRecipientView:(id)arg1 didReplaceRecipients:(id)arg2 withRecipients:(id)arg3;
- (void)composeRecipientView:(id)arg1 didRemoveRecipient:(id)arg2;
- (void)composeRecipientView:(id)arg1 didFinishEnteringAddress:(id)arg2;
- (void)composeRecipientView:(id)arg1 didAddRecipient:(id)arg2;
@end

