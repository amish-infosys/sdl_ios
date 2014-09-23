//  FMCAbstractProtocol.m
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import "FMCAbstractProtocol.h"

@implementation FMCAbstractProtocol
- (id)init {
	if (self = [super init]) {
        _debugConsoleGroupName = @"default";
	}
	return self;
}

- (void)sendStartSessionWithType:(FMCServiceType)serviceType {
	[self doesNotRecognizeSelector:_cmd];
}

- (void)sendEndSessionWithType:(FMCServiceType)serviceType sessionID:(Byte)sessionID {
	[self doesNotRecognizeSelector:_cmd];
}

- (void)sendRPCRequest:(FMCRPCRequest *)rpcRequest {
    [self doesNotRecognizeSelector:_cmd];
}

- (void)handleBytesFromTransport:(NSData *)receivedData {
	[self doesNotRecognizeSelector:_cmd];
}


#pragma - FMCTransportListener Implementation
- (void)onTransportConnected {
	[self.protocolDelegate onProtocolOpened];
}

- (void)onTransportDisconnected {
	[self.protocolDelegate onProtocolClosed];
}

- (void)onDataReceived:(NSData *)receivedData {
	[self handleBytesFromTransport:receivedData];
}

@end
