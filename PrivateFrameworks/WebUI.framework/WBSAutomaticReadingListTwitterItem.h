/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebUI/WBSAutomaticReadingListItem.h>

@class NSDate, NSString;

@interface WBSAutomaticReadingListTwitterItem : WBSAutomaticReadingListItem
{
    NSString *_originatorScreenName;
    NSString *_displayURLString;
    NSString *_expandedURLString;
    NSString *_originatorProfileImageURLString;
    NSDate *_retweetCreationDate;
}

@property(copy, nonatomic) NSDate *retweetCreationDate; // @synthesize retweetCreationDate=_retweetCreationDate;
@property(copy, nonatomic) NSString *originatorProfileImageURLString; // @synthesize originatorProfileImageURLString=_originatorProfileImageURLString;
@property(copy, nonatomic) NSString *expandedURLString; // @synthesize expandedURLString=_expandedURLString;
@property(copy, nonatomic) NSString *displayURLString; // @synthesize displayURLString=_displayURLString;
@property(copy, nonatomic) NSString *originatorScreenName; // @synthesize originatorScreenName=_originatorScreenName;
- (void).cxx_destruct;
- (id)description;
- (id)sourceRecordCreationDate;
- (id)retweeterProfileURL;
- (id)_profileImageURLStringWithSuffix:(id)arg1;
- (id)biggerOriginatorProfileImageURL;
- (struct _NSRange)displayURLRange;
- (id)displayString;
- (id)originatorProfileImageURL;
- (id)originatorProfileURL;
- (id)sourceRecordURL;
- (id)domainString;
- (id)socialSource;
- (id)initWithDictionary:(id)arg1 socialSourceAccountIdentifier:(id)arg2;

@end

