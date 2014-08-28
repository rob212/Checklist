//
//  ChecklistItem.m
//  Checklists
//
//  Created by Robert McBryde on 25/08/2014.
//  Copyright (c) 2014 Robert McBryde. All rights reserved.
//

#import "ChecklistItem.h"

@implementation ChecklistItem

- (void) toggleChecked
{
    self.checked = !self.checked;
}

@end
