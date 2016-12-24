/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIPinchGestureRecognizer.h>

@interface FBPinchGestureRecognizer : UIPinchGestureRecognizer {

	unsigned long long _maximumNumberOfTouches;
	BOOL _beginsImmediately;

}

@property (assign,nonatomic) unsigned long long maximumNumberOfTouches;              //@synthesize maximumNumberOfTouches=_maximumNumberOfTouches - In the implementation block
@property (assign,nonatomic) BOOL beginsImmediately;                                 //@synthesize beginsImmediately=_beginsImmediately - In the implementation block
-(void)setBeginsImmediately:(BOOL)arg1 ;
-(BOOL)beginsImmediately;
-(id)init;
-(void)setMaximumNumberOfTouches:(unsigned long long)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_commonInit;
-(unsigned long long)maximumNumberOfTouches;
@end
