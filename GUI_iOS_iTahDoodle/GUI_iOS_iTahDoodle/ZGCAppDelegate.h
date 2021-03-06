//
//  AppDelegate.h
//  GUI_iOS_iTahDoodle
//
//  Created by EvilKernel on 12/27/14.
//  Copyright (c) 2014 Zerogravity. All rights reserved.
//

#import <UIKit/UIKit.h>

// Declaring a "C Helper function" to use it for getting a path
// to the location on disk where you can save the to-do list
NSString *ZGCDocPath(void); // you declare a C helper function outside of the class declaration. It is not part of the class

@interface ZGCAppDelegate : UIResponder <UIApplicationDelegate, UITableViewDataSource> // protocols this delegate conforms to.  dataSource is for tablebiews

#pragma mark - UI properties / objects
@property (strong, nonatomic) UIWindow *window;
@property (nonatomic) UITableView *taskTable;
@property (nonatomic) UITextField *taskField;
@property (nonatomic) UIButton *insertButton;

#pragma mark - Model properties / objects
@property (nonatomic) NSMutableArray *tasks;

#pragma mark -  method
- (void)addTask:(id)sender;



@end

