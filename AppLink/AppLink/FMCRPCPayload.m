//  FMCRPCPayload.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import "FMCRPCPayload.h"

const NSUInteger RPC_HEADER_SIZE = 12;

@implementation FMCRPCPayload

-(id) init {
	if (self = [super init]) {

	}
	return self;
}

-(id) initWithData:(NSData *)data {
	if (self = [self init]) {
        @try {
            // Setup our pointers for data access
            UInt8 *bytePointer = (UInt8 *)data.bytes;
            UInt32 *ui32Pointer = (UInt32 *)data.bytes;

            // Extract the parts
            UInt8 rpcType = (bytePointer[0] & 0xF0) >> 4;
            self.rpcType = rpcType;

            UInt32 functionID = ui32Pointer[0];
            functionID = CFSwapInt32BigToHost(functionID) & 0x0FFFFFFF;
            self.functionID = functionID;

            UInt32 correlationID = ui32Pointer[1];
            correlationID = CFSwapInt32BigToHost(correlationID);
            self.correlationID = correlationID;

            UInt32 jsonDataSize = ui32Pointer[2];
            jsonDataSize = CFSwapInt32BigToHost(jsonDataSize);

            NSData *jsonData = nil;
            NSUInteger offsetOfJSONData = RPC_HEADER_SIZE;
            if (jsonDataSize > 0) {
                jsonData = [data subdataWithRange:NSMakeRange(offsetOfJSONData, jsonDataSize)];
            }
            self.jsonData = jsonData;

            NSData *binaryData = nil;
            NSUInteger offsetOfBinaryData = RPC_HEADER_SIZE + jsonDataSize;
            NSUInteger binaryDataSize = data.length - jsonDataSize - RPC_HEADER_SIZE;
            if (binaryDataSize > 0) {
                binaryData = [data subdataWithRange:NSMakeRange(offsetOfBinaryData, binaryDataSize)];
            }
            self.binaryData = binaryData;

        }
        @catch (NSException *exception)
        {
            // Print exception information
            NSLog( @"NSException caught in FMCRPCPayload::initWithData" );
            NSLog( @"Name: %@", exception.name);
            NSLog( @"Reason: %@", exception.reason );
            NSLog( @"Data: %@", data.debugDescription );
            return nil;
        }
	}
	return self;
}

- (NSData *)data {
    // Header is:
    // RPC Type - first 4 bits
    // RPC Function ID - next 28 bits
    // Correlation ID - next 32 bits
    // JSON size - next 32 bits
    UInt8 headerBuffer[RPC_HEADER_SIZE];
    *(UInt32 *)&headerBuffer[0] = CFSwapInt32HostToBig(self.functionID);
    *(UInt32 *)&headerBuffer[4] = CFSwapInt32HostToBig(self.correlationID);
    *(UInt32 *)&headerBuffer[8] = CFSwapInt32HostToBig((UInt32)self.jsonData.length);
    UInt8 rpcType = (self.rpcType & 0x0F) << 4;
    headerBuffer[0] &= 0x0F;
    headerBuffer[0] |= rpcType;

    // Serialize the header, the json data then the binary data
    NSMutableData *dataOut = [NSMutableData dataWithCapacity:[self size]];
    [dataOut appendBytes:&headerBuffer length:12];
    [dataOut appendData:self.jsonData];
    [dataOut appendData:self.binaryData];

    return dataOut;
}

- (NSUInteger)size {
    NSUInteger headerSize = RPC_HEADER_SIZE;
    NSUInteger jsonDataSize = self.jsonData.length;
    NSUInteger binaryDataSize = self.binaryData.length;

    return (headerSize + jsonDataSize + binaryDataSize);
}

- (NSString *)description {
    NSMutableString *description = [[NSMutableString alloc] init];
    [description appendFormat:@" rpcType:%i, functionID:%i, correlationID:%i, json:%lu bytes, binary:%lu bytes", self.rpcType, (unsigned int)self.functionID, (unsigned int)self.correlationID, (unsigned long)self.jsonData.length, (unsigned long)self.binaryData.length];

    return description;
}

+ (id)rpcPayloadWithData:(NSData *)data {
    return [[FMCRPCPayload alloc] initWithData:data];
}
@end
