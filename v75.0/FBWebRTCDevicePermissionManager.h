/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBWebRTCDevicePermissionManager : NSObject
-(BOOL)_userDidAuthorizeCameraPermissions:(BOOL)arg1 ;
-(BOOL)_userDidAuthorizeMicrophonePermissions:(BOOL)arg1 ;
-(void)_promptForMicrophonePermissions:(BOOL)arg1 onSuccess:(/*^block*/id)arg2 onFailure:(/*^block*/id)arg3 ;
-(void)_promptForCameraPermissions:(BOOL)arg1 onSuccess:(/*^block*/id)arg2 onFailure:(/*^block*/id)arg3 ;
-(BOOL)userDidAuthorizeCameraPermissions:(BOOL)arg1 microphonePermissions:(BOOL)arg2 ;
-(void)promptForCameraPermissions:(BOOL)arg1 microphonePermissions:(BOOL)arg2 onSuccess:(/*^block*/id)arg3 onFailure:(/*^block*/id)arg4 ;
@end
