/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMPSingleInput.h>
#import <libobjc.A.dylib/AVCaptureVideoDataOutputSampleBufferDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, FBCaptureSession, AVCaptureVideoDataOutput, AVCaptureDeviceInput, NSString;

@interface FBMPCamera : FBMPSingleInput <AVCaptureVideoDataOutputSampleBufferDelegate> {

	NSObject*<OS_dispatch_queue> _sessionQueue;
	FBCaptureSession* _captureSession;
	AVCaptureVideoDataOutput* _videoOutput;
	AVCaptureDeviceInput* _videoInput;

}

@property (nonatomic,readonly) long long devicePosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCaptureSession:(id)arg1 captureDevice:(id)arg2 ;
-(void)setLowLightMode:(BOOL)arg1 ;
-(long long)devicePosition;
-(void)sessionWillStart:(id)arg1 ;
-(void)sessionWillStop:(id)arg1 ;
-(void)sessionConnectedPort:(id)arg1 context:(id)arg2 ;
-(void)sessionDisconnectedPort:(id)arg1 context:(id)arg2 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)captureOutput:(id)arg1 didDropSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
@end

