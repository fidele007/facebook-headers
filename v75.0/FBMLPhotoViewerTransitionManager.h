/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIViewControllerInteractiveTransitioning.h>

@protocol FBMLPhotoViewerTransitionManagerDelegate;
@class UIPanGestureRecognizer, SYNPhotoViewerTransitionContext, NSString;

@interface FBMLPhotoViewerTransitionManager : NSObject <UIGestureRecognizerDelegate, UIViewControllerAnimatedTransitioning, UIViewControllerInteractiveTransitioning> {

	CGPoint _originalCenterOfView;
	/*^block*/id _gestureEndBlock;
	UIPanGestureRecognizer* _transitioningPanGestureRecognizer;
	CGPoint _originalCenterTransitionView;
	SYNPhotoViewerTransitionContext* _currentTransitionContext;
	BOOL _presenting;
	id<FBMLPhotoViewerTransitionManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMLPhotoViewerTransitionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL presenting;                                                           //@synthesize presenting=_presenting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double completionSpeed; 
@property (nonatomic,readonly) long long completionCurve; 
@property (nonatomic,readonly) BOOL wantsInteractiveStart; 
-(void)_prepareForDismissal;
-(id)_stateForTransitionContext:(id)arg1 ;
-(void)_finishDismissalAnimationWithVelocity:(double)arg1 ;
-(void)_animatePresentation:(/*^block*/id)arg1 ;
-(void)_cancelDismissalAnimationWithVelocity:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setupTransitioningGestureRecognizerForView:(id)arg1 ;
-(void)_removeTransitioningGestureRecognizer;
-(void)_setupGestureRecognizerForView:(id)arg1 ;
-(BOOL)_setupForPresentationAnimation;
-(void)_recognizePanning:(id)arg1 ;
-(void)_recognizeTransitioningPanning:(id)arg1 ;
-(void)setDelegate:(id<FBMLPhotoViewerTransitionManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBMLPhotoViewerTransitionManagerDelegate>)delegate;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)startInteractiveTransition:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)presenting;
-(void)setPresenting:(BOOL)arg1 ;
@end

