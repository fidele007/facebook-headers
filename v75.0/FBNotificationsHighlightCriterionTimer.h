/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSTimer, _FBNotificationsHighlightCriterionTimerHelper;

@interface FBNotificationsHighlightCriterionTimer : NSObject {

	NSDate* _timestamp;
	NSTimer* _timer;
	_FBNotificationsHighlightCriterionTimerHelper* _timerHelper;
	/*^block*/id _completionBlock;
	BOOL _isInvalid;

}
-(void)_setupTimerWithTimeLeft:(double)arg1 ;
-(void)_applicationDidFinishEnteringForegroundAndIsNowIdle:(id)arg1 ;
-(void)_clearOutTimer;
-(id)initWithTimestamp:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)didTimeout;
@end
