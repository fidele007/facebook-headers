/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFacecastBroadcastControllerSpeedTestHandlerDelegate <NSObject>
@required
-(void)facecastBroadcastControllerSpeedTestHandlerRequestsConnectCaptureSession:(id)arg1;
-(void)facecastBroadcastControllerSpeedTestHandler:(id)arg1 didTimeoutWithError:(id)arg2;
-(void)facecastBroadcastControllerSpeedTestHandler:(id)arg1 didRetryTimeoutWithError:(id)arg2;
-(void)facecastBroadcastControllerSpeedTestHandler:(id)arg1 logSpeedTestStatus:(FBNetworkSpeedTestStatus)arg2 withLastRecordedSpeedTest:(double)arg3;
-(void)facecastBroadcastControllerSpeedTestHandlerDidPassSpeedTest:(id)arg1;
-(void)facecastBroadcastControllerSpeedTestHandlerDidFailSpeedTest:(id)arg1;

@end
