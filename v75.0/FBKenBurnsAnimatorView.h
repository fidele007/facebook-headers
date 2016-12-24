/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBKenBurnsSlide, FBKenBurnsAnimatorViewDataSource;
@class FBKenBurnsAnimatorConfig, UIView, NSTimer, FBKenBurnsDataSourceCoordinator;

@interface FBKenBurnsAnimatorView : UIView {

	FBKenBurnsAnimatorConfig* _config;
	UIView*<FBKenBurnsSlide> _currentSlide;
	CGRect _currentBounds;
	NSTimer* _nextSlideTimer;
	BOOL _shouldShowNextSlide;
	BOOL _animationStoppedAfterInitialization;
	FBKenBurnsDataSourceCoordinator* _dataSourceCoordinator;
	id<FBKenBurnsAnimatorViewDataSource> _dataSource;

}

@property (nonatomic,__weak,readonly) id<FBKenBurnsAnimatorViewDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)_next;
-(void)dataSourceDidUpdate;
-(id)initWithConfig:(id)arg1 dataSource:(id)arg2 ;
-(void)_onTimerFire;
-(void)_updateAnimationsOnCurrentSlide;
-(void)_addScaleAnimationToSlide:(id)arg1 forBounds:(CGRect)arg2 config:(id)arg3 ;
-(void)_setCurrentSlide:(id)arg1 ;
-(CGAffineTransform)_focusedEnlargedTransformForBounds:(CGRect)arg1 focusPoint:(CGPoint)arg2 config:(id)arg3 ;
-(CGAffineTransform)_randomEnlargedTransformForBounds:(CGRect)arg1 config:(id)arg2 ;
-(void)_resumeLayer:(id)arg1 ;
-(void)_pauseLayer:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)reload;
-(id<FBKenBurnsAnimatorViewDataSource>)dataSource;
-(void)stopAnimating;
-(void)startAnimating;
-(void)_setupTimer;
@end

