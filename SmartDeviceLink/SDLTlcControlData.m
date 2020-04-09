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

#import "SDLTlcControlData.h"
#import "NSMutableDictionary+Store.h"
#import "SDLUserInput.h"
#import "SDLTestStatus.h"
#import "SDLPreconditionStatus.h"
#import "SDLRPCParameterNames.h"

NS_ASSUME_NONNULL_BEGIN

@implementation SDLTlcControlData

- (instancetype)initWithUserInput:(nullable SDLUserInput)userInput preconditionStatus:(nullable SDLPreconditionStatus)preconditionStatus testStatus :(nullable SDLTestStatus)testStatus  {
    self = [super init];
    if (!self) {
        return nil;
    }
    self.userInput = userInput;
    self.preconditionStatus = preconditionStatus;
    self.testStatus  = testStatus ;
    return self;
}

- (void)setUserInput:(nullable SDLUserInput)userInput {
    [self.store sdl_setObject:userInput forName:SDLRPCParameterNameUserInput];
}

- (nullable SDLUserInput)userInput {
    return [self.store sdl_enumForName:SDLRPCParameterNameUserInput error:nil];
}

- (void)setPreconditionStatus:(nullable SDLPreconditionStatus)preconditionStatus {
    [self.store sdl_setObject:preconditionStatus forName:SDLRPCParameterNamePreconditionStatus];
}

- (nullable SDLPreconditionStatus)preconditionStatus {
    return [self.store sdl_enumForName:SDLRPCParameterNamePreconditionStatus error:nil];
}

- (void)setTestStatus :(nullable SDLTestStatus)testStatus  {
    [self.store sdl_setObject:testStatus  forName:SDLRPCParameterNameTestStatus ];
}

- (nullable SDLTestStatus)testStatus  {
    return [self.store sdl_enumForName:SDLRPCParameterNameTestStatus  error:nil];
}

@end

NS_ASSUME_NONNULL_END