/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

// Not exported
@interface WKAccessibilityWebPageObjectBase : NSObject
{
    struct WebPage *m_page;
    id m_parent;
}

- (id)accessibilityFocusedUIElement;
- (void)setRemoteParent:(id)arg1;
- (void)setWebPage:(struct WebPage *)arg1;
- (id)accessibilityRootObjectWrapper;

@end
