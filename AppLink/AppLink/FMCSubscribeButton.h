//  FMCSubscribeButton.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/FMCRPCRequest.h>

#import <AppLink/FMCButtonName.h>

/**
 * Establishes a subscription to button notifications for HMI buttons. Buttons
 * are not necessarily physical buttons, but can also be "soft" buttons on a
 * touch screen, depending on the display in the vehicle. Once subscribed to a
 * particular button, an application will receive both
 * FMCOnButtonEvent and FMCOnButtonPress notifications
 * whenever that button is pressed. The application may also unsubscribe from
 * notifications for a button by invoking the FMCUnsubscribeButton
 * operation
 * <p>
 * When a button is depressed, an FMCOnButtonEvent notification is
 * sent to the application with a ButtonEventMode of BUTTONDOWN. When that same
 * button is released, an FMCOnButtonEvent notification is sent to the
 * application with a ButtonEventMode of BUTTONUP
 * <p>
 * When the duration of a button depression (that is, time between depression
 * and release) is less than two seconds, an FMCOnButtonPress
 * notification is sent to the application (at the moment the button is
 * released) with a ButtonPressMode of SHORT. When the duration is two or more
 * seconds, an FMCOnButtonPress notification is sent to the
 * application (at the moment the two seconds have elapsed) with a
 * ButtonPressMode of LONG
 * <p>
 * The purpose of FMCOnButtonPress notifications is to allow for
 * programmatic detection of long button presses similar to those used to store
 * presets while listening to the radio, for example
 * <p>
 * When a button is depressed and released, the sequence in which notifications
 * will be sent to the application is as follows:
 * <p>
 * For short presses:<br/>
 * <ul>
 * <li>OnButtonEvent (ButtonEventMode = BUTTONDOWN)</li>
 * <li>OnButtonEvent (ButtonEventMode = BUTTONUP)</li>
 * <li>OnButtonPress (ButtonPressMode = SHORT)</li>
 * </ul>
 * <p>
 * For long presses:<br/>
 * <ul>
 * <li>OnButtonEvent (ButtonEventMode = BUTTONDOWN)</li>
 * <li>OnButtonEvent (ButtonEventMode = BUTTONUP)</li>
 * <li>OnButtonPress (ButtonPressMode = LONG)</li>
 * </ul>
 * <p>
 * <b>HMILevel needs to be FULL, LIMITED or BACKGROUND</b>
 * </p>
 *
 * Since AppLink 1.0<br/>
 * See FMCUnsubscribeButton
 */
@interface FMCSubscribeButton : FMCRPCRequest {}

/**
 * @abstract Constructs a new FMCSubscribeButton object
 */
-(id) init;
/**
 * @abstract Constructs a new FMCSubscribeButton object indicated by the NSMutableDictionary
 * parameter
 * @param dict The NSMutableDictionary to use
 */
-(id) initWithDictionary:(NSMutableDictionary*) dict;

/**
 * @abstract The name of the button to subscribe to
 * @discussion An enum value, see <i>FMCButtonName</i>
 */
@property(assign) FMCButtonName* buttonName;

@end
