//  FMCConsoleController.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <UIKit/UIKit.h>
#import <AppLink/Debug/FMCDebugTool.h>

@interface FMCConsoleController : UITableViewController <FMCDebugToolConsole> {
	NSMutableArray* messageList;
    BOOL atBottom;
    NSDateFormatter* dateFormatter;
}

@property (readonly) NSMutableArray *messageList;

-(id) initWithTableView:(UITableView*) tableView;

-(void) appendString:(NSString*) toAppend;
-(void) appendMessage:(FMCRPCMessage*) toAppend;

@end
