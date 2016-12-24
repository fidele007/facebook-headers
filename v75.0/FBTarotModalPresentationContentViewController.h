/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>

@class BFTaskCompletionSource, BFTask;

@interface FBTarotModalPresentationContentViewController : UIViewController {

	UIViewController* _viewController;
	long long _presentationAxis;
	BFTaskCompletionSource* _didDismissTaskCompletionSource;

}

@property (nonatomic,readonly) UIViewController*<FBTarotCardViewControllerProtocol> viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,readonly) long long presentationAxis;                                                       //@synthesize presentationAxis=_presentationAxis - In the implementation block
@property (nonatomic,readonly) BFTaskCompletionSource * didDismissTaskCompletionSource;                          //@synthesize didDismissTaskCompletionSource=_didDismissTaskCompletionSource - In the implementation block
@property (nonatomic,readonly) BFTask * didDismissTask; 
-(id)initWithViewController:(UIViewController*)arg1 presentationAxis:(long long)arg2 ;
-(BOOL)fb_shouldBeginDismissModalViewControllerGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(void)fb_didDismissModalViewController:(id)arg1 ;
-(BOOL)fb_shouldDismissModalViewControllerGestureInterveneInDirection:(long long)arg1 ;
-(BFTaskCompletionSource *)didDismissTaskCompletionSource;
-(long long)presentationAxis;
-(BFTask *)didDismissTask;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIViewController*<FBTarotCardViewControllerProtocol>)viewController;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)childViewControllerForStatusBarStyle;
-(id)childViewControllerForStatusBarHidden;
@end
