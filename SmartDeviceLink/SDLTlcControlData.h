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

#import "SDLUserInput.h"
#import "SDLRPCStruct.h"
#import "SDLTestStatus.h"
#import "SDLPreconditionStatus.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * @since SDL 6.0.0
 */
@interface SDLTlcControlData : SDLRPCStruct

/**
 * @param userInput - userInput
 * @param preconditionStatus - preconditionStatus
 * @param testStatus  - testStatus 
 * @return A SDLTlcControlData object
 */
- (instancetype)initWithUserInput:(nullable SDLUserInput)userInput preconditionStatus:(nullable SDLPreconditionStatus)preconditionStatus testStatus :(nullable SDLTestStatus)testStatus ;

/**
 * control command, maps to TlghtTest_D_Mnu
 */
@property (nullable, strong, nonatomic) SDLUserInput userInput;

/**
 * read-only, maps to TlghtTestPrecnd_D_Stat
 */
@property (nullable, strong, nonatomic) SDLPreconditionStatus preconditionStatus;

/**
 * read-only, maps to TlghtTest_D_Stat
 */
@property (nullable, strong, nonatomic) SDLTestStatus testStatus ;

@end

NS_ASSUME_NONNULL_END