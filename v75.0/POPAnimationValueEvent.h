/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/POPAnimationEvent.h>

@interface POPAnimationValueEvent : POPAnimationEvent {

	id _value;
	id _velocity;

}

@property (nonatomic,retain) id velocity;              //@synthesize velocity=_velocity - In the implementation block
@property (nonatomic,readonly) id value;               //@synthesize value=_value - In the implementation block
-(void)_appendDescription:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 time:(double)arg2 value:(id)arg3 ;
-(void)setVelocity:(id)arg1 ;
-(id)value;
-(id)velocity;
@end

