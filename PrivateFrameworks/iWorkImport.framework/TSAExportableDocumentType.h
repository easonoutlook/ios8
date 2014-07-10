/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, TSUColor;

// Not exported
@interface TSAExportableDocumentType : NSObject
{
    NSString *_type;
    NSString *_localizedName;
    TSUColor *_exportFormatChooserItemTextColor;
    NSString *_exportProgressMessage;
}

+ (id)exportableTypeWithType:(id)arg1 localizedName:(id)arg2 exportFormatChooserItemTextColor:(id)arg3 exportProgressMessage:(id)arg4;
+ (id)exportableTypeWithType:(id)arg1 localizedName:(id)arg2 exportFormatChooserItemTextColor:(id)arg3;
@property(readonly, nonatomic) NSString *exportProgressMessage; // @synthesize exportProgressMessage=_exportProgressMessage;
@property(readonly, nonatomic) TSUColor *exportFormatChooserItemTextColor; // @synthesize exportFormatChooserItemTextColor=_exportFormatChooserItemTextColor;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSString *type; // @synthesize type=_type;
- (id)description;
- (void)dealloc;
- (id)initWithType:(id)arg1 localizedName:(id)arg2 exportFormatChooserItemTextColor:(id)arg3 exportProgressMessage:(id)arg4;

@end

