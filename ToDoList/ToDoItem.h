//
//  ToDoItem.h
//  ToDoList
//
//  Created by Ola Skierbiszewska on 21/04/14.
//  Copyright (c) 2014 Ola Skierbiszewska. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

    @property NSString *itemName;
    @property BOOL completed;
    @property (readonly) NSDate *creationDate;

@end
