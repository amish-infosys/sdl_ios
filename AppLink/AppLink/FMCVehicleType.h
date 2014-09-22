//  FMCVehicleType.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/FMCRPCMessage.h>

/**
 * Describes the type of vehicle the mobile phone is connected with.
 * <p><b>Parameter List
 * <table border="1" rules="all">
 * 		<tr>
 * 			<th>Name</th>
 * 			<th>Type</th>
 * 			<th>Description</th>
 * 			<th>AppLink Ver. Available</th>
 * 		</tr>
 * 		<tr>
 * 			<td>make</td>
 * 			<td>String</td>
 * 			<td>Make of the vehicle, e.g. Ford
 *				 <ul>
 *					<li>Maxlength = 500</li>
 *				 </ul>
 * 			</td>
 * 			<td>AppLink 2.0</td>
 * 		</tr>
 * 		<tr>
 * 			<td>Model</td>
 * 			<td>String</td>
 * 			<td>Model of the vehicle, e.g. Fiesta
 *				 <ul>
 *					<li>Maxlength = 500</li>
 *				 </ul>
 * 			</td>
 * 			<td>AppLink 2.0</td>
 * 		</tr>
 * 		<tr>
 * 			<td>modelYear</td>
 * 			<td>String</td>
 * 			<td>Model Year of the vehicle, e.g. 2013
 *				 <ul>
 *					<li>Maxlength = 500</li>
 *				 </ul>
 * 			</td>
 * 			<td>AppLink 2.0</td>
 * 		</tr>
 * 		<tr>
 * 			<td>trim</td>
 * 			<td>String</td>
 * 			<td>Trim of the vehicle, e.g. SE
 *				 <ul>
 *					<li>Maxlength = 500</li>
 *				 </ul>
 * 			</td>
 * 			<td>AppLink 2.0</td>
 * 		</tr>
 *  </table>
 * Since AppLink 2.0
 */
@interface FMCVehicleType : FMCRPCStruct {}

/**
 * @abstract Constructs a newly allocated FMCVehicleType object
 */
-(id) init;

/**
 * @abstract Constructs a newly allocated FMCVehicleType object indicated by the NSMutableDictionary parameter
 * @param dict The NSMutableDictionary to use
 */
-(id) initWithDictionary:(NSMutableDictionary*) dict;

/**
 * @abstract The make of the vehicle
 */
@property(strong) NSString* make;

/**
 * @abstract The model of the vehicle
 */
@property(strong) NSString* model;

/**
 * @abstract The model year of the vehicle
 */
@property(strong) NSString* modelYear;

/**
 * @abstract The trim of the vehicle
 */
@property(strong) NSString* trim;

@end
