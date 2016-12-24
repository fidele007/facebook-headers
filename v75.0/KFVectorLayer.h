/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <QuartzCore/CALayer.h>
#import <Facebook/CAAnimationDelegate.h>

@class CALayer, CABasicAnimation, NSString;

@interface KFVectorLayer : CALayer <CAAnimationDelegate> {

	CALayer* _containerLayer;
	CABasicAnimation* _mockAnimation;
	/*^block*/id _animationDidStopBlock;

}

@property (nonatomic,copy) id animationDidStopBlock;                //@synthesize animationDidStopBlock=_animationDidStopBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFaceModel:(id)arg1 ;
-(void)seekToProgress:(double)arg1 ;
-(void)_setupFace:(id)arg1 ;
-(CGPoint)_scaleFromSize:(CGSize)arg1 toSize:(CGSize)arg2 ;
-(void)_resetAnimations;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)startAnimation;
-(void)layoutSublayers;
-(void)setAnimationDidStopBlock:(id)arg1 ;
-(id)animationDidStopBlock;
-(void)pauseAnimation;
-(void)resumeAnimation;
-(void)seekToEnd;
@end
