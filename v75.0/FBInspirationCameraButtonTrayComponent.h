/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class CKComponent, FBInspirationToolbox, FBInspirationCameraComponentModel;

@interface FBInspirationCameraButtonTrayComponent : CKCompositeComponent {

	CKComponent* _secondButtonComponent;
	CKComponent* _backButtonComponent;
	CKComponent* _videoProgressComponent;
	CKComponent* _saveButtonComponent;
	unsigned long long _captureState;
	FBInspirationToolbox* _toolbox;
	FBInspirationCameraComponentModel* _model;
	BOOL _preventBackButtonDoubleTap;
	BOOL _showSaveToast;
	BOOL _effectsEnabled;

}
+(id)newWithModel:(id)arg1 toolbox:(id)arg2 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(void)cameraSwitchButtonDidTap;
-(void)textButtonDidTap;
-(void)backButtonDidTap;
-(void)showEffectButtonDidTap;
-(void)closeTrayButtonDidTap;
-(void)flashButtonDidTap;
-(void)doodleButtonDidTap;
-(void)cameraRollTrayButtonDidTap;
-(void)_cameraRollTrayButtonDidTapWithPermissionGranted;
-(void)_performBackToCameraAction;
-(void)_saveAssetButtonDidTapWithPermissionGranted;
-(void)_saveAssetDidFinished;
-(void)saveAssetButtonDidTap;
@end

