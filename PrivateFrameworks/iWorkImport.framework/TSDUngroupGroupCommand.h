/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iWorkImport/TSDBaseGroupCommand.h>

// Not exported
@interface TSDUngroupGroupCommand : TSDBaseGroupCommand
{
}

- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)actionString;
- (void)redo;
- (void)undo;
- (void)commit;
- (id)initWithGroup:(id)arg1 subcommandProvider:(id)arg2 objectContext:(id)arg3;

@end

