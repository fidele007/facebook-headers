/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBAdPaymentsAltpayConfirmationViewControllerDelegate.h>
#import <Facebook/FBWebViewControllerDelegate.h>
#import <Facebook/FBPaymentsEventListener.h>
#import <Facebook/FBPaymentsEventAnnouncing.h>

@protocol FBAdPaymentsAltpayWebViewControllerDelegate;
@class FBUserSession, FBWebViewController, FBPaymentsEventListenerAnnouncer, NSString, NSURL, FBPaymentsAltpayPaymentMethod;

@interface FBAdPaymentsAltpayWebViewController : UIViewController <FBAdPaymentsAltpayConfirmationViewControllerDelegate, FBWebViewControllerDelegate, FBPaymentsEventListener, FBPaymentsEventAnnouncing> {

	FBUserSession* _session;
	FBWebViewController* _webViewController;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	NSString* _adAccountId;
	NSString* _paymentId;
	NSURL* _altpayURL;
	FBPaymentsAltpayPaymentMethod* _paymentMethod;
	BOOL _isViewFirstPresent;
	id<FBAdPaymentsAltpayWebViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAdPaymentsAltpayWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(BOOL)fb_showBackArrowButton;
-(SEL)fb_actionForBackArrowButton;
-(void)webViewController:(id)arg1 didUpdateProgress:(double)arg2 ;
-(BOOL)webViewController:(id)arg1 shouldStartLoadURL:(id)arg2 navigationType:(long long)arg3 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)altpayConfirmationViewControllerDidBackClicked:(id)arg1 ;
-(void)altpayConfirmationViewControllerDidContinueClicked:(id)arg1 ;
-(void)_loadAltpayWebView;
-(void)_updateNavigationBarItems;
-(void)_showConfirmation;
-(void)_didBackBarButtonItemClicked:(id)arg1 ;
-(id)initWithSession:(id)arg1 adAccountId:(id)arg2 paymentId:(id)arg3 paymentMethod:(id)arg4 altpayURL:(id)arg5 ;
-(void)setDelegate:(id<FBAdPaymentsAltpayWebViewControllerDelegate>)arg1 ;
-(id<FBAdPaymentsAltpayWebViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
