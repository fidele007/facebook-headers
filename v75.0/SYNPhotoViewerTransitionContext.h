/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBMLPhotoViewerContainerProtocol, UIViewControllerContextTransitioning;
@class UIViewController, FBMLScrollingPhotoViewController, UIView, UIImageView;

@interface SYNPhotoViewerTransitionContext : NSObject {

	BOOL _presenting;
	UIViewController* _originViewController;
	FBMLScrollingPhotoViewController* _photoViewerController;
	UIView*<FBMLPhotoViewerContainerProtocol> _originContainerView;
	UIView*<FBMLPhotoViewerContainerProtocol> _photoViewerContainerView;
	UIView* _containerView;
	id<UIViewControllerContextTransitioning> _context;
	UIView* _transitionImageContainerView;
	UIImageView* _transitionImageView;

}

@property (nonatomic,readonly) BOOL presenting;                                                                        //@synthesize presenting=_presenting - In the implementation block
@property (nonatomic,__weak,readonly) UIViewController * originViewController;                                         //@synthesize originViewController=_originViewController - In the implementation block
@property (nonatomic,__weak,readonly) FBMLScrollingPhotoViewController * photoViewerController;                        //@synthesize photoViewerController=_photoViewerController - In the implementation block
@property (nonatomic,__weak,readonly) UIView*<FBMLPhotoViewerContainerProtocol> originContainerView;                   //@synthesize originContainerView=_originContainerView - In the implementation block
@property (nonatomic,__weak,readonly) UIView*<FBMLPhotoViewerContainerProtocol> photoViewerContainerView;              //@synthesize photoViewerContainerView=_photoViewerContainerView - In the implementation block
@property (nonatomic,__weak,readonly) UIView * containerView;                                                          //@synthesize containerView=_containerView - In the implementation block
@property (nonatomic,readonly) id<UIViewControllerContextTransitioning> context;                                       //@synthesize context=_context - In the implementation block
@property (nonatomic,__weak,readonly) UIView * transitionImageContainerView;                                           //@synthesize transitionImageContainerView=_transitionImageContainerView - In the implementation block
@property (nonatomic,__weak,readonly) UIImageView * transitionImageView;                                               //@synthesize transitionImageView=_transitionImageView - In the implementation block
-(id)initWithPresentationState:(BOOL)arg1 originContainerView:(id)arg2 photoViewerContainerView:(id)arg3 context:(id)arg4 ;
-(UIViewController *)originViewController;
-(FBMLScrollingPhotoViewController *)photoViewerController;
-(UIView*<FBMLPhotoViewerContainerProtocol>)originContainerView;
-(UIView*<FBMLPhotoViewerContainerProtocol>)photoViewerContainerView;
-(UIView *)transitionImageContainerView;
-(UIImageView *)transitionImageView;
-(void)dealloc;
-(UIView *)containerView;
-(id<UIViewControllerContextTransitioning>)context;
-(BOOL)presenting;
@end

