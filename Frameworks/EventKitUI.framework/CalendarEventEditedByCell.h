/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class UILabel;

@interface CalendarEventEditedByCell : UITableViewCell
{
    UILabel *_titleLabel2;
    UILabel *_valueLabel2;
    unsigned int _valuePlaceholder:2;
    id <EKCellShortener> _shortener;
}

@property(nonatomic) __weak id <EKCellShortener> shortener; // @synthesize shortener=_shortener;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_checkValueWidth;
- (_Bool)detailText2IsPlaceholder;
- (_Bool)detailTextIsPlaceholder;
- (void)setDetailText2IsPlaceholder:(_Bool)arg1;
- (void)setDetailTextIsPlaceholder:(_Bool)arg1;
@property(readonly, retain, nonatomic) UILabel *detailTextLabel2;
@property(readonly, retain, nonatomic) UILabel *textLabel2;
- (void)_copyTextLabelAttributesFrom:(id)arg1 to:(id)arg2;

@end

