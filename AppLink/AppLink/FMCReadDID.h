//  FMCReadDID.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/FMCRPCRequest.h>

/**
 * Non periodic vehicle data read request. This is an RPC to get diagnostics
 * data from certain vehicle modules. DIDs of a certain module might differ from
 * vehicle type to vehicle type
 * <p>
 * Function Group: ProprietaryData
 * <p>
 * <b>HMILevel needs to be FULL, LIMITED or BACKGROUND</b>
 * <p>
 *
 * Since AppLink 2.0
 */
@interface FMCReadDID : FMCRPCRequest {}

/**
 * @abstract Constructs a new FMCReadDID object
 */
-(id) init;

/**
 * @abstract Constructs a new FMCReadDID object indicated by the NSMutableDictionary parameter
 * @param dict The NSMutableDictionary to use
 */
-(id) initWithDictionary:(NSMutableDictionary*) dict;

/**
 * @abstract An ID of the vehicle module
 *            <br/><b>Notes: </b>Minvalue:0; Maxvalue:65535
 */
@property(assign) NSNumber* ecuName;

/**
 * @abstract Raw data from vehicle data DID location(s)
 *            <br/>a Vector<Integer> value representing raw data from vehicle
 *            data DID location(s)
 *            <p>
 *            <b>Notes: </b>
 *            <ul>
 *            <li>Minvalue:0; Maxvalue:65535</li>
 *            <li>ArrayMin:0; ArrayMax:1000</li>
 *            </ul>
 */
@property(assign) NSMutableArray* didLocation;

@end