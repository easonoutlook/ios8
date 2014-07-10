/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "UIImagePickerControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"

@class UIImage, UIImagePickerController;

@interface RUIPhotoPicker : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate>
{
    UIImagePickerController *_imagePickerController;
    UIImage *_pickedImage;
    id _pickerCompletion;
}

@property(copy, nonatomic) id pickerCompletion; // @synthesize pickerCompletion=_pickerCompletion;
@property(retain, nonatomic) UIImage *pickedImage; // @synthesize pickedImage=_pickedImage;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)arg1;
- (void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2;
- (void)_dismissWithImage:(id)arg1;
- (void)pickImageWithParentController:(id)arg1 completion:(id)arg2;

@end

