//
//  SDLDimensionSpec.m
//  SmartDeviceLink


#import <Foundation/Foundation.h>

#import <Quick/Quick.h>
#import <Nimble/Nimble.h>

#import "SDLDimension.h"

QuickSpecBegin(SDLDimensionSpec)

describe(@"Individual Enum Value Tests", ^ {
    it(@"Should match internal values", ^ {
        expect(SDLDimensionNoFix).to(equal(@"NO_FIX"));
        expect(SDLDimension2d).to(equal(@"2D"));
        expect(SDLDimension3d).to(equal(@"3D"));
    });
});

QuickSpecEnd
