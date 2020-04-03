
//
//  SDLStabilityControlStatusSpec.m
//  SmartDeviceLink


#import <Foundation/Foundation.h>

#import <Quick/Quick.h>
#import <Nimble/Nimble.h>

#import "SDLStabilityControlsStatus.h"
#import "SDLRPCParameterNames.h"
#import "SDLVehicleDataStatus.h"

QuickSpecBegin(SDLStabilityControlStatusSpec)

describe(@"Getter/Setter Tests", ^ {
    it(@"Should set and get correctly", ^ {
        SDLStabilityControlsStatus* testStruct = [[SDLStabilityControlsStatus alloc] init];
        
        testStruct.escSystem = SDLVehicleDataStatusOff;
        testStruct.trailerSwayControl = SDLVehicleDataStatusOff;
        
        expect(testStruct.escSystem).to(equal(SDLVehicleDataStatusOff));
        expect(testStruct.trailerSwayControl).to(equal(SDLVehicleDataStatusOff));
    });
    
    it(@"Should get correctly when initialized", ^ {
        NSMutableDictionary* dict = [@{SDLRPCParameterNameEscSystem:SDLVehicleDataStatusOff,
                                       SDLRPCParameterNameTrailerSwayControl:SDLVehicleDataStatusOff} mutableCopy];
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
        SDLStabilityControlsStatus* testStruct = [[SDLStabilityControlsStatus alloc] initWithDictionary:dict];
#pragma clang diagnostic pop
        
        expect(testStruct.escSystem).to(equal(SDLVehicleDataStatusOff));
        expect(testStruct.trailerSwayControl).to(equal(SDLVehicleDataStatusOff));
    });
    
    it(@"Should return nil if not set", ^ {
        SDLStabilityControlsStatus* testStruct = [[SDLStabilityControlsStatus alloc] init];
        
        expect(testStruct.escSystem).to(beNil());
        expect(testStruct.trailerSwayControl).to(beNil());
    });
});

QuickSpecEnd

