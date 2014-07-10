/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIAlertView, UIPrintingProgressViewController;

// Not exported
@interface UIPrintingProgress : NSObject
{
    NSString *_printerName;
    id _cancelHandler;
    double _startTime;
    double _displayTime;
    UIAlertView *_alert;
    UIPrintingProgressViewController *_viewController;
    _Bool _donePrinting;
    _Bool _forceDisplayAsAlert;
}

- (double)nextPrintDelay;
- (void)setPage:(long long)arg1 ofPage:(long long)arg2;
- (void)setPrintInfoState:(int)arg1;
- (void)endProgress;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)alertViewCancel:(id)arg1;
- (void)didPresentAlertView:(id)arg1;
- (void)progressCancel;
- (void)hideProgressAnimated:(_Bool)arg1;
- (void)showProgress:(id)arg1 immediately:(_Bool)arg2;
- (_Bool)progressVisible;
- (void)dealloc;
- (id)initWithPrinterName:(id)arg1 forceDisplayAsAlert:(_Bool)arg2 cancelHandler:(id)arg3;

@end

