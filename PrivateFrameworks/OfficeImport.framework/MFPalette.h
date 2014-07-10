/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "MFObject-Protocol.h"

@class NSMutableArray;

// Not exported
@interface MFPalette : NSObject <MFObject>
{
    NSMutableArray *m_colours;
}

+ (id)paletteWithColours:(id)arg1;
- (id)getColour:(int)arg1;
- (_Bool)resize:(int)arg1;
- (_Bool)setEntries:(int)arg1:(id)arg2;
- (int)selectInto:(id)arg1;
- (void)dealloc;
- (id)initWithColours:(id)arg1;
- (id)init;

@end

