/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAdPaymentsAnalyticsEventDupChecker;
@class NSString, NSDictionary;

@interface FBAdPaymentsAnalyticsLogger : NSObject {

	NSString* _flowId;
	NSString* _moduleName;
	NSDictionary* _defaultExtras;
	id<FBAdPaymentsAnalyticsEventDupChecker> _eventDupChecker;

}
-(BOOL)_shouldLogWithEventName:(id)arg1 withAdditionExtras:(id)arg2 ;
-(void)_logEvent:(id)arg1 withAdditionExtras:(id)arg2 ;
-(id)initWithModuleName:(id)arg1 flowId:(id)arg2 defaultExtras:(id)arg3 eventDupChecker:(id)arg4 ;
-(void)logAdPaymentsFlowWithEventName:(id)arg1 withAdditionExtras:(id)arg2 ;
@end
