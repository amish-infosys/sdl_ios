//  FMCOnButtonEvent.h
//  SyncProxy
//  Copyright (c) 2013 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/FMCRPCNotification.h>

#import <AppLink/FMCButtonEventMode.h>
#import <AppLink/FMCButtonName.h>

/**
 * Notifies application that user has depressed or released a button to which
 * the application has subscribed.</br> Further information about button events
 * and button-presses can be found at <i>FMCSubscribeButton</i>.
 * <p>
 * </p>
 * <b>HMI Status Requirements:</b>
 * <ul>
 * HMILevel:
 * <ul>
 * <li>The application will receive <i>FMCOnButtonEvent</i> notifications for all
 * subscribed buttons when HMILevel is FULL.</li>
 * <li>The application will receive <i>FMCOnButtonEvent</i> notifications for subscribed
 * media buttons when HMILevel is LIMITED.</li>
 * <li>Media buttons include SEEKLEFT, SEEKRIGHT, TUNEUP, TUNEDOWN, and
 * PRESET_0-PRESET_9.</li>
 * <li>The application will not receive <i>FMCOnButtonEvent</i> notification when HMILevel
 * is BACKGROUND.</li>
 * </ul>
 * AudioStreamingState:
 * <ul>
 * <li> Any </li>
 * </ul>
 * SystemContext:
 * <ul>
 * <li>MAIN, VR. In MENU, only PRESET buttons. In VR, pressing any subscribable
 * button will cancel VR.</li>
 * </ul>
 * </ul>
 * <p>
 * <b>Parameter List:</b>
 * <table  border="1" rules="all">
 * <tr>
 * <th>Name</th>
 * <th>Type</th>
 * <th>Description</th>
 * <th>Req</th>
 * <th>Notes</th>
 * <th>Applink Ver Available</th>
 * </tr>
 * <tr>
 * <td>buttonName</td>
 * <td>FMCButtonName* </td>
 * <td>Name of the button which triggered this event</td>
 * <td></td>
 * <td></td>
 * <td>AppLink 1.0</td>
 * </tr>
 * <tr>
 * <td>buttonEventMode</td>
 * <td>FMCButtonEventMode* </td>
 * <td>Indicats button was depressed (DOWN) or released (UP)</td>
 * <td></td>
 * <td></td>
 * <td>AppLink 1.0</td>
 * </tr>
 * <tr>
 * <td>customButtonID</td>
 * <td>NSNumber* </td>
 * <td>If FMCButtonName is “CUSTOM_BUTTON", this references the integer ID passed
 * by a custom button. (e.g. softButton ID)</td>
 * <td>N</td>
 * <td>Minvalue=0 Maxvalue=65536</td>
 * <td>AppLink 2.0</td>
 * </tr>
 * </table>
 * </p>
 *
 * Since <b>AppLink 1.0</b><br>
 *
 * see FMCSubscribeButton FMCUnsubscribeButton
 */
@interface FMCOnButtonEvent : FMCRPCNotification {}

/**
 *Constructs a newly allocated FMCOnButtonEvent object
 */
-(id) init;
/**
 * <p>
 * Constructs a newly allocated FMCOnButtonEvent object indicated by the
 * NSMutableDictionary parameter
 * </p>
 *
 * @param dict The NSMutableDictionary to use
 */
-(id) initWithDictionary:(NSMutableDictionary*) dict;

/**
 * @abstract the name of the button
 * @discussion
 */
@property(assign) FMCButtonName* buttonName;
/** 
 * @abstract button event indicates the button was depressed or released
 * @discussion
 */
@property(assign) FMCButtonEventMode* buttonEventMode;
@property(assign) NSNumber* customButtonID;

@end
