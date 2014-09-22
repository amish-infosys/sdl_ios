//  FMCPutFile.m
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <AppLink/FMCPutFile.h>

#import <AppLink/FMCNames.h>

@implementation FMCPutFile

-(id) init {
    if (self = [super initWithName:NAMES_PutFile]) {}
    return self;
}

-(id) initWithDictionary:(NSMutableDictionary*) dict {
    if (self = [super initWithDictionary:dict]) {}
    return self;
}

-(void) setSyncFileName:(NSString*) syncFileName {
    if (syncFileName != nil) {
        [parameters setObject:syncFileName forKey:NAMES_syncFileName];
    } else {
        [parameters removeObjectForKey:NAMES_syncFileName];
    }
}

-(NSString*) syncFileName {
    return [parameters objectForKey:NAMES_syncFileName];
}

-(void) setFileType:(FMCFileType*) fileType {
    if (fileType != nil) {
        [parameters setObject:fileType forKey:NAMES_fileType];
    } else {
        [parameters removeObjectForKey:NAMES_fileType];
    }
}

-(FMCFileType*) fileType {
    NSObject* obj = [parameters objectForKey:NAMES_fileType];
    if ([obj isKindOfClass:FMCFileType.class]) {
        return (FMCFileType*)obj;
    } else {
        return [FMCFileType valueOf:(NSString*)obj];
    }
}

-(void) setPersistentFile:(NSNumber*) persistentFile {
    if (persistentFile != nil) {
        [parameters setObject:persistentFile forKey:NAMES_persistentFile];
    } else {
        [parameters removeObjectForKey:NAMES_persistentFile];
    }
}

-(NSNumber*) persistentFile {
    return [parameters objectForKey:NAMES_persistentFile];
}

-(void) setSystemFile:(NSNumber*) systemFile {
    if (systemFile != nil) {
        [parameters setObject:systemFile forKey:NAMES_systemFile];
    } else {
        [parameters removeObjectForKey:NAMES_systemFile];
    }
}

-(NSNumber*) systemFile {
    return [parameters objectForKey:NAMES_systemFile];
}

-(void) setOffset:(NSNumber*) offset {
    if (offset != nil) {
        [parameters setObject:offset forKey:NAMES_offset];
    } else {
        [parameters removeObjectForKey:NAMES_offset];
    }
}

-(NSNumber*) offset {
    return [parameters objectForKey:NAMES_offset];
}

-(void) setLength:(NSNumber*) length {
    if (length != nil) {
        [parameters setObject:length forKey:NAMES_length];
    } else {
        [parameters removeObjectForKey:NAMES_length];
    }
}

-(NSNumber*) length {
    return [parameters objectForKey:NAMES_length];
}

@end
