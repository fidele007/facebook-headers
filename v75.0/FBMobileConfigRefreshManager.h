/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSNotificationCenter, NSTimer;

@interface FBMobileConfigRefreshManager : NSObject {

	double _startTime;
	unsigned long long _refreshTask;
	NSNotificationCenter* _center;
	NSTimer* _refreshTimer;
	shared_ptr<mobileconfig::IFBMobileConfigManager>* _manager;

}
-(void)_forceExit;
-(void)_applicationSuspensionHandler;
-(void)_forceFireIfScheduled;
-(IFBMobileConfigManager*)getAndTestManager;
-(id)initWithForcedExitNotification:(id)arg1 delayExitOnNotification:(id)arg2 notificationCenter:(id)arg3 mobileConfigManager:(shared_ptr<mobileconfig::IFBMobileConfigManager>*)arg4 ;
-(double)_minTimeBeforeRefresh;
-(void)_scheduleRefresh;
-(void)_cancelRefresh;
-(double)_timeDelayUntilRefresh;
-(id)_scheduledRefreshDate;
-(void)dealloc;
-(BOOL)isBackgrounded;
-(void)_applicationDidEnterBackground:(id)arg1 ;
-(void)_applicationWillEnterForeground:(id)arg1 ;
@end
