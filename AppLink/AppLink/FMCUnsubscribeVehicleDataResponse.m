//  FMCUnsubscribeVehicleDataResponse.m
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <AppLink/FMCUnsubscribeVehicleDataResponse.h>

#import <AppLink/FMCNames.h>

@implementation FMCUnsubscribeVehicleDataResponse

-(id) init {
    if (self = [super initWithName:NAMES_UnsubscribeVehicleData]) {}
    return self;
}

-(id) initWithDictionary:(NSMutableDictionary*) dict {
    if (self = [super initWithDictionary:dict]) {}
    return self;
}

-(void) setGps:(FMCVehicleDataResult*) gps {
    if (gps != nil) {
        [parameters setObject:gps forKey:NAMES_gps];
    } else {
        [parameters removeObjectForKey:NAMES_gps];
    }
}

-(FMCVehicleDataResult*) gps {
    NSObject* obj = [parameters objectForKey:NAMES_gps];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setSpeed:(FMCVehicleDataResult*) speed {
    if (speed != nil) {
        [parameters setObject:speed forKey:NAMES_speed];
    } else {
        [parameters removeObjectForKey:NAMES_speed];
    }
}

-(FMCVehicleDataResult*) speed {
    NSObject* obj = [parameters objectForKey:NAMES_speed];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setRpm:(FMCVehicleDataResult*) rpm {
    if (rpm != nil) {
        [parameters setObject:rpm forKey:NAMES_rpm];
    } else {
        [parameters removeObjectForKey:NAMES_rpm];
    }
}

-(FMCVehicleDataResult*) rpm {
    NSObject* obj = [parameters objectForKey:NAMES_rpm];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setFuelLevel:(FMCVehicleDataResult*) fuelLevel {
    if (fuelLevel != nil) {
        [parameters setObject:fuelLevel forKey:NAMES_fuelLevel];
    } else {
        [parameters removeObjectForKey:NAMES_fuelLevel];
    }
}

-(FMCVehicleDataResult*) fuelLevel {
    NSObject* obj = [parameters objectForKey:NAMES_fuelLevel];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setFuelLevel_State:(FMCVehicleDataResult*) fuelLevel_State {
    if (fuelLevel_State != nil) {
        [parameters setObject:fuelLevel_State forKey:NAMES_fuelLevel_State];
    } else {
        [parameters removeObjectForKey:NAMES_fuelLevel_State];
    }
}

-(FMCVehicleDataResult*) fuelLevel_State {
    NSObject* obj = [parameters objectForKey:NAMES_fuelLevel_State];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setInstantFuelConsumption:(FMCVehicleDataResult*) instantFuelConsumption {
    if (instantFuelConsumption != nil) {
        [parameters setObject:instantFuelConsumption forKey:NAMES_instantFuelConsumption];
    } else {
        [parameters removeObjectForKey:NAMES_instantFuelConsumption];
    }
}

-(FMCVehicleDataResult*) instantFuelConsumption {
    NSObject* obj = [parameters objectForKey:NAMES_instantFuelConsumption];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setExternalTemperature:(FMCVehicleDataResult*) externalTemperature {
    if (externalTemperature != nil) {
        [parameters setObject:externalTemperature forKey:NAMES_externalTemperature];
    } else {
        [parameters removeObjectForKey:NAMES_externalTemperature];
    }
}

-(FMCVehicleDataResult*) externalTemperature {
    NSObject* obj = [parameters objectForKey:NAMES_externalTemperature];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setPrndl:(FMCVehicleDataResult*) prndl {
    if (prndl != nil) {
        [parameters setObject:prndl forKey:NAMES_prndl];
    } else {
        [parameters removeObjectForKey:NAMES_prndl];
    }
}

-(FMCVehicleDataResult*) prndl {
    NSObject* obj = [parameters objectForKey:NAMES_prndl];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setTirePressure:(FMCVehicleDataResult*) tirePressure {
    if (tirePressure != nil) {
        [parameters setObject:tirePressure forKey:NAMES_tirePressure];
    } else {
        [parameters removeObjectForKey:NAMES_tirePressure];
    }
}

-(FMCVehicleDataResult*) tirePressure {
    NSObject* obj = [parameters objectForKey:NAMES_tirePressure];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setOdometer:(FMCVehicleDataResult*) odometer {
    if (odometer != nil) {
        [parameters setObject:odometer forKey:NAMES_odometer];
    } else {
        [parameters removeObjectForKey:NAMES_odometer];
    }
}

-(FMCVehicleDataResult*) odometer {
    NSObject* obj = [parameters objectForKey:NAMES_odometer];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setBeltStatus:(FMCVehicleDataResult*) beltStatus {
    if (beltStatus != nil) {
        [parameters setObject:beltStatus forKey:NAMES_beltStatus];
    } else {
        [parameters removeObjectForKey:NAMES_beltStatus];
    }
}

-(FMCVehicleDataResult*) beltStatus {
    NSObject* obj = [parameters objectForKey:NAMES_beltStatus];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setBodyInformation:(FMCVehicleDataResult*) bodyInformation {
    if (bodyInformation != nil) {
        [parameters setObject:bodyInformation forKey:NAMES_bodyInformation];
    } else {
        [parameters removeObjectForKey:NAMES_bodyInformation];
    }
}

-(FMCVehicleDataResult*) bodyInformation {
    NSObject* obj = [parameters objectForKey:NAMES_bodyInformation];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setDeviceStatus:(FMCVehicleDataResult*) deviceStatus {
    if (deviceStatus != nil) {
        [parameters setObject:deviceStatus forKey:NAMES_deviceStatus];
    } else {
        [parameters removeObjectForKey:NAMES_deviceStatus];
    }
}

-(FMCVehicleDataResult*) deviceStatus {
    NSObject* obj = [parameters objectForKey:NAMES_deviceStatus];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setDriverBraking:(FMCVehicleDataResult*) driverBraking {
    if (driverBraking != nil) {
        [parameters setObject:driverBraking forKey:NAMES_driverBraking];
    } else {
        [parameters removeObjectForKey:NAMES_driverBraking];
    }
}

-(FMCVehicleDataResult*) driverBraking {
    NSObject* obj = [parameters objectForKey:NAMES_driverBraking];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setWiperStatus:(FMCVehicleDataResult*) wiperStatus {
    if (wiperStatus != nil) {
        [parameters setObject:wiperStatus forKey:NAMES_wiperStatus];
    } else {
        [parameters removeObjectForKey:NAMES_wiperStatus];
    }
}

-(FMCVehicleDataResult*) wiperStatus {
    NSObject* obj = [parameters objectForKey:NAMES_wiperStatus];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setHeadLampStatus:(FMCVehicleDataResult*) headLampStatus {
    if (headLampStatus != nil) {
        [parameters setObject:headLampStatus forKey:NAMES_headLampStatus];
    } else {
        [parameters removeObjectForKey:NAMES_headLampStatus];
    }
}

-(FMCVehicleDataResult*) headLampStatus {
    NSObject* obj = [parameters objectForKey:NAMES_headLampStatus];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setEngineTorque:(FMCVehicleDataResult*) engineTorque {
    if (engineTorque != nil) {
        [parameters setObject:engineTorque forKey:NAMES_engineTorque];
    } else {
        [parameters removeObjectForKey:NAMES_engineTorque];
    }
}

-(FMCVehicleDataResult*) engineTorque {
    NSObject* obj = [parameters objectForKey:NAMES_engineTorque];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setAccPedalPosition:(FMCVehicleDataResult*) accPedalPosition {
    if (accPedalPosition != nil) {
        [parameters setObject:accPedalPosition forKey:NAMES_accPedalPosition];
    } else {
        [parameters removeObjectForKey:NAMES_accPedalPosition];
    }
}

-(FMCVehicleDataResult*) accPedalPosition {
    NSObject* obj = [parameters objectForKey:NAMES_accPedalPosition];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setSteeringWheelAngle:(FMCVehicleDataResult*) steeringWheelAngle {
    if (steeringWheelAngle != nil) {
        [parameters setObject:steeringWheelAngle forKey:NAMES_steeringWheelAngle];
    } else {
        [parameters removeObjectForKey:NAMES_steeringWheelAngle];
    }
}

-(FMCVehicleDataResult*) steeringWheelAngle {
    NSObject* obj = [parameters objectForKey:NAMES_steeringWheelAngle];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setECallInfo:(FMCVehicleDataResult*) eCallInfo {
    if (eCallInfo != nil) {
        [parameters setObject:eCallInfo forKey:NAMES_eCallInfo];
    } else {
        [parameters removeObjectForKey:NAMES_eCallInfo];
    }
}

-(FMCVehicleDataResult*) eCallInfo {
    NSObject* obj = [parameters objectForKey:NAMES_eCallInfo];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setAirbagStatus:(FMCVehicleDataResult*) airbagStatus {
    if (airbagStatus != nil) {
        [parameters setObject:airbagStatus forKey:NAMES_airbagStatus];
    } else {
        [parameters removeObjectForKey:NAMES_airbagStatus];
    }
}

-(FMCVehicleDataResult*) airbagStatus {
    NSObject* obj = [parameters objectForKey:NAMES_airbagStatus];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setEmergencyEvent:(FMCVehicleDataResult*) emergencyEvent {
    if (emergencyEvent != nil) {
        [parameters setObject:emergencyEvent forKey:NAMES_emergencyEvent];
    } else {
        [parameters removeObjectForKey:NAMES_emergencyEvent];
    }
}

-(FMCVehicleDataResult*) emergencyEvent {
    NSObject* obj = [parameters objectForKey:NAMES_emergencyEvent];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setClusterModes:(FMCVehicleDataResult*) clusterModes {
    if (clusterModes != nil) {
        [parameters setObject:clusterModes forKey:NAMES_clusterModes];
    } else {
        [parameters removeObjectForKey:NAMES_clusterModes];
    }
}

-(FMCVehicleDataResult*) clusterModes {
    NSObject* obj = [parameters objectForKey:NAMES_clusterModes];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

-(void) setMyKey:(FMCVehicleDataResult*) myKey {
    if (myKey != nil) {
        [parameters setObject:myKey forKey:NAMES_myKey];
    } else {
        [parameters removeObjectForKey:NAMES_myKey];
    }
}

-(FMCVehicleDataResult*) myKey {
    NSObject* obj = [parameters objectForKey:NAMES_myKey];
    if ([obj isKindOfClass:FMCVehicleDataResult.class]) {
        return (FMCVehicleDataResult*)obj;
    } else {
        return [[FMCVehicleDataResult alloc] initWithDictionary:(NSMutableDictionary*)obj];
    }
}

@end
