/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSRunLoop, NSTimer;

@interface FBDeferredTimer : NSObject {

	double _period;
	/*^block*/id _callback;
	NSRunLoop* _scheduledRunLoop;
	NSTimer* _underlyingTimer;

}
+(id)scheduledTimerWithPeriod:(double)arg1 callback:(/*^block*/id)arg2 ;
-(void)_onTimerFire;
-(id)initWithPeriod:(double)arg1 callback:(/*^block*/id)arg2 ;
-(void)scheduleOnRunLoop:(id)arg1 ;
-(void)_scheduleNewUnderlyingTimer;
-(BOOL)isScheduled;
-(void)invalidate;
-(void)signal;
@end
