/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBProfilePictureStagingGroundLoggerProtocol <NSObject>
@required
-(void)startFunnelLogging;
-(void)addActionToFunnel:(id)arg1;
-(void)logEnter;
-(void)logTapCancelEdit;
-(void)logTapUseEdit:(BOOL)arg1 extra:(id)arg2;
-(void)logTapUse:(unsigned long long)arg1;
-(void)logTapCancel;
-(void)logOpenPicker;
-(void)logTapMakeTemporary;
-(void)logTapEditButton;
-(void)logTapChangeFrame;
-(void)logCancelChangeFrame;
-(void)logChangeFrame:(id)arg1;
-(void)logSelectCameraRollPhoto;
-(void)logCancelOpenPicker;
-(void)logSelectExistingPhoto:(id)arg1;
-(BOOL)didEnterCrop;
-(BOOL)didUseCrop;

@end
