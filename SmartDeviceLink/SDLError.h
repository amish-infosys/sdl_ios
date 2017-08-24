//
//  SDLErrorConstants.h
//  SmartDeviceLink-iOS
//
//  Created by Joel Fischer on 10/5/15.
//  Copyright © 2015 smartdevicelink. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "SDLErrorConstants.h"

#import "SDLResult.h"


NS_ASSUME_NONNULL_BEGIN

#pragma mark Error Domains
typedef NSString SDLErrorDomain;
extern SDLErrorDomain *const SDLErrorDomainLifecycleManager;
extern SDLErrorDomain *const SDLErrorDomainFileManager;

@interface NSError (SDLErrors)

#pragma mark SDLManager

+ (NSError *)sdl_lifecycle_rpcErrorWithDescription:(NSString *)description andReason:(NSString *)reason;
+ (NSError *)sdl_lifecycle_notConnectedError;
+ (NSError *)sdl_lifecycle_notReadyError;
+ (NSError *)sdl_lifecycle_unknownRemoteErrorWithDescription:(NSString *)description andReason:(NSString *)reason;
+ (NSError *)sdl_lifecycle_managersFailedToStart;
+ (NSError *)sdl_lifecycle_startedWithBadResult:(SDLResult)result info:(NSString *)info;
+ (NSError *)sdl_lifecycle_startedWithWarning:(SDLResult)result info:(NSString *)info;
+ (NSError *)sdl_lifecycle_failedWithBadResult:(SDLResult)result info:(NSString *)info;

#pragma mark SDLFileManager

+ (NSError *)sdl_fileManager_cannotOverwriteError;
+ (NSError *)sdl_fileManager_noKnownFileError;
+ (NSError *)sdl_fileManager_unableToStartError;
+ (NSError *)sdl_fileManager_unableToUploadError;
+ (NSError *)sdl_fileManager_unableToUploadError:(NSDictionary *)userInfo;
+ (NSError *)sdl_fileManager_unableToDeleteError:(NSDictionary *)userInfo;
+ (NSError *)sdl_fileManager_fileDoesNotExistError;
+ (NSError *)sdl_fileManager_fileUploadCanceled;

@end

@interface NSException (SDLExceptions)

+ (NSException *)sdl_missingHandlerException;
+ (NSException *)sdl_missingIdException;
+ (NSException *)sdl_missingFilesException;

@end

NS_ASSUME_NONNULL_END
