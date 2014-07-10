/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CPPage, NSMutableArray;

@interface CPHitTest : NSObject
{
    CPPage *page;
    NSMutableArray *objectsOnPage;
    float mapTemp;
}

- (long long)compareByReadingOrder:(struct CGPoint)arg1 to:(struct CGPoint)arg2;
- (id)objectAtPoint:(struct CGPoint)arg1;
- (id)textLine:(struct CGPoint)arg1;
- (id)column:(struct CGPoint)arg1;
- (unsigned int)columnsAt:(struct CGPoint)arg1;
- (id)layoutArea:(struct CGPoint)arg1;
- (id)paragraphNear:(struct CGPoint)arg1;
- (id)paragraph:(struct CGPoint)arg1;
- (id)page;
- (void)dealloc;
- (id)initWithPage:(id)arg1;
- (id)findObjectIn:(id)arg1 at:(struct CGPoint)arg2 count:(int *)arg3;
- (id)findBestMatch:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)hitTestParagraph:(id)arg1 point:(struct CGPoint)arg2;
- (_Bool)hitTestGraphicObject:(id)arg1 point:(struct CGPoint)arg2;
- (void)findClickableObjects:(_Bool)arg1;

@end

