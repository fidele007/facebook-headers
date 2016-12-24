/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject;

@interface FBFNFPlayerWatchdog : NSObject {

	NSObject*<OS_dispatch_queue> _threadToWatch;
	NSObject*<OS_dispatch_queue> _monitorThread;
	NSObject*<OS_dispatch_source> _monitorTimer;
	NSObject*<OS_dispatch_source> _periodicTimer;
	BOOL _stopRunning;

}
-(void)_cancelTimers;
-(void)_schedulePeriodicTimer;
-(void)_scheduleMonitorTimer;
-(void)_monitorTimerTimedOut;
-(void)_invalidateMonitorTimer;
-(id)initWithThreadToWatch:(id)arg1 allowAppInactivePlayback:(BOOL)arg2 ;
-(void)dealloc;
@end

