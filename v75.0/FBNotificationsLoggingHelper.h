/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBAnimationPerformanceLogger;

@interface FBNotificationsLoggingHelper : NSObject {

	BOOL _notificationTabTTILoggingIsRunning;
	BOOL _initialTTILoggingCompleted;
	NSString* _analyticsModule;
	FBAnimationPerformanceLogger* _scrollingPerfTracker;

}
-(id)initWithAnalyticsModule:(id)arg1 ;
-(void)stopNotificationsTabTTILoggingWithStatus:(id)arg1 ;
-(void)logNotificationsViewState:(long long)arg1 withNotificationsCount:(unsigned long long)arg2 ;
-(void)startPTRPerfLogging;
-(void)stopPTRPerfLoggingWithStatus:(id)arg1 ;
-(void)startScrollPerfLogging;
-(void)stopScrollPerfLogging;
-(void)_stopPerfLoggingForEvent:(id)arg1 status:(id)arg2 tag:(id)arg3 ;
-(void)_startPerfLoggingForEvent:(id)arg1 ;
-(void)_cancelPerfLoggingForEvent:(id)arg1 ;
-(void)startJewelClickTTILogging;
-(void)logNotificationsViewAppearanceWithComponentModels:(id)arg1 ;
@end

