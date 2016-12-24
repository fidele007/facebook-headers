/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ZRTariffedNavigationController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>

@protocol UINavigationControllerDelegate;
@class NSMutableSet, FBSwipeNavigationControllerFullScreenInteractor, NSString;

@interface FBSwipeNavigationController : ZRTariffedNavigationController <UIGestureRecognizerDelegate, UINavigationControllerDelegate> {

	BOOL _swipeEnabled;
	id<UINavigationControllerDelegate> _externalDelegate;
	NSMutableSet* _swipeGestures;
	FBSwipeNavigationControllerFullScreenInteractor* _fullScreenSwiper;
	BOOL _fullScreenSwipeEnabled;

}

@property (assign,nonatomic) BOOL swipeEnabled;                        //@synthesize swipeEnabled=_swipeEnabled - In the implementation block
@property (assign,nonatomic) BOOL fullScreenSwipeEnabled;              //@synthesize fullScreenSwipeEnabled=_fullScreenSwipeEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)swipeEnabled;
-(void)setSwipeEnabled:(BOOL)arg1 ;
-(void)navigationController:(id)arg1 didSetNavigationBarHidden:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)setFullScreenSwipeEnabled:(BOOL)arg1 ;
-(void)_swipeNavigationControllerCommonInit;
-(void)configureInteractivePopGestureRecognizer;
-(BOOL)shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(BOOL)fullScreenSwipeEnabled;
-(void)stopTreatingGestureRecognizerAsSwipeDriving:(id)arg1 ;
-(void)startTreatingGestureRecognizerAsSwipeDriving:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(id)popViewControllerAnimated:(BOOL)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1 ;
-(long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(id)initWithRootViewController:(id)arg1 ;
-(id)initWithNavigationBarClass:(Class)arg1 toolbarClass:(Class)arg2 ;
@end

