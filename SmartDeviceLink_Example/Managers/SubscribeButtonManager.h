//
//  SubscribeButtonManager.h
//  SmartDeviceLink-Example
//
//  Created by Nicole on 10/9/17.
//  Copyright © 2017 smartdevicelink. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SmartDeviceLink.h"

NS_ASSUME_NONNULL_BEGIN

@interface SubscribeButtonManager : NSObject

+ (SDLSubscribeButton *)createSubscribeButtonWithName:(SDLButtonName)subscribeButtonName withManager:(SDLManager *)manager;
+ (SDLUnsubscribeButton *)removeSubscribeButtonWithName:(SDLButtonName)subscribeButtonName ;

+ (NSArray<SDLSubscribeButton *> *)mediaTemplateSubscribeButtonsWithManager:(SDLManager *)manager;
+ (NSArray<SDLUnsubscribeButton *> *)mediaTemplateUnSubscribeButtons;
+ (NSArray<SDLSubscribeButton *> *)presetSubscribeButtonsWithManager:(SDLManager *)manager;
+ (NSArray<SDLSubscribeButton *> *)radioSubscribeButtonsWithManager:(SDLManager *)manager;
+ (NSArray<SDLSubscribeButton *> *)climateSubscribeButtonsWithManager:(SDLManager *)manager;

@end

NS_ASSUME_NONNULL_END
