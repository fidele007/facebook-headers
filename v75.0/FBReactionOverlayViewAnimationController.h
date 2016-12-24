/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComponentScrollEventListener.h>

@class FBReactionOverlayView, NSString;

@interface FBReactionOverlayViewAnimationController : NSObject <FBComponentScrollEventListener> {

	BOOL _isAppearing;
	BOOL _didStartDisappearing;
	BOOL _shouldFadeInTitle;
	BOOL _renderNewHeader;
	FBReactionOverlayView* _overlayView;

}

@property (nonatomic,retain) FBReactionOverlayView * overlayView;              //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) BOOL shouldFadeInTitle;                           //@synthesize shouldFadeInTitle=_shouldFadeInTitle - In the implementation block
@property (assign,nonatomic) BOOL renderNewHeader;                             //@synthesize renderNewHeader=_renderNewHeader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)fadeInForView:(id)arg1 delay:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
+(long long)_configureAnimationForLayer:(id)arg1 opacityToValue:(id)arg2 opacityFromValue:(id)arg3 verticalToValue:(id)arg4 verticalFromValue:(id)arg5 delay:(double)arg6 completionBlock:(/*^block*/id)arg7 ;
+(long long)fadeOutForView:(id)arg1 delay:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
+(long long)fadeOutForView:(id)arg1 verticalOffset:(double)arg2 delay:(double)arg3 resetToOriginalPosition:(BOOL)arg4 completionBlock:(/*^block*/id)arg5 ;
+(long long)fadeInForView:(id)arg1 verticalOffset:(double)arg2 delay:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
+(long long)fadeOutForView:(id)arg1 verticalOffset:(double)arg2 delay:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
+(void)_configureSpringAnimation:(id)arg1 withToValue:(id)arg2 fromValue:(id)arg3 delay:(double)arg4 completionBlock:(/*^block*/id)arg5 animatablePropertyString:(id)arg6 ;
-(void)_prepareForAnimation;
-(void)_fadeOutSpinner;
-(long long)_animateHeaderAppearanceWithInitialDelay:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
-(long long)_animateCardsAppearanceWithInitialDelay:(double)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_prepareForDisappearance;
-(long long)animateHeaderDisappearanceCompletion:(/*^block*/id)arg1 ;
-(long long)animateBackgroundDisappearanceCompletion:(/*^block*/id)arg1 ;
-(void)prepareCardForAnimation:(id)arg1 ;
-(id)initWithOverlayView:(id)arg1 ;
-(void)hideBeforeAnimation;
-(void)animateAppearanceCompletion:(/*^block*/id)arg1 ;
-(void)animateCardsAppearanceCompletion:(/*^block*/id)arg1 ;
-(void)animateDisappearanceCompletion:(/*^block*/id)arg1 ;
-(void)seeMoreIsBeingExpanded;
-(void)seeMoreIsBeingCollapsed;
-(void)startSpinner;
-(BOOL)shouldFadeInTitle;
-(void)setShouldFadeInTitle:(BOOL)arg1 ;
-(BOOL)renderNewHeader;
-(void)setRenderNewHeader:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)stopSpinner;
-(void)setOverlayView:(FBReactionOverlayView *)arg1 ;
-(FBReactionOverlayView *)overlayView;
-(void)_hideSpinner;
@end
