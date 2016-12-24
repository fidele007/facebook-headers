/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface RCTAnimation : NSObject {

	double _duration;
	double _delay;
	NSString* _property;
	double _springDamping;
	double _initialVelocity;
	long long _animationType;

}

@property (nonatomic,readonly) double duration;                       //@synthesize duration=_duration - In the implementation block
@property (nonatomic,readonly) double delay;                          //@synthesize delay=_delay - In the implementation block
@property (nonatomic,copy,readonly) NSString * property;              //@synthesize property=_property - In the implementation block
@property (nonatomic,readonly) double springDamping;                  //@synthesize springDamping=_springDamping - In the implementation block
@property (nonatomic,readonly) double initialVelocity;                //@synthesize initialVelocity=_initialVelocity - In the implementation block
@property (nonatomic,readonly) long long animationType;               //@synthesize animationType=_animationType - In the implementation block
+(void)keyboardWillChangeFrame:(id)arg1 ;
+(void)initializeStatics;
-(id)initWithDuration:(double)arg1 dictionary:(id)arg2 ;
-(void)performAnimations:(/*^block*/id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(double)duration;
-(double)delay;
-(long long)animationType;
-(double)springDamping;
-(NSString *)property;
-(double)initialVelocity;
@end
