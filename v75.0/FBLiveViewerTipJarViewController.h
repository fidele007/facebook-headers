/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBFacecastTipJarPaymentSettingManagerDelegate.h>
#import <Facebook/FBLiveViewerTipJarViewDelegate.h>
#import <Facebook/FBLiveViewerTipJarToolbarViewControllerDelegate.h>
#import <Facebook/FBPaymentsLoggingServiceDataSource.h>
#import <Facebook/FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate.h>
#import <Facebook/FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate.h>
#import <Facebook/FBPaymentsEventListener.h>
#import <Facebook/FBPaymentsNavigationDelegate.h>
#import <Facebook/FBPaymentsPurchaseInfoExtensionControllerDelegate.h>

@protocol FBQueriedNodeFieldsProtocol, FBPaymentsCheckoutRequestHandling, FBLiveViewerTipJarViewControllerDelegate;
@class FBUserSession, FBMemModelObject, UIViewController, FBMemVideo, NSDecimalNumber, FBPaymentsCheckoutPaymentInfo, FBPaymentsPurchaseInfoExtensionController, FBPaymentsPurchaseInfoExtensionProvider, FBFacecastTipJarPaymentSettingManager, FBPaymentsPINController, FBPaymentsTouchIDController, FBPaymentsPasscodeWorkflowController, FBLiveViewerTipJarToolbarViewController, FBPaymentsPurchaseInfoPayWithExtension, NSString, FBLiveViewerTipJarView, FBLiveViewerTipJarPaymentActivityIndicatorView, FBCommunicationSoundEffect, FBPaymentsEventListenerAnnouncer, FBPaymentsCheckoutLoggingService, FBFacecastViewerTipJarFunnelLogger;

@interface FBLiveViewerTipJarViewController : UIViewController <FBFacecastTipJarPaymentSettingManagerDelegate, FBLiveViewerTipJarViewDelegate, FBLiveViewerTipJarToolbarViewControllerDelegate, FBPaymentsLoggingServiceDataSource, FBPaymentsCheckoutRequestHandlingPaymentProcessingDelegate, FBPaymentsCheckoutRequestHandlingPaymentSendingDelegate, FBPaymentsEventListener, FBPaymentsNavigationDelegate, FBPaymentsPurchaseInfoExtensionControllerDelegate> {

	FBUserSession* _session;
	FBMemModelObject*<FBQueriedNodeFieldsProtocol> _broadcaster;
	UIViewController* _presentedController;
	FBMemVideo* _video;
	NSDecimalNumber* _tipAmount;
	BOOL _hasPaymentMethodOriginally;
	BOOL _shouldSkipAuthentication;
	FBPaymentsCheckoutPaymentInfo* _paymentInfo;
	FBPaymentsPurchaseInfoExtensionController* _purchaseInfoExtensionManager;
	FBPaymentsPurchaseInfoExtensionProvider* _purchaseInfoExtensionProvider;
	FBFacecastTipJarPaymentSettingManager* _paymentSettingManager;
	id<FBPaymentsCheckoutRequestHandling> _requestHandler;
	FBPaymentsPINController* _paymentsPINController;
	FBPaymentsTouchIDController* _paymentsTouchIDController;
	FBPaymentsPasscodeWorkflowController* _passcodeWorkflowController;
	FBLiveViewerTipJarToolbarViewController* _toolbarViewController;
	FBPaymentsPurchaseInfoPayWithExtension* _payWithExtension;
	BOOL _hasUserPressedPayButton;
	NSString* _flowId;
	FBLiveViewerTipJarView* _tipJarView;
	FBLiveViewerTipJarPaymentActivityIndicatorView* _paymentActivityView;
	FBCommunicationSoundEffect* _enterSound;
	FBCommunicationSoundEffect* _sentSound;
	FBCommunicationSoundEffect* _sendSound;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	FBPaymentsCheckoutLoggingService* _loggingService;
	FBFacecastViewerTipJarFunnelLogger* _funnelLogger;
	id<FBLiveViewerTipJarViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBLiveViewerTipJarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(id)newNavigationController;
-(void)paymentsRequestHandler:(id)arg1 didSendPaymentWithFlowId:(id)arg2 withCheckoutCollectedData:(id)arg3 checkoutResponse:(id)arg4 ;
-(id)initWithSession:(id)arg1 broadcaster:(id)arg2 story:(id)arg3 video:(id)arg4 ;
-(void)_onActionError:(id)arg1 ;
-(void)paymentsRequestHandler:(id)arg1 didFailSendingPaymentWithFlowId:(id)arg2 withCheckoutCollectedData:(id)arg3 error:(id)arg4 ;
-(void)paymentsRequestHandler:(id)arg1 didFailProcessingWithFlowId:(id)arg2 wasCancelled:(BOOL)arg3 error:(id)arg4 ;
-(void)paymentsRequestHandler:(id)arg1 didFinishProcessingWithFlowId:(id)arg2 ;
-(void)paymentsRequestHandler:(id)arg1 didUpdateLoadingStatusText:(id)arg2 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)tipJarPaymentSettingManager:(id)arg1 didLoadTipJarPaymentSetting:(BOOL)arg2 ;
-(void)tipJarViewDidSetTipAmount:(id)arg1 option:(id)arg2 ;
-(void)tipJarViewDidTapDismissButton:(id)arg1 ;
-(void)tipJarViewDidTapLoveButton:(id)arg1 ;
-(void)_initPaymentSettingManagerIfNeeded;
-(void)_initPurchaseInfoExtensionManager;
-(void)_initLoggingService;
-(void)_loadSoundFromDisk;
-(void)_processPayment;
-(void)_resetPaymentStatus;
-(id)_currentCollectedData;
-(void)_updatePaymentActivityIndicator:(unsigned long long)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_showCreatePaymentPINNuxIfNeeded:(/*^block*/id)arg1 ;
-(void)_configurePayWithExtension:(id)arg1 ;
-(void)_dispatchPaymentRequest;
-(void)tipJarToolbarViewControllerDidTapDismissButton:(id)arg1 ;
-(void)tipJarToolbarViewControllerDidTapPaymentMethod:(id)arg1 hasPaymentMethod:(BOOL)arg2 ;
-(void)tipJarToolbarViewControllerDidTapSendTip:(id)arg1 ;
-(id)paymentsFlowCollectedDataForLoggingService:(id)arg1 ;
-(void)purchaseInfoExtensionControllerExtensionsDidFinishInitialLoading:(id)arg1 ;
-(void)purchaseInfoViewControllerDidUpdate:(id)arg1 isUserAction:(BOOL)arg2 ;
-(void)purchaseInfoViewControllerDidCancelFollowUpAdding:(id)arg1 ;
-(void)purchaseInfoViewControllerWillBeginProcessing:(id)arg1 ;
-(void)purchaseInfoViewControllerDidEndProcessing:(id)arg1 ;
-(void)setDelegate:(id<FBLiveViewerTipJarViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBLiveViewerTipJarViewControllerDelegate>)delegate;
-(void)loadView;
-(id)viewControllerForPresenting;
@end

