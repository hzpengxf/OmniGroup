// Copyright 2010-2013 The Omni Group. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <Foundation/NSObject.h>

extern NSString * const ODSDocumentPickerFilterDocumentIdentifier;
extern NSString * const ODSDocumentPickerFilterTemplateIdentifier;


@interface OUIDocumentPickerFilter : NSObject

@property(nonatomic,copy) NSString *identifier;
@property(nonatomic,copy) NSString *title;
@property(nonatomic,copy) NSString *imageName;
@property(nonatomic,copy) NSPredicate *predicate; // Suitable for use with ODSFilter

@end
