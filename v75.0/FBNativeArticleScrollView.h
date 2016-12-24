/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/PAUIScrollView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol FBNativeArticleScrollViewGestureHandling;
@class CALayer, FBNativeArticleUpArrowButton, UIColor, NSString;

@interface FBNativeArticleScrollView : PAUIScrollView <UIGestureRecognizerDelegate> {

	CALayer* _flickerConcealer;
	CALayer* _contentOverlay;
	FBNativeArticleUpArrowButton* _tapToTopButton;
	CGSize _tapToTopButtonSize;
	BOOL _contentHidden;
	id<FBNativeArticleScrollViewGestureHandling> _gestureHandler;
	UIColor* _articleBackgroundColor;

}

@property (nonatomic,readonly) CGRect preloadViewport; 
@property (nonatomic,readonly) CGRect workingViewport; 
@property (nonatomic,readonly) CGRect interactiveViewport; 
@property (assign,getter=isContentHidden,nonatomic) BOOL contentHidden;                                       //@synthesize contentHidden=_contentHidden - In the implementation block
@property (assign,nonatomic) BOOL flickerConcealerEnabled; 
@property (assign,getter=isTapToTopVisible,nonatomic) BOOL tapToTopVisible; 
@property (assign,nonatomic,__weak) id<FBNativeArticleScrollViewGestureHandling> gestureHandler;              //@synthesize gestureHandler=_gestureHandler - In the implementation block
@property (nonatomic,retain) UIColor * articleBackgroundColor;                                                //@synthesize articleBackgroundColor=_articleBackgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)scrollToTop:(BOOL)arg1 ;
-(void)setContentHidden:(BOOL)arg1 ;
-(BOOL)canRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(void)setArticleBackgroundColor:(UIColor *)arg1 ;
-(BOOL)_gestureShouldInterveneInDirection:(long long)arg1 withTouches:(id)arg2 ;
-(BOOL)isContentHidden;
-(void)setTapToTopVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)tappedTapToTopButton;
-(BOOL)_storyCanRespondToDirection:(long long)arg1 withTouches:(id)arg2 ;
-(id)initWithInterfaceGuide:(id)arg1 ;
-(CGRect)preloadViewport;
-(CGRect)workingViewport;
-(CGRect)interactiveViewport;
-(BOOL)flickerConcealerEnabled;
-(void)setFlickerConcealerEnabled:(BOOL)arg1 ;
-(void)setTapToTopVisible:(BOOL)arg1 ;
-(BOOL)isTapToTopVisible;
-(UIColor *)articleBackgroundColor;
-(void)layoutSubviews;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(BOOL)touchesShouldCancelInContentView:(id)arg1 ;
-(void)setGestureHandler:(id<FBNativeArticleScrollViewGestureHandling>)arg1 ;
-(id<FBNativeArticleScrollViewGestureHandling>)gestureHandler;
@end

