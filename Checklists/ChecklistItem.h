//
//  ChecklistItem.h
//  Checklists
//
//  Created by Robert McBryde on 25/08/2014.
//  Copyright (c) 2014 Robert McBryde. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ChecklistItem : NSObject

@property (nonatomic, copy) NSString *text;
@property (nonatomic, assign) BOOL checked;

- (void)toggleChecked;

@end
