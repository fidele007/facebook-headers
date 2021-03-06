/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsCheckoutConfirmationViewControllerDelegate.h>
#import <Facebook/FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate.h>
#import <Facebook/FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate.h>
#import <Facebook/FBPaymentsCheckoutPaymentProcessControlling.h>

@protocol FBPaymentsCheckoutRequestHandling, FBPaymentsCheckoutConfirmationConfigurationProviding, FBPaymentsCheckoutPaymentProcessControllingDelegate, FBPaymentsNavigationDelegate;
@class FBUserSession, FBPaymentsLoadingStatusButton, FBPaymentsPINController, FBPaymentsTouchIDController, NSString;

@interface FBPaymentsCheckoutButtonBasedPaymentProcessController : NSObject <FBPaymentsCheckoutConfirmationViewControllerDelegate, FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate, FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate, FBPaymentsCheckoutPaymentProcessControlling> {

	FBUserSession* _session;
	FBPaymentsLoadingStatusButton* _loadingStatusButton;
	id<FBPaymentsCheckoutRequestHandling> _requestHandler;
	id<FBPaymentsCheckoutConfirmationConfigurationProviding> _confirmationConfigurationProvider;
	FBPaymentsPINController* _paymentsPINController;
	FBPaymentsTouchIDController* _touchIDController;
	BOOL _shouldDisplayCheckmark;
	id<FBPaymentsCheckoutPaymentProcessControllingDelegate> _delegate;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutPaymentProcessControllingDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;                           //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
-(void)paymentsRequestHandler:(id)arg1 didSendPaymentWithFlowId:(id)arg2 withCheckoutCollectedData:(id)arg3 checkoutResponse:(id)arg4 ;
-(void)paymentsRequestHandler:(id)arg1 didFailSendingPaymentWithFlowId:(id)arg2 withCheckoutCollectedData:(id)arg3 error:(id)arg4 ;
-(void)paymentsRequestHandler:(id)arg1 didFailProcessingWithFlowId:(id)arg2 wasCancelled:(BOOL)arg3 error:(id)arg4 ;
-(void)paymentsRequestHandler:(id)arg1 didFinishProcessingWithFlowId:(id)arg2 ;
-(void)paymentsRequestHandler:(id)arg1 didUpdateLoadingStatusText:(id)arg2 ;
-(void)_dispatchFinishCheckoutWithCheckoutResponse:(id)arg1 checkoutFlowCollectedData:(id)arg2 ;
-(void)_displayConfirmationViewWithCheckoutResponse:(id)arg1 checkoutFlowCollectedData:(id)arg2 confirmationConfiguration:(id)arg3 ;
-(void)confirmationViewControllerDidFinish:(id)arg1 ;
-(void)processPaymentWithFlowId:(id)arg1 collectedData:(id)arg2 checkoutLoggingService:(id)arg3 ;
-(id)initWithSession:(id)arg1 loadingStatusButton:(id)arg2 requestHandler:(id)arg3 confirmationConfigurationProvider:(id)arg4 paymentsPINController:(id)arg5 touchIDController:(id)arg6 shouldDisplayCheckmark:(BOOL)arg7 ;
-(void)setDelegate:(id<FBPaymentsCheckoutPaymentProcessControllingDelegate>)arg1 ;
-(id<FBPaymentsCheckoutPaymentProcessControllingDelegate>)delegate;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
@end

