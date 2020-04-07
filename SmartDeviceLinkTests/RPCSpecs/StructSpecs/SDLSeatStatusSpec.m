


//
//  SDLSeatStatusSpec.m
//  SmartDeviceLink


#import <Foundation/Foundation.h>

#import <Quick/Quick.h>
#import <Nimble/Nimble.h>
#import "SDLSeatLocation.h"
#import "SDLSeatStatus.h"
#import "SDLRPCParameterNames.h"

QuickSpecBegin(SDLSeatStatusSpec)

describe(@"Getter/Setter Tests", ^ {
    __block SDLSeatLocation *seatLocation = [[SDLSeatLocation alloc] init];
    __block NSNumber<SDLBool> *conditionActive = @NO;
    
    
    it(@"Should set and get correctly", ^ {
        SDLSeatStatus* testStruct = [[SDLSeatStatus alloc] init];
        
        testStruct.seatLocation = seatLocation;
        testStruct.conditionActive = conditionActive;
        
        expect(testStruct.seatLocation).to(equal(seatLocation));
        expect(testStruct.conditionActive).to(equal(conditionActive));
    });
    
    it(@"Should get correctly when initialized", ^ {
        NSMutableDictionary* dict = [@{SDLRPCParameterNameSeatLocation:seatLocation,
                                       SDLRPCParameterNameConditionActive:conditionActive} mutableCopy];
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
        SDLSeatStatus* testStruct = [[SDLSeatStatus alloc] initWithDictionary:dict];
#pragma clang diagnostic pop
        
        expect(testStruct.seatLocation).to(equal(seatLocation));
        expect(testStruct.conditionActive).to(equal(conditionActive));
    });
    
    it(@"Should return nil if not set", ^ {
        SDLSeatStatus* testStruct = [[SDLSeatStatus alloc] init];
        
        expect(testStruct.seatLocation).to(beNil());
        expect(testStruct.conditionActive).to(beNil());
    });
});

QuickSpecEnd

