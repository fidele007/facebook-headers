/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBTimelineAnalyticsSpinnerTracking.h>

@class NSString, FBAnalyticsPerfLogger;

@interface FBTimelineAnalyticsWaitTimeTracker : NSObject <FBTimelineAnalyticsSpinnerTracking> {

	NSString* _perfLoggerEvent;
	FBAnalyticsPerfLogger* _perfLogger;
	long long _state;
	BOOL _hasSuccessfullyLoaded;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadingDidStart;
-(id)initWithPerfLoggerEvent:(id)arg1 perfLogger:(id)arg2 ;
-(void)spinnerWillAppear;
-(void)loadingDidEndWithError:(id)arg1 ;
-(void)loadingWasAborted;
-(void)_markStartForEvent;
-(void)_loadingHasStoppedWithStatus:(id)arg1 succeeded:(BOOL)arg2 ;
-(void)_logZeroWaitTimeForEventWithStatus:(id)arg1 ;
-(void)_markStopForEventWithStatus:(id)arg1 ;
-(void)spinnerDidDisappear;
-(void)dealloc;
@end

