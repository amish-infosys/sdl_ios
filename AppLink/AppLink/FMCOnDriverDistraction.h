//  FMCOnDriverDistraction.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/FMCRPCNotification.h>

#import <AppLink/FMCDriverDistractionState.h>

/**
 * <p>Notifies the application of the current driver distraction state (whether driver distraction rules are in effect, or
 * not).</p>
 *
 * <p></p>
 * <b>HMI Status Requirements:</b>
 * <ul>
 * HMILevel:
 * <ul><li>Can be sent with FULL, LIMITED or BACKGROUND</li></ul>
 * AudioStreamingState:
 * <ul><li>Any</li></ul>
 * SystemContext:
 * <ul><li>Any</li></ul>
 * </ul>
 * <p></p>
 * <b>Parameter List:</b>
 * <table  border="1" rules="all">
 *     <tr>
 *         <th>Name</th>
 *         <th>Type</th>
 *         <th>Description</th>
 *         <th>Applink Ver Available</th>
 *     </tr>
 *     <tr>
 *         <td>state</td>
 *         <td>FMCDriverDistractionState* </td>
 *         <td>Current driver distraction <i>state</i>(i.e. whether driver distraction rules are in effect, or not). </td>
 *         <td>AppLink 1.0</td>
 *     </tr>
 * </table>
 * Since <b>AppLink 1.0</b>
 */
@interface FMCOnDriverDistraction : FMCRPCNotification {}

/**
 *Constructs a newly allocated FMCOnDriverDistraction object
 */
-(id) init;
/**
 *<p>Constructs a newly allocated FMCOnDriverDistraction object indicated by the NSMutableDictionary parameter</p>
 *@param dict The NSMutableDictionary to use
 */
-(id) initWithDictionary:(NSMutableDictionary*) dict;

/**
 * @abstract the driver distraction state(i.e. whether driver distraction rules are in effect, or not)
 * @discussion
 */
@property(strong) FMCDriverDistractionState* state;

@end
