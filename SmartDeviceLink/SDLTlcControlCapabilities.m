/*
 * Copyright (c) 2020, SmartDeviceLink Consortium, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following
 * disclaimer in the documentation and/or other materials provided with the
 * distribution.
 *
 * Neither the name of the SmartDeviceLink Consortium Inc. nor the names of
 * its contributors may be used to endorse or promote products derived
 * from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#import "SDLTlcControlCapabilities.h"
#import "NSMutableDictionary+Store.h"
#import "SDLRPCParameterNames.h"

NS_ASSUME_NONNULL_BEGIN

@implementation SDLTlcControlCapabilities

- (instancetype)initWithModuleName:(NSString *)moduleName {
    self = [super init];
    if (!self) {
        return nil;
    }
    self.moduleName = moduleName;
    return self;
}

- (instancetype)initWithModuleName:(NSString *)moduleName userInputAvailable:(BOOL)userInputAvailable preconditionStatusAvailable:(BOOL)preconditionStatusAvailable testStatusAvailable:(BOOL)testStatusAvailable {
    self = [self initWithModuleName:moduleName];
    if (!self) {
        return nil;
    }
    self.userInputAvailable = @(userInputAvailable);
    self.preconditionStatusAvailable = @(preconditionStatusAvailable);
    self.testStatusAvailable = @(testStatusAvailable);
    return self;
}

- (void)setModuleName:(NSString *)moduleName {
    [self.store sdl_setObject:moduleName forName:SDLRPCParameterNameModuleName];
}

- (NSString *)moduleName {
    NSError *error = nil;
    return [self.store sdl_objectForName:SDLRPCParameterNameModuleName ofClass:NSString.class error:&error];
}

- (void)setUserInputAvailable:(nullable NSNumber<SDLBool> *)userInputAvailable {
    [self.store sdl_setObject:userInputAvailable forName:SDLRPCParameterNameUserInputAvailable];
}

- (nullable NSNumber<SDLBool> *)userInputAvailable {
    return [self.store sdl_objectForName:SDLRPCParameterNameUserInputAvailable ofClass:NSNumber.class error:nil];
}

- (void)setPreconditionStatusAvailable:(nullable NSNumber<SDLBool> *)preconditionStatusAvailable {
    [self.store sdl_setObject:preconditionStatusAvailable forName:SDLRPCParameterNamePreconditionStatusAvailable];
}

- (nullable NSNumber<SDLBool> *)preconditionStatusAvailable {
    return [self.store sdl_objectForName:SDLRPCParameterNamePreconditionStatusAvailable ofClass:NSNumber.class error:nil];
}

- (void)setTestStatusAvailable:(nullable NSNumber<SDLBool> *)testStatusAvailable {
    [self.store sdl_setObject:testStatusAvailable forName:SDLRPCParameterNameTestStatusAvailable];
}

- (nullable NSNumber<SDLBool> *)testStatusAvailable {
    return [self.store sdl_objectForName:SDLRPCParameterNameTestStatusAvailable ofClass:NSNumber.class error:nil];
}

@end

NS_ASSUME_NONNULL_END