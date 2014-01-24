//  FMCDeleteInteractionChoiceSet.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/FMCRPCRequest.h>

/**
 * Deletes an existing Choice Set identified by the parameter
 * interactionChoiceSetID. If the specified interactionChoiceSetID is currently
 * in use by an active <i> FMCPerformInteraction</i> this call to
 * delete the Choice Set will fail returning an IN_USE resultCode
 * <p>
 * Function Group: Base
 * <p>
 * <b>HMILevel needs to be FULL, LIMITED or BACKGROUD</b><br/>
 * </p>
 *
 * Since <b>AppLink 1.0</b><br>
 * see FMCCreateInteractionChoiceSet FMCPerformInteraction
 */
@interface FMCDeleteInteractionChoiceSet : FMCRPCRequest {}

/**
 * Constructs a new FMCDeleteInteractionChoiceSet object
 */
-(id) init;
/**
 * Constructs a new FMCDeleteInteractionChoiceSet object indicated by the
 * NSMutableDictionary parameter
 * <p>
 *
 * @param dict The NSMutableDictionary to use
 */
-(id) initWithDictionary:(NSMutableDictionary*) dict;

/**
 * @abstract a unique ID that identifies the Choice Set
 * @discussion a unique ID that identifies the Choice Set
 * <p>
 * <b>Notes: </b>Min Value: 0; Max Value: 2000000000
 */
@property(assign) NSNumber* interactionChoiceSetID;

@end
