/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <WebKitLegacy/WebBasePluginPackage.h>

@class NSBundle;

// Not exported
@interface WebPluginPackage : WebBasePluginPackage
{
    NSBundle *nsBundle;
}

- (id)bundle;
- (_Bool)load;
- (Class)viewFactory;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end

