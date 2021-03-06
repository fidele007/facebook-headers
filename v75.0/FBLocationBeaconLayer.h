/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <QuartzCore/CALayer.h>

@class FBCircleLinearGradientLayer, NSMutableArray;

@interface FBLocationBeaconLayer : CALayer {

	FBCircleLinearGradientLayer* _centerDotGradientLayer;
	NSMutableArray* _ringLayers;
	BOOL _synchronized;
	float _radius;
	CGGradientRef _dotGradient;
	CGColorRef _ringColor;
	unsigned long long _ringCount;

}

@property (assign,nonatomic) float radius;                              //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) CGGradientRef dotGradient;                 //@synthesize dotGradient=_dotGradient - In the implementation block
@property (assign,nonatomic) CGColorRef ringColor;                      //@synthesize ringColor=_ringColor - In the implementation block
@property (assign,nonatomic) unsigned long long ringCount;              //@synthesize ringCount=_ringCount - In the implementation block
@property (assign,nonatomic) BOOL synchronized;                         //@synthesize synchronized=_synchronized - In the implementation block
-(void)createCenterDotLayer;
-(void)handleEnterBackground:(id)arg1 ;
-(void)handleEnterForeground:(id)arg1 ;
-(void)scheduleAnimations;
-(void)removeAnimations;
-(id)makeRingPathAnimation;
-(id)makeRingOpacityAnimation;
-(id)makeRingLineWidthAnimation;
-(void)observeMultitaskingState;
-(void)invalidateMultitaskingObservers;
-(void)spawnRings;
-(void)invalidateAnimations;
-(void)setRingCount:(unsigned long long)arg1 ;
-(void)setRingColor:(CGColorRef)arg1 ;
-(void)setDotGradient:(CGGradientRef)arg1 ;
-(CGGradientRef)dotGradient;
-(CGColorRef)ringColor;
-(unsigned long long)ringCount;
-(BOOL)synchronized;
-(void)setSynchronized:(BOOL)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setContentsScale:(double)arg1 ;
-(void)layoutSublayers;
-(float)radius;
-(void)setRadius:(float)arg1 ;
@end

