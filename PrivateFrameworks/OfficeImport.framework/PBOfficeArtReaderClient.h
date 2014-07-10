/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import <OfficeImport/OABReaderClient-Protocol.h>

// Not exported
@interface PBOfficeArtReaderClient : NSObject <OABReaderClient>
{
}

+ (_Bool)tablesAreAllowed;
+ (_Bool)escherIsFullySupported;
+ (void)readClientDataFromTableCell:(id)arg1 toTableCell:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromGroup:(id)arg1 toGroup:(id)arg2 state:(id)arg3;
+ (void)readClientDataFromShape:(id)arg1 toGraphic:(id)arg2 state:(id)arg3;
+ (id)newBuildFromBuildType:(int)arg1;
+ (int)directionFromFlyDirection:(int)arg1;
+ (int)presetIdFromFlyMethod:(int)arg1 isEntrance:(_Bool)arg2;
+ (id)newTargetFromDrawable:(id)arg1 clientData:(id)arg2 buildType:(int)arg3;
+ (_Bool)readPlaceholderInfo:(id)arg1 clientData:(id)arg2 toGraphic:(id)arg3 presentationState:(id)arg4;
+ (_Bool)readOleFromClientDataHolder:(id)arg1 toGraphic:(id)arg2 tgtClientData:(id)arg3 state:(id)arg4;
+ (void)addRecolorSpec:(const struct PptRecolorSpec *)arg1 toDictionary:(id)arg2;
+ (_Bool)readRecolorInfoFromClientDataHolder:(id)arg1 toClientData:(id)arg2;
+ (void)readHyperlinkFromShapeContainerHolder:(id)arg1 toDrawable:(id)arg2 state:(id)arg3;
+ (void)readClientAnchorFromContainer:(id)arg1 toDrawable:(id)arg2 state:(id)arg3;

@end

