/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString, UIImage;

// Not exported
@interface SFAirDropNode : NSObject
{
    struct __SFOperation *_sender;
    _Bool _unknown;
    _Bool _monogram;
    _Bool _supportsPasses;
    _Bool _supportsMixedTypes;
    _Bool _supportsWiFiConfig;
    id _node;
    NSString *_realName;
    UIImage *_displayIcon;
    NSString *_displayName;
    NSString *_secondaryName;
}

+ (id)nodeWithSFNode:(struct __SFNode *)arg1;
@property(readonly) _Bool supportsWiFiConfig; // @synthesize supportsWiFiConfig=_supportsWiFiConfig;
@property(readonly) _Bool supportsMixedTypes; // @synthesize supportsMixedTypes=_supportsMixedTypes;
@property(readonly) _Bool supportsPasses; // @synthesize supportsPasses=_supportsPasses;
@property(getter=isMonogram) _Bool monogram; // @synthesize monogram=_monogram;
@property(getter=isUnknown) _Bool unknown; // @synthesize unknown=_unknown;
@property(retain) NSString *secondaryName; // @synthesize secondaryName=_secondaryName;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) UIImage *displayIcon; // @synthesize displayIcon=_displayIcon;
@property(retain) NSString *realName; // @synthesize realName=_realName;
@property(retain) id node; // @synthesize node=_node;
- (void).cxx_destruct;
- (void)handleOperationCallback:(struct __SFOperation *)arg1 event:(long long)arg2 withResults:(id)arg3;
- (void)cancelSend;
- (void)startSendWithSessionID:(id)arg1 items:(id)arg2 description:(id)arg3 previewImage:(id)arg4;
- (void)updateWithSFNode:(struct __SFNode *)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

