/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBDisplayableMediaTransitioningDelegate.h>

@class UIView, FBPhotosTransitioningDelegate, UIColor, NSString;

@interface FBPhotoViewerDisplayableMediaTransitioningDelegate : NSObject <FBDisplayableMediaTransitioningDelegate> {

	UIView* _viewToFadeIn;
	UIView* _viewToHide;
	FBPhotosTransitioningDelegate* _photosTransitioningDelegate;
	UIColor* _overlayColor;

}

@property (assign,nonatomic) UIColor * overlayColor;                //@synthesize overlayColor=_overlayColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)transitionManager:(id)arg1 willStartTransitionWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 animateInsideAnimationBlockWithWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 didEndTransitionWithMediaViewOrLayer:(id)arg2 containerView:(id)arg3 ;
-(void)transitionManager:(id)arg1 interactiveDismissalDidUpdateWithTranslation:(CGPoint)arg2 dismissalProgress:(double)arg3 mediaViewOrLayer:(id)arg4 containerView:(id)arg5 ;
-(BOOL)transitionManagerShouldShowPresentedViewDuringTransition:(id)arg1 ;
-(BOOL)transitionManagerShouldAddMediaViewOnTop:(id)arg1 ;
-(BOOL)transitionManagerSupportsInteractiveDismissOnlyOnPresentedView:(id)arg1 ;
-(id)initWithViewToFadeIn:(id)arg1 viewToHide:(id)arg2 ;
-(void)setOverlayColor:(UIColor *)arg1 ;
-(UIColor *)overlayColor;
@end
