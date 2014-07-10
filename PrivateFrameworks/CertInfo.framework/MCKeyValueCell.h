/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class UILabel;

@interface MCKeyValueCell : UITableViewCell
{
    _Bool _useDataConstraints;
    UILabel *_keyLabel;
    UILabel *_valueLabel;
}

@property(nonatomic) _Bool useDataConstraints; // @synthesize useDataConstraints=_useDataConstraints;
@property(retain, nonatomic) UILabel *valueLabel; // @synthesize valueLabel=_valueLabel;
@property(retain, nonatomic) UILabel *keyLabel; // @synthesize keyLabel=_keyLabel;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)updatePreferredMaxLayoutWidth;
- (void)setValue:(id)arg1 forKey:(id)arg2;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)_setup:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithDataConstraints:(_Bool)arg1 reuseIdentifier:(id)arg2;

@end

