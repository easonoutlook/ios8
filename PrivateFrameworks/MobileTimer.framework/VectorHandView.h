/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

#import "HandView-Protocol.h"

@class RenderedHandViewFactory;

@interface VectorHandView : UIView <HandView>
{
    RenderedHandViewFactory *_factory;
}

- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithPDFFile:(id)arg1 offset:(struct CGPoint)arg2 scale:(struct CGSize)arg3 bundle:(id)arg4 allowCaching:(_Bool)arg5;

@end

