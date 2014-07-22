//  FMCSlider.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/FMCRPCRequest.h>

@interface FMCSlider : FMCRPCRequest {}

-(id) init;
-(id) initWithDictionary:(NSMutableDictionary*) dict;

@property(strong) NSNumber* numTicks;
@property(strong) NSNumber* position;
@property(strong) NSString* sliderHeader;
@property(strong) NSMutableArray* sliderFooter;
@property(strong) NSNumber* timeout;

@end
