/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSMutableArray, NSString;

@interface FBAdInterfacesLogger : NSObject {

	/*^block*/id _defaultExtrasFactory;
	SCD_Struct_FB98 _perfLoggingConfig;
	NSMutableArray* _observers;
	BOOL _hasLoggedBudgetChangedEventInSession;
	BOOL _hasLoggedTargetingChangedEventInSession;
	NSString* _module;
	NSString* _flowID;

}

@property (nonatomic,copy,readonly) NSString * module;              //@synthesize module=_module - In the implementation block
@property (nonatomic,copy,readonly) NSString * flowID;              //@synthesize flowID=_flowID - In the implementation block
-(NSString *)module;
-(NSString *)flowID;
-(id)initWithModule:(id)arg1 defaultExtrasFactory:(/*^block*/id)arg2 perfLoggingConfiguration:(SCD_Struct_FB99)arg3 ;
-(void)logFlowEvent:(unsigned long long)arg1 flow:(id)arg2 additionalExtras:(id)arg3 ;
-(void)logChangeFlowOptionEventWithFlowOption:(unsigned long long)arg1 ;
-(void)logWarningMesssageShownEventWithType:(unsigned long long)arg1 message:(id)arg2 promotionActionType:(unsigned long long)arg3 ;
-(void)logChangeFlowOptionEventWithFlowOption:(unsigned long long)arg1 additionalExtras:(id)arg2 ;
-(void)logTargetingChangedEvent;
-(void)logBudgetChangedEvent;
-(void)logLoadingFailureEventWithAdditionalExtras:(id)arg1 ;
-(void)logTTIEvent:(unsigned long long)arg1 ;
-(void)logAddBudgetEvent:(unsigned long long)arg1 additionalExtras:(id)arg2 ;
-(void)logBudgetRecommendationsRequestEvent:(unsigned long long)arg1 additionalExtras:(id)arg2 ;
-(void)logCustomBudgetRequestEvent:(unsigned long long)arg1 additionalExtras:(id)arg2 ;
-(void)logCreatePromotionEvent:(unsigned long long)arg1 additionalExtras:(id)arg2 ;
-(void)logPausePromotionEvent:(unsigned long long)arg1 additionalExtras:(id)arg2 ;
-(void)logResumePromotionEvent:(unsigned long long)arg1 additionalExtras:(id)arg2 ;
-(void)logShowTutorialEvent;
-(void)logExitTutorialEvent;
-(void)logCancelTutorialEventAtStep:(id)arg1 ;
-(void)_log:(id)arg1 withAdditionalExtras:(id)arg2 ;
-(void)_logPerfEvent:(id)arg1 eventType:(unsigned long long)arg2 ;
-(void)_logPerfEvent:(id)arg1 eventType:(unsigned long long)arg2 tag:(id)arg3 ;
-(void)logPaymentFlowEvent:(unsigned long long)arg1 additionalExtras:(id)arg2 ;
-(void)logInsightsOpenClickEvent:(id)arg1 ;
-(void)logInsightsDialogOpenEvent:(id)arg1 ;
-(void)logInsightsDialogCloseEvent:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
@end
