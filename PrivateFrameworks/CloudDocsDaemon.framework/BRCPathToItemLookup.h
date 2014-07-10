/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class BRCItemID, BRCLocalItem, BRCPackageItem, BRCRelativePath, BRCServerItem;

@interface BRCPathToItemLookup : NSObject
{
    BRCRelativePath *_pathOfItem;
    BRCRelativePath *_pathInPackage;
    BRCLocalItem *_matchByFileID;
    BRCLocalItem *_matchByDocumentID;
    BRCLocalItem *_matchByPath;
    BRCServerItem *_serverItem;
    BRCServerItem *_serverByPath;
    BRCPackageItem *_packageItem;
    BRCItemID *_parentID;
    struct {
        unsigned int byFileID:1;
        unsigned int byDocumentID:1;
        unsigned int byPath:1;
        unsigned int parentID:1;
        unsigned int serverItem:1;
        unsigned int serverByPath:1;
        unsigned int packageItem:1;
    } _fetched;
}

+ (id)lookupForRelativePath:(id)arg1;
@property(readonly, nonatomic) BRCRelativePath *relpathInPackage; // @synthesize relpathInPackage=_pathInPackage;
@property(readonly, nonatomic) BRCRelativePath *relpathOfItem; // @synthesize relpathOfItem=_pathOfItem;
- (void).cxx_destruct;
- (id)description;
- (_Bool)_fetchByDocumentID;
- (_Bool)_fetchByFileID;
- (_Bool)_fetchByPath;
@property(readonly, nonatomic) BRCPackageItem *packageItem;
@property(readonly, nonatomic) BRCServerItem *serverByPath;
- (id)serverItemFor:(id)arg1;
@property(retain, nonatomic) BRCLocalItem *byDocumentID;
@property(retain, nonatomic) BRCLocalItem *byFileID;
@property(readonly, nonatomic) BRCLocalItem *byPath;
@property(readonly, nonatomic) BRCItemID *parentID;
- (id)initWithRelativePath:(id)arg1;
@property(readonly, nonatomic) BRCRelativePath *relpathOfFSEvent;

@end

