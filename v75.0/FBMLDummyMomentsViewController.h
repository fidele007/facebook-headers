/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBPresentableViewController.h>

@class FBMLSessionController, FBMLSession, FBMLHomeViewController, UIActivityIndicatorView, NSString;

@interface FBMLDummyMomentsViewController : UIViewController <FBPresentableViewController> {

	FBMLSessionController* _momentsSessionController;
	FBMLSession* _momentsSession;
	FBMLHomeViewController* _homeViewController;
	UIActivityIndicatorView* _loadingSpinner;
	BOOL _isLoading;
	BOOL _hasViewAppeared;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(void)_onFinishLoading:(id)arg1 ;
-(void)_initializeHomeVC;
-(void)_onClose;
-(id)initWithMomentsSessionController:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

