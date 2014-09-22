//  FMCSpeak.h
//  SyncProxy
//  Copyright (c) 2014 Ford Motor Company. All rights reserved.

#import <Foundation/Foundation.h>
#import <AppLink/FMCRPCRequest.h>

/**
 * Speaks a phrase over the vehicle audio system using SYNC's TTS
 * (text-to-speech) engine. The provided text to be spoken can be simply a text
 * phrase, or it can consist of phoneme specifications to direct SYNC's TTS
 * engine to speak a "speech-sculpted" phrase
 * <p>
 * Receipt of the Response indicates the completion of the Speak operation,
 * regardless of how the Speak operation may have completed (i.e. successfully,
 * interrupted, terminated, etc.)
 * <p>
 * Requesting a new Speak operation while the application has another Speak
 * operation already in progress (i.e. no corresponding Response for that
 * in-progress Speak operation has been received yet) will terminate the
 * in-progress Speak operation (causing its corresponding Response to be sent by
 * SYNC) and begin the requested Speak operation
 * <p>
 * Requesting a new Speak operation while the application has an <i>
 * FMCAlert</i> operation already in progress (i.e. no corresponding
 * Response for that in-progress <i>FMCAlert</i> operation has been
 * received yet) will result in the Speak operation request being rejected
 * (indicated in the Response to the Request)
 * <p>
 * Requesting a new <i>FMCAlert</i> operation while the application
 * has a Speak operation already in progress (i.e. no corresponding Response for
 * that in-progress Speak operation has been received yet) will terminate the
 * in-progress Speak operation (causing its corresponding Response to be sent by
 * SYNC) and begin the requested <i>FMCAlert</i> operation
 * <p>
 * Requesting a new Speak operation while the application has a <i>
 * FMCPerformInteraction</i> operation already in progress (i.e. no
 * corresponding Response for that in-progress <i>
 * FMCPerformInteraction</i> operation has been received yet) will
 * result in the Speak operation request being rejected (indicated in the
 * Response to the Request)
 * <p>
 * Requesting a <i> FMCPerformInteraction</i> operation while the
 * application has a Speak operation already in progress (i.e. no corresponding
 * Response for that in-progress Speak operation has been received yet) will
 * terminate the in-progress Speak operation (causing its corresponding Response
 * to be sent by SYNC) and begin the requested <i>
 * FMCPerformInteraction</i> operation
 * <p>
 *
 * <b>HMI Status Requirements:</b><br/>
 * HMILevel: FULL, Limited<br/>
 * AudioStreamingState: Any<br/>
 * SystemContext: MAIN, MENU, VR
 * </p>
 * <b>Notes: </b>
 * <ul>
 * <li>When <i>FMCAlert</i> is issued with MENU in effect, <i>
 * FMCAlert</i> is queued and "played" when MENU interaction is
 * completed (i.e. SystemContext reverts to MAIN). When <i>FMCAlert
 * </i> is issued with VR in effect, <i>FMCAlert</i> is queued and
 * "played" when VR interaction is completed (i.e. SystemContext reverts to
 * MAIN)</li>
 * <li>When both <i>FMCAlert</i> and Speak are queued during MENU or
 * VR, they are "played" back in the order in which they were queued, with all
 * existing rules for "collisions" still in effect</li>
 * </ul>
 * <p>
 *
 * Since AppLink 1.0<br/>
 * See FMCAlert
 */
@interface FMCSpeak : FMCRPCRequest {}

/**
 * @abstract Constructs a new FMCSpeak object
 */
-(id) init;
/**
 * @abstract Constructs a new FMCSpeak object indicated by the NSMutableDictionary parameter
 * @param dict The NSMutableDictionary to use
 */
-(id) initWithDictionary:(NSMutableDictionary*) dict;

/**
 * @abstract A Vector<TTSChunk> representing an array of 1-100 TTSChunk structs
 * which, taken together, specify the phrase to be spoken
 *
 * @discussion A Vector<TTSChunk> value representing an array of 1-100 TTSChunk structs
 * which specify the phrase to be spoken
 *            <p>
 *            <ul>
 *            <li>The array must have 1-100 elements</li>
 *            <li>The total length of the phrase composed from the ttsChunks
 *            provided must be less than 500 characters or the request will
 *            be rejected</li>
 *            <li>Each chunk can be no more than 500 characters</li>
 *            </ul>
 */
@property(strong) NSMutableArray* ttsChunks;

@end
