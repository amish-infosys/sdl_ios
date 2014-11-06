//  FMCRPCNotification.m
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <AppLink/FMCRPCNotification.h>
#import "FMCNames.h"

@implementation FMCRPCNotification

- (id)initWithName:(NSString *)name
{
    if (self = [super initWithName:name])
    {
        messageType = NAMES_notification;
    }
    return self;
}

- (id)initWithDictionary:(NSMutableDictionary*) dict
{
    if (self = [super initWithDictionary:dict])
    {
        messageType = NAMES_notification;
    }
    return self;
}

@end
