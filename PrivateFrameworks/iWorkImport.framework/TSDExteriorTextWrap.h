/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

// Not exported
@interface TSDExteriorTextWrap : NSObject <NSCopying, NSMutableCopying>
{
    _Bool _isHTMLWrap;
    int _type;
    int _direction;
    int _fitType;
    double _margin;
    double _alphaThreshold;
}

+ (id)exteriorTextWrapWithIsHTMLWrap:(_Bool)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;
+ (id)exteriorTextWrap;
@property(readonly, nonatomic) double alphaThreshold; // @synthesize alphaThreshold=_alphaThreshold;
@property(readonly, nonatomic) double margin; // @synthesize margin=_margin;
@property(readonly, nonatomic) int fitType; // @synthesize fitType=_fitType;
@property(readonly, nonatomic) int direction; // @synthesize direction=_direction;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
@property(readonly, nonatomic) _Bool isHTMLWrap; // @synthesize isHTMLWrap=_isHTMLWrap;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIsHTMLWrap:(_Bool)arg1 type:(int)arg2 direction:(int)arg3 fitType:(int)arg4 margin:(double)arg5 alphaThreshold:(double)arg6;
- (id)init;
- (void)saveToArchive:(struct ExteriorTextWrapArchive *)arg1 archiver:(id)arg2;
- (id)initWithArchive:(const struct ExteriorTextWrapArchive *)arg1;

@end

