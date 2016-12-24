/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAudioSessionManagerClient.h>
#import <Facebook/AVCaptureAudioDataOutputSampleBufferDelegate.h>

@protocol OS_dispatch_queue, FBAudioBufferHandler;
@class FBCaptureSession, NSObject, NSString;

@interface FBAudioCapturer : NSObject <FBAudioSessionManagerClient, AVCaptureAudioDataOutputSampleBufferDelegate> {

	FBCaptureSession* _audioSession;
	NSObject*<OS_dispatch_queue> _sessionQueue;
	id<FBAudioBufferHandler> _bufferHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long audioDirection; 
@property (nonatomic,readonly) unsigned long long outputCoordinationMode; 
@property (nonatomic,readonly) unsigned long long outputOptions; 
@property (nonatomic,readonly) unsigned long long inputOptions; 
@property (nonatomic,readonly) unsigned long long clientPriority; 
@property (nonatomic,readonly) unsigned long long audioSessionMode; 
-(void)finishInterruptionAndResume:(BOOL)arg1 ;
-(void)highPriorityClientBecameActive;
-(unsigned long long)audioDirection;
-(unsigned long long)outputCoordinationMode;
-(unsigned long long)outputOptions;
-(unsigned long long)audioSessionMode;
-(void)startAudioSessionWithCompletion:(/*^block*/id)arg1 ;
-(void)addOutputs:(id)arg1 ;
-(void)addInputs:(id)arg1 ;
-(void)_startMonitorApplicationState;
-(void)_stopMonitorApplicationState;
-(void)_tearDownAudioConfiguration;
-(void)_resumeAudioRecording;
-(void)_restartAudioSession;
-(void)_tearDownAudioConfigurationInSessionQueue;
-(id)initWithBufferHandler:(id)arg1 sessionQueue:(id)arg2 ;
-(BOOL)isAudioSessionRunning;
-(void)dealloc;
-(void)beginInterruption;
-(void)stopAudioSession;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
@end
