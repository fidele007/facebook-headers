/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class FBSwipeNavigationController, UIPercentDrivenInteractiveTransition, FBDirectionalPanGestureRecognizer, UIView, NSString;

@interface FBSwipeNavigationControllerFullScreenInteractor : NSObject <UIViewControllerAnimatedTransitioning> {

	CGRect _originalFromViewFrame;
	BOOL _runningSystemNavigationControllerAnimation;
	FBSwipeNavigationController* _navigationController;
	UIPercentDrivenInteractiveTransition* _interactiveTransition;
	FBDirectionalPanGestureRecognizer* _panGestureRecognizer;
	UIView* _transitionNavigationBarReplacement;
	CGRect _statusBarFrameBeforeTransition;

}

@property (assign,nonatomic) FBSwipeNavigationController * navigationController;                        //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) UIPercentDrivenInteractiveTransition * interactiveTransition;              //@synthesize interactiveTransition=_interactiveTransition - In the implementation block
@property (nonatomic,retain) FBDirectionalPanGestureRecognizer * panGestureRecognizer;                  //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL runningSystemNavigationControllerAnimation;                           //@synthesize runningSystemNavigationControllerAnimation=_runningSystemNavigationControllerAnimation - In the implementation block
@property (assign,nonatomic) CGRect statusBarFrameBeforeTransition;                                     //@synthesize statusBarFrameBeforeTransition=_statusBarFrameBeforeTransition - In the implementation block
@property (nonatomic,retain) UIView * transitionNavigationBarReplacement;                               //@synthesize transitionNavigationBarReplacement=_transitionNavigationBarReplacement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)canBeginInteractiveTransitionWithRecognizedGesture:(id)arg1 touch:(id)arg2 whitelistedViews:(id)arg3 ;
-(void)handleInteractivePopGestureRecognizerStateChange:(id)arg1 ;
-(void)handleFullScreenPanGesture:(id)arg1 ;
-(void)setRunningSystemNavigationControllerAnimation:(BOOL)arg1 ;
-(BOOL)runningSystemNavigationControllerAnimation;
-(void)prepareForNavigationBarReplacementTransition;
-(void)setStatusBarFrameBeforeTransition:(CGRect)arg1 ;
-(void)setTransitionNavigationBarReplacement:(UIView *)arg1 ;
-(void)setupReplacementNavigationBarInContainerView:(id)arg1 navigationBarAppearanceChange:(unsigned long long)arg2 statusBarAppearanceChange:(unsigned long long)arg3 fromView:(id)arg4 toView:(id)arg5 ;
-(void)animateNavigationBarReplacementWithAppearanceChange:(unsigned long long)arg1 targetToViewFrame:(CGRect)arg2 targetFromViewFrame:(CGRect)arg3 ;
-(CGRect)statusBarFrameBeforeTransition;
-(UIView *)transitionNavigationBarReplacement;
-(void)dealloc;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setInteractiveTransition:(UIPercentDrivenInteractiveTransition *)arg1 ;
-(FBDirectionalPanGestureRecognizer *)panGestureRecognizer;
-(void)setPanGestureRecognizer:(FBDirectionalPanGestureRecognizer *)arg1 ;
-(FBSwipeNavigationController *)navigationController;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3 ;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2 ;
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4 ;
-(void)setNavigationController:(FBSwipeNavigationController *)arg1 ;
-(UIPercentDrivenInteractiveTransition *)interactiveTransition;
@end

