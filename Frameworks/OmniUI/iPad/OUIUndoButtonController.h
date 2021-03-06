// Copyright 2010, 2013 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <Foundation/NSObject.h>

#import <OmniUI/OUIUndoBarButtonItem.h>

@protocol OUIUndoBarButtonItem;

@interface OUIUndoButtonController : NSObject

- (void)showUndoMenuFromItem:(OUIUndoBarButtonItem *)item;
- (BOOL)dismissUndoMenu;
- (BOOL)isMenuVisible;

@property(nonatomic,copy) UIColor *tintColor;
@property(nonatomic,weak) id <OUIUndoBarButtonItemTarget> undoBarButtonItemTarget;

@end
