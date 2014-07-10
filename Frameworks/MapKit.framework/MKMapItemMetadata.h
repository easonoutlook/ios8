/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOBusiness, MKYelpDeal, NSMutableDictionary, NSString;

@interface MKMapItemMetadata : NSObject
{
    _Bool _hasCheckedForYelpDeal;
    GEOBusiness *_business;
    MKYelpDeal *_yelpDeal;
    NSMutableDictionary *_imageCache;
}

@property(retain, nonatomic) NSMutableDictionary *imageCache; // @synthesize imageCache=_imageCache;
@property(nonatomic) _Bool hasCheckedForYelpDeal; // @synthesize hasCheckedForYelpDeal=_hasCheckedForYelpDeal;
@property(retain, nonatomic) MKYelpDeal *yelpDeal; // @synthesize yelpDeal=_yelpDeal;
@property(readonly, nonatomic) GEOBusiness *business; // @synthesize business=_business;
- (void).cxx_destruct;
- (id)imageForURL:(id)arg1;
- (void)addImage:(id)arg1 forURL:(id)arg2;
@property(readonly, nonatomic) NSString *yelpID;
- (id)initWithBusiness:(id)arg1;

@end

