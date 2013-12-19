//  FMCOnCommand.h
//  SyncProxy
//  Copyright (c) 2013 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/FMCRPCNotification.h>

#import <AppLink/FMCTriggerSource.h>

/**
 * This is called when a command was selected via VR after pressing the PTT button, or selected from the menu after
 * pressing the MENU button. <p>
 * <b>Note: </b>Sequence of FMCOnHMIStatus and FMCOnCommand notifications for user-initiated interactions is indeterminate.
 * <p></p>
 * <b>HMI Status Requirements:</b>
 * <ul>
 * HMILevel:
 * <ul>
 *   <li>FULL,LIMITED</li>
 * </ul>
 * AudioStreamingState:
 * <ul><li>Any</li></ul>
 * SystemContext:
 * <ul><li>Any</li></ul>
 * </ul>
 * <p>
 * <b>Parameter List:</b>
 * <table  border="1" rules="all">
 *  <tr>
 *      <th>Name</th>
 *      <th>Type</th>
 *      <th>Description</th>
 *      <th>Notes</th>
 *      <th>Applink Ver Available</th>
 * </tr>
 * <tr>
 *      <td>cmdID</td>
 *      <td>NSNumber *</td>
 *      <td>The cmd ID of the command the user selected. This is the cmd ID value provided by the application in the <i>FMCAddCommand</i> operation that created the command.</td>
 *      <td></td>
 *      <td>AppLink 1.0</td>
 * </tr>
 * <tr>
 *      <td>triggerSource</td>
 *      <td>FMCTriggerSource *</td>
 *      <td>Indicates whether command was selected via VR or via a menu selection (using the OK button).</td>
 *      <td></td>
 *      <td>AppLink 1.0</td>
 * </tr>
 * </table>
 * </p>
 * Since <b>AppLink 1.0</b><br>
 * see FMCAddCommand FMCDeleteCommand FMCDeleteSubMenu
 */
@interface FMCOnCommand : FMCRPCNotification {}

/**
 *Constructs a newly allocated FMCRPCNotification object
 */
-(id) init;
/**
 *<p>Constructs a newly allocated FMCRPCNotification object indicated by the NSMutableDictionary parameter</p>
 *@param dict The NSMutableDictionary to use
 */
-(id) initWithDictionary:(NSMutableDictionary*) dict;

/**
 * @abstract the Command's ID
 * @discussion
 */
@property(assign) NSNumber* cmdID;
/**
 * @abstract the object indicates the command was selected via VR or via a menu selection (using the OK button).
 * @discussion
 */
@property(assign) FMCTriggerSource* triggerSource;

@end
