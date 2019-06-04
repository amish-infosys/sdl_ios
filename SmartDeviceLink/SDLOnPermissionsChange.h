//  SDLOnPermissionsChange.h
//

#import "SDLRPCNotification.h"

@class SDLPermissionItem;

/**
 * Provides update to app of which sets of functions are available
 *
 * @since SDL 2.0
 */

NS_ASSUME_NONNULL_BEGIN

@interface SDLOnPermissionsChange : SDLRPCNotification

/**
 Describes change in permissions for a given set of RPCs

 Required, Array of SDLPermissionItem, Array size 0 - 500
 */
@property (strong, nonatomic) NSArray<SDLPermissionItem *> *permissionItem;

/**
 Describes if Encryption is required

  Optional, Boolean
 */
@property (strong, nonatomic, nullable) NSNumber<SDLBool> *requireEncryption;

@end

NS_ASSUME_NONNULL_END
