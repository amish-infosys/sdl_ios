//  FMCUnsubscribeVehicleData.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/FMCRPCRequest.h>

@interface FMCUnsubscribeVehicleData : FMCRPCRequest {}

-(id) init;
-(id) initWithDictionary:(NSMutableDictionary*) dict;

@property(assign) NSNumber* gps;
@property(assign) NSNumber* speed;
@property(assign) NSNumber* rpm;
@property(assign) NSNumber* fuelLevel;
@property(assign) NSNumber* fuelLevel_State;
@property(assign) NSNumber* instantFuelConsumption;
@property(assign) NSNumber* externalTemperature;
@property(assign) NSNumber* prndl;
@property(assign) NSNumber* tirePressure;
@property(assign) NSNumber* odometer;
@property(assign) NSNumber* beltStatus;
@property(assign) NSNumber* bodyInformation;
@property(assign) NSNumber* deviceStatus;
@property(assign) NSNumber* driverBraking;
@property(assign) NSNumber* wiperStatus;
@property(assign) NSNumber* headLampStatus;
@property(assign) NSNumber* engineTorque;
@property(assign) NSNumber* accPedalPosition;
@property(assign) NSNumber* steeringWheelAngle;
@property(assign) NSNumber* eCallInfo;
@property(assign) NSNumber* airbagStatus;
@property(assign) NSNumber* emergencyEvent;
@property(assign) NSNumber* clusterModeStatus;
@property(assign) NSNumber* myKey;

@end
