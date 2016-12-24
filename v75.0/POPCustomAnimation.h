/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/POPAnimation.h>

@interface POPCustomAnimation : POPAnimation {

	double _currentTime;
	double _elapsedTime;
	/*^block*/id _animate;

}

@property (nonatomic,copy) id animate;                          //@synthesize animate=_animate - In the implementation block
@property (nonatomic,readonly) double currentTime;              //@synthesize currentTime=_currentTime - In the implementation block
@property (nonatomic,readonly) double elapsedTime;              //@synthesize elapsedTime=_elapsedTime - In the implementation block
+(id)animationWithBlock:(/*^block*/id)arg1 ;
-(void)_appendDescription:(id)arg1 debug:(BOOL)arg2 ;
-(BOOL)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3 ;
-(id)_init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(double)beginTime;
-(id)animate;
-(double)elapsedTime;
-(double)currentTime;
-(void)setAnimate:(id)arg1 ;
@end

