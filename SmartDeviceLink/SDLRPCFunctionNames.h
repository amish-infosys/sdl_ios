//
//  SDLRPCFunctionNames.h
//  SmartDeviceLink
//
//  Created by Nicole on 3/5/19.
//  Copyright © 2019 smartdevicelink. All rights reserved.
//

#import "SDLEnum.h"

/*
 *  All RPC request / response / notification names
 */
typedef SDLEnum SDLRPCFunctionName SDL_SWIFT_ENUM;

extern SDLRPCFunctionName const SDLRPCFunctionNameAddCommand;
extern SDLRPCFunctionName const SDLRPCFunctionNameAddSubMenu;
extern SDLRPCFunctionName const SDLRPCFunctionNameAlert;
extern SDLRPCFunctionName const SDLRPCFunctionNameAlertManeuver;
extern SDLRPCFunctionName const SDLRPCFunctionNameButtonPress;
extern SDLRPCFunctionName const SDLRPCFunctionNameChangeRegistration;
extern SDLRPCFunctionName const SDLRPCFunctionNameCreateInteractionChoiceSet;
extern SDLRPCFunctionName const SDLRPCFunctionNameDeleteCommand;
extern SDLRPCFunctionName const SDLRPCFunctionNameDeleteFile;
extern SDLRPCFunctionName const SDLRPCFunctionNameDeleteInteractionChoiceSet;
extern SDLRPCFunctionName const SDLRPCFunctionNameDeleteSubMenu;
extern SDLRPCFunctionName const SDLRPCFunctionNameDiagnosticMessage;
extern SDLRPCFunctionName const SDLRPCFunctionNameDialNumber;
extern SDLRPCFunctionName const SDLRPCFunctionNameEncodedSyncPData;
extern SDLRPCFunctionName const SDLRPCFunctionNameEndAudioPassThru;
extern SDLRPCFunctionName const SDLRPCFunctionNameGenericResponse;
extern SDLRPCFunctionName const SDLRPCFunctionNameGetAppServiceData;
extern SDLRPCFunctionName const SDLRPCFunctionNameGetDTCs;
extern SDLRPCFunctionName const SDLRPCFunctionNameGetFile;
extern SDLRPCFunctionName const SDLRPCFunctionNameGetCloudAppProperties;
extern SDLRPCFunctionName const SDLRPCFunctionNameGetInteriorVehicleData;
extern SDLRPCFunctionName const SDLRPCFunctionNameGetInteriorVehicleDataConsent;
extern SDLRPCFunctionName const SDLRPCFunctionNameGetSystemCapability;
extern SDLRPCFunctionName const SDLRPCFunctionNameGetVehicleData;
extern SDLRPCFunctionName const SDLRPCFunctionNameGetWayPoints;
extern SDLRPCFunctionName const SDLRPCFunctionNameListFiles;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnAppInterfaceUnregistered;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnAppServiceData;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnAudioPassThru;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnButtonEvent;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnButtonPress;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnCommand;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnDriverDistraction;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnEncodedSyncPData;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnHashChange;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnHMIStatus;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnInteriorVehicleData;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnKeyboardInput;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnLanguageChange;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnLockScreenStatus;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnPermissionsChange;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnRCStatus;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnSyncPData;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnSystemCapabilityUpdated;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnSystemRequest;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnTBTClientState;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnTouchEvent;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnVehicleData;
extern SDLRPCFunctionName const SDLRPCFunctionNameOnWayPointChange;
extern SDLRPCFunctionName const SDLRPCFunctionNamePerformAppServiceInteraction;
extern SDLRPCFunctionName const SDLRPCFunctionNamePerformAudioPassThru;
extern SDLRPCFunctionName const SDLRPCFunctionNamePerformInteraction;
extern SDLRPCFunctionName const SDLRPCFunctionNamePublishAppService;
extern SDLRPCFunctionName const SDLRPCFunctionNamePutFile;
extern SDLRPCFunctionName const SDLRPCFunctionNameReadDID;
extern SDLRPCFunctionName const SDLRPCFunctionNameRegisterAppInterface;
extern SDLRPCFunctionName const SDLRPCFunctionNameReleaseInteriorVehicleDataModule;
extern SDLRPCFunctionName const SDLRPCFunctionNameReserved;
extern SDLRPCFunctionName const SDLRPCFunctionNameResetGlobalProperties;
extern SDLRPCFunctionName const SDLRPCFunctionNameScrollableMessage;
extern SDLRPCFunctionName const SDLRPCFunctionNameSendHapticData;
extern SDLRPCFunctionName const SDLRPCFunctionNameSendLocation;
extern SDLRPCFunctionName const SDLRPCFunctionNameSetAppIcon;
extern SDLRPCFunctionName const SDLRPCFunctionNameSetCloudAppProperties;
extern SDLRPCFunctionName const SDLRPCFunctionNameSetDisplayLayout;
extern SDLRPCFunctionName const SDLRPCFunctionNameSetGlobalProperties;
extern SDLRPCFunctionName const SDLRPCFunctionNameSetInteriorVehicleData;
extern SDLRPCFunctionName const SDLRPCFunctionNameSetMediaClockTimer;
extern SDLRPCFunctionName const SDLRPCFunctionNameShow;
extern SDLRPCFunctionName const SDLRPCFunctionNameShowConstantTBT;
extern SDLRPCFunctionName const SDLRPCFunctionNameSlider;
extern SDLRPCFunctionName const SDLRPCFunctionNameSpeak;
extern SDLRPCFunctionName const SDLRPCFunctionNameSubscribeButton;
extern SDLRPCFunctionName const SDLRPCFunctionNameSubscribeVehicleData;
extern SDLRPCFunctionName const SDLRPCFunctionNameSubscribeWayPoints;
extern SDLRPCFunctionName const SDLRPCFunctionNameSyncPData;
extern SDLRPCFunctionName const SDLRPCFunctionNameSystemRequest;
extern SDLRPCFunctionName const SDLRPCFunctionNameUnregisterAppInterface;
extern SDLRPCFunctionName const SDLRPCFunctionNameUnsubscribeButton;
extern SDLRPCFunctionName const SDLRPCFunctionNameUnsubscribeVehicleData;
extern SDLRPCFunctionName const SDLRPCFunctionNameUnsubscribeWayPoints;
extern SDLRPCFunctionName const SDLRPCFunctionNameUpdateTurnList;


