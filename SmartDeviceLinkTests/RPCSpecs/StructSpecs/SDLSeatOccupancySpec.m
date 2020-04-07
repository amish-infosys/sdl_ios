

//
//  SDLSeatOccupancySpec.m
//  SmartDeviceLink


#import <Foundation/Foundation.h>

#import <Quick/Quick.h>
#import <Nimble/Nimble.h>

#import "SDLSeatOccupancy.h"
#import "SDLRPCParameterNames.h"
#import "SDLSeatStatus.h"

QuickSpecBegin(SDLSeatOccupancySpec)

describe(@"Getter/Setter Tests", ^ {
    __block SDLSeatStatus *seatsOccupied = [[SDLSeatStatus alloc] init];
    __block SDLSeatStatus *seatsBelted = [[SDLSeatStatus alloc] init];
    
    
    it(@"Should set and get correctly", ^ {
        SDLSeatOccupancy* testStruct = [[SDLSeatOccupancy alloc] init];
        
        testStruct.seatsOccupied = [@[seatsOccupied] copy];
        testStruct.seatsBelted = [@[seatsBelted] copy];
        
        expect(testStruct.seatsOccupied).to(equal([@[seatsOccupied] copy]));
        expect(testStruct.seatsBelted).to(equal([@[seatsBelted] copy]));
    });
    
    it(@"Should get correctly when initialized", ^ {
        NSMutableDictionary* dict = [@{SDLRPCParameterNameSeatsOccupied:[@[seatsOccupied] copy],
                                       SDLRPCParameterNameSeatsBelted:[@[seatsBelted] copy]} mutableCopy];
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
        SDLSeatOccupancy* testStruct = [[SDLSeatOccupancy alloc] initWithDictionary:dict];
#pragma clang diagnostic pop
        
        expect(testStruct.seatsOccupied).to(equal([@[seatsOccupied] copy]));
        expect(testStruct.seatsBelted).to(equal([@[seatsBelted] copy]));
    });
    
    it(@"Should return nil if not set", ^ {
        SDLSeatOccupancy* testStruct = [[SDLSeatOccupancy alloc] init];
        
        expect(testStruct.seatsOccupied).to(beNil());
        expect(testStruct.seatsBelted).to(beNil());
    });
});

QuickSpecEnd

