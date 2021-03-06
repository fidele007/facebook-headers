/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAdPaymentsFlowContext.h>
#import <Facebook/FBAdPaymentsFlowControllerDelegate.h>
#import <Facebook/RCTFBSessionModule.h>

@class NSString, FBAdPaymentsFlowController, UIViewController, RCTBridge, FBUserSession;

@interface FBAdPaymentsBridgeModule : NSObject <FBAdPaymentsFlowContext, FBAdPaymentsFlowControllerDelegate, RCTFBSessionModule> {

	NSString* _adAccountId;
	NSString* _currency;
	NSString* _legacyAdAccountId;
	NSString* _storedBalanceStatus;
	FBAdPaymentsFlowController* _paymentsFlowController;
	UIViewController* _reactRootController;
	RCTBridge* _bridge;
	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (assign,nonatomic,__weak) FBUserSession * session;                          //@synthesize session=_session - In the implementation block
+(id)moduleName;
+(id)__rct_export__450;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(id)adAccount;
-(id)flowPresentingViewController;
-(long long)adPaymentFlowMode;
-(id)adPaymentsBudgetCollectedData;
-(id)adPaymentsAdPreviewCollectedData;
-(id)adPaymentsEstimateResultsCollectedData;
-(unsigned long long)adDuration;
-(void)adPaymentsFlowControllerDidCancel:(id)arg1 ;
-(void)adPaymentsFlowControllerDidComplete:(id)arg1 checkoutCampaignGroupID:(id)arg2 checkoutPaymentIDs:(id)arg3 ;
-(void)startPrepayFundingFlow:(id)arg1 adAccountId:(id)arg2 legacyAdAccountId:(id)arg3 storedBalanceStatus:(id)arg4 currency:(id)arg5 ;
-(id)pageID;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(RCTBridge *)bridge;
@end

