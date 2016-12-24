/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBMLTouchPassthroughViewDelegate.h>

@class UIView, FBMLTouchPassthroughView, FBMLPopoverPresenterConfig, FBMLBubbleWrapView, NSString;

@interface FBMLPopoverPresenter : NSObject <FBMLTouchPassthroughViewDelegate> {

	UIView* _view;
	UIView* _hostingView;
	FBMLTouchPassthroughView* _blackDimmingView;
	BOOL _isPresenting;
	CGRect _presentFrame;
	CGPoint _presentPoint;
	int _inferredAnchorPosition;
	FBMLPopoverPresenterConfig* _config;
	FBMLBubbleWrapView* _bubbleWrapView;

}

@property (nonatomic,readonly) FBMLBubbleWrapView * bubbleWrapView;              //@synthesize bubbleWrapView=_bubbleWrapView - In the implementation block
@property (nonatomic,readonly) UIView * view; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithView:(id)arg1 hostingView:(id)arg2 config:(id)arg3 ;
-(void)presentAtView:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)presentAtFrame:(CGRect)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_presentAtPoint:(CGPoint)arg1 anchorPosition:(int)arg2 animated:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)layoutIfPresented;
-(CGAffineTransform)_bubbleTransform;
-(BOOL)touchPassthroughView:(id)arg1 shouldInterceptTouchAtPoint:(CGPoint)arg2 withEvent:(id)arg3 ;
-(void)dismissWithFade:(double)arg1 animated:(BOOL)arg2 ;
-(FBMLBubbleWrapView *)bubbleWrapView;
-(void)dealloc;
-(UIView *)view;
-(void)dismissAnimated:(BOOL)arg1 ;
@end
