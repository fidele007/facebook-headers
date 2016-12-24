/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBDBLCameraCaptureControllerDelegate.h>
#import <Facebook/FBDBLFaceDetectorDelegate.h>
#import <Facebook/FBDBLFaceRecViewControllerProtocol.h>

@protocol FBDBLFaceRecAuthenticating;
@class FBDBLCameraCaptureController, FBDBLFaceDetector, UIImageView, FBDBLFaceRecOverlayView, FBButton, NSString;

@interface FBDBLFaceRecViewController : UIViewController <FBDBLCameraCaptureControllerDelegate, FBDBLFaceDetectorDelegate, FBDBLFaceRecViewControllerProtocol> {

	FBDBLCameraCaptureController* _captureController;
	FBDBLFaceDetector* _faceDetector;
	UIImageView* _imageView;
	FBDBLFaceRecOverlayView* _overlayView;
	FBButton* _cancelButton;
	FBButton* _notRecognizedButton;
	id<FBDBLFaceRecAuthenticating> _authDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBDBLFaceRecAuthenticating> authDelegate;              //@synthesize authDelegate=_authDelegate - In the implementation block
-(void)setAuthDelegate:(id<FBDBLFaceRecAuthenticating>)arg1 ;
-(id<FBDBLFaceRecAuthenticating>)authDelegate;
-(void)didTapCancel;
-(void)didTapNotRecognized;
-(void)cameraCaptureController:(id)arg1 didCaptureImage:(id)arg2 ;
-(void)faceDetector:(id)arg1 didDetectFaces:(id)arg2 inImage:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

