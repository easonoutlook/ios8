/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class UISwitch;

@interface PKSettingTableCell : UITableViewCell
{
    UISwitch *_settingSwitch;
    id _target;
    SEL _action;
}

@property(readonly, nonatomic) SEL action; // @synthesize action=_action;
@property(readonly, nonatomic) id target; // @synthesize target=_target;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
@property(nonatomic, getter=isOn) _Bool on;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)initWithTitle:(id)arg1 target:(id)arg2 action:(SEL)arg3;

@end

