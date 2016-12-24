/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/CAAnimationDelegate.h>

@class CALayer, NSMutableArray, FBSwipeableAnimationAsset, NSString;

@interface FBSwipeableFramesPageContentViewController : UIViewController <CAAnimationDelegate> {

	CALayer* _animatedLayer;
	NSMutableArray* _animationValues;
	BOOL _animatedLayerContainsAnimationInfo;
	FBSwipeableAnimationAsset* _animationAsset;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addAnimation;
-(id)_animateFrames;
-(void)_hideDefaultFrameLayer;
-(void)_showDefaultFrameLayer;
-(void)updateLayerFrames:(CGRect)arg1 ;
-(BOOL)animationInfoHasBeenPrepared;
-(void)updateAnimationAsset:(id)arg1 ;
-(void)updateSubLayerVisibility;
-(void)cleanAnimation;
-(id)init;
-(void)pauseAnimation;
-(void)resumeAnimation;
@end
