/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCameraCloseEventHandlerDelegate.h>

@protocol FBCameraComponentCaptureDelegate;
@class FBCameraComponentViewController, UINavigationController, NSString;

@interface FBCameraDisplayer : NSObject <FBCameraCloseEventHandlerDelegate> {

	FBCameraComponentViewController* _cameraViewController;
	UINavigationController* _navigationController;
	id<FBCameraComponentCaptureDelegate> _captureDelegate;

}

@property (assign,nonatomic,__weak) id<FBCameraComponentCaptureDelegate> captureDelegate;              //@synthesize captureDelegate=_captureDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCaptureDelegate:(id<FBCameraComponentCaptureDelegate>)arg1 ;
-(void)closeEventHandlerDidTapCloseButton;
-(void)presentCameraWithCameraMode:(long long)arg1 userSession:(id)arg2 appearanceProvider:(id)arg3 componentProvider:(Class)arg4 cameraModelManager:(id)arg5 presentingViewController:(id)arg6 cameraAnalyticsType:(id)arg7 ;
-(void)dismissCamera;
-(void)presentViewControllerFromCamera:(id)arg1 ;
-(void)dismissViewControllerOnTopOfCameraAnimated:(BOOL)arg1 ;
-(void)pushCameraWithCameraMode:(long long)arg1 userSession:(id)arg2 appearanceProvider:(id)arg3 componentProvider:(Class)arg4 cameraModelManager:(id)arg5 navigationController:(id)arg6 cameraAnalyticsType:(id)arg7 ;
-(id<FBCameraComponentCaptureDelegate>)captureDelegate;
@end
