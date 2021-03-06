/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/POPAnimationDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UINavigationController, UIViewController, NSString;

@interface FBFlipNavigationAnimation : NSObject <POPAnimationDelegate, UIViewControllerAnimatedTransitioning> {

	UINavigationController* _navigationController;
	UIViewController* _fromViewController;
	UIViewController* _toViewController;
	long long _operation;

}

@property (assign,nonatomic) long long operation;                   //@synthesize operation=_operation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)pop_animationDidApply:(id)arg1 ;
-(id)_flipAnimationProperty;
-(id)_rotationAnimation;
-(double)transitionDuration:(id)arg1 ;
-(long long)operation;
-(void)setOperation:(long long)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(id)initWithNavigationController:(id)arg1 ;
@end

