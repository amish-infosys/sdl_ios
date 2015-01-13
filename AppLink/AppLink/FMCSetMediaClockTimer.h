//  FMCSetMediaClockTimer.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/FMCRPCRequest.h>

#import <AppLink/FMCStartTime.h>
#import <AppLink/FMCUpdateMode.h>

/**
 * Sets the media clock/timer value and the update method (e.g.count-up,
 * count-down, etc.)
 * <p>
 * Function Group: Base <p>
 * <b>HMILevel needs to be FULL, LIMITIED or BACKGROUND</b>
 * </p>
 *
 * Since AppLink 1.0
 */
@interface FMCSetMediaClockTimer : FMCRPCRequest {}

/**
 * @abstract Constructs a new FMCSetMediaClockTimer object
 */
-(id) init;
/**
 * @abstract Constructs a new FMCSetMediaClockTimer object indicated by the NSMutableDictionary
 * parameter
 * @param dict The NSMutableDictionary to use
 */
-(id) initWithDictionary:(NSMutableDictionary*) dict;

/**
 * @abstract A Start Time with specifying hour, minute, second values
 *
 * @discussion A startTime object with specifying hour, minute, second values
 *            <p>
 *            <b>Notes: </b>
 *            <ul>
 *            <li>If "updateMode" is COUNTUP or COUNTDOWN, this parameter
 *            must be provided</li>
 *            <li>Will be ignored for PAUSE/RESUME and CLEAR</li>
 *            </ul>
 */
@property(strong) FMCStartTime* startTime;
/**
 * @abstract An END time of type FMCStartTime, specifying hour, minute, second values
 *
 * @discussion An FMCStartTime object with specifying hour, minute, second values
 */
@property(strong) FMCStartTime* endTime;
/**
 * @abstract The media clock/timer update mode (COUNTUP/COUNTDOWN/PAUSE/RESUME)
 *
 * @discussion a Enumeration value (COUNTUP/COUNTDOWN/PAUSE/RESUME)
 *            <p>
 *            <b>Notes: </b>
 *            <ul>
 *            <li>When updateMode is PAUSE, RESUME or CLEAR, the start time value
 *            is ignored</li>
 *            <li>When updateMode is RESUME, the timer resumes counting from
 *            the timer's value when it was paused</li>
 *            </ul>
 */
@property(strong) FMCUpdateMode* updateMode;

@end
