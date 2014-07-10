/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol RemoteUITableHeader <NSObject>
- (double)headerHeightForWidth:(double)arg1 inTableView:(id)arg2;
- (void)setSectionIsFirst:(_Bool)arg1;
- (id)initWithAttributes:(id)arg1;

@optional
- (void)setDelegate:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setIconImage:(id)arg1;
- (void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
- (void)setDetailText:(id)arg1 attributes:(id)arg2;
- (void)setText:(id)arg1 attributes:(id)arg2;
@end

