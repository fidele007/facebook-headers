/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInvalidating.h>
#import <Facebook/FBAppService.h>

@protocol OS_dispatch_queue;
@class NSNotificationCenter, FBFGLLocationServiceConfig, NSObject, FBUserSession, FBFGLLocationService, FBFGLLogger, NSDate, FBTimer, NSString;

@interface FBFGLLocationFetchTrigger : NSObject <FBInvalidating, FBAppService> {

	NSNotificationCenter* _notificationCenter;
	FBFGLLocationServiceConfig* _config;
	NSObject*<OS_dispatch_queue> _workQueue;
	FBUserSession* _session;
	FBFGLLocationService* _service;
	FBFGLLogger* _logger;
	NSDate* _lastTimeTriggerDate;
	BOOL _authorizedForLocationFetch;
	FBTimer* _timer;
	BOOL _valid;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;              //@synthesize valid=_valid - In the implementation block
-(void)startAppService;
-(void)stopAppService;
-(void)_setupAndstartTrigger;
-(void)_appEnterForeground;
-(void)_appEnterBackground;
-(void)_triggerDataFetch;
-(void)_startTrigger;
-(void)_suspendTrigger;
-(id)initWithNotificationCenter:(id)arg1 service:(id)arg2 config:(id)arg3 userSession:(id)arg4 logger:(id)arg5 ;
-(void)dealloc;
-(void)invalidate;
-(BOOL)isValid;
@end

