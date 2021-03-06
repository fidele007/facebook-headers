/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPaymentsNavigationDelegate.h>
#import <Facebook/FBPaymentsCheckoutCartItemCollectionViewControllerDelegate.h>
#import <Facebook/FBModalWebFlowDelegate.h>
#import <Facebook/FBPaymentsEventListener.h>
#import <Facebook/FBPaymentsEventAnnouncing.h>

@protocol FBPaymentsCartSearchDataRetrieving, FBPaymentsCheckoutConfigurationProviding, FBPaymentsCartInfoProviding, FBPaymentsNavigationDelegate, FBPaymentsCartViewControllerDelegate, FBPaymentsLoggingService;
@class FBUserSession, FBPaymentsCartInfo, NSArray, UISearchController, FBPaymentsCheckoutCartItemCollectionViewController, FBPaymentsPriceListViewController, FBPaymentsCartView, FBPaymentsCheckoutActionButtonView, NSString, FBPaymentsEventListenerAnnouncer;

@interface FBPaymentsCartViewController : UIViewController <FBPaymentsNavigationDelegate, FBPaymentsCheckoutCartItemCollectionViewControllerDelegate, FBModalWebFlowDelegate, FBPaymentsEventListener, FBPaymentsEventAnnouncing> {

	FBUserSession* _session;
	FBPaymentsCartInfo* _cartInfo;
	NSArray* _purchaseInfoDescriptors;
	NSArray* _priceList;
	UISearchController* _searchController;
	FBPaymentsCheckoutCartItemCollectionViewController* _cartItemCollectionViewController;
	FBPaymentsPriceListViewController* _invoiceSummaryViewController;
	FBPaymentsCartView* _cartView;
	FBPaymentsCheckoutActionButtonView* _actionButtonView;
	id<FBPaymentsCartSearchDataRetrieving> _searchDataRetriever;
	id<FBPaymentsCheckoutConfigurationProviding> _checkoutConfigurationProvider;
	id<FBPaymentsCartInfoProviding> _cartInfoProvider;
	NSString* _cartTitle;
	NSString* _actionButtonTitle;
	NSString* _searchBarPlaceholderText;
	FBPaymentsEventListenerAnnouncer* _eventAnnouncer;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	id<FBPaymentsCartViewControllerDelegate> _delegate;
	id<FBPaymentsLoggingService> _loggingService;

}

@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsCartViewControllerDelegate> delegate;                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<FBPaymentsLoggingService> loggingService;                             //@synthesize loggingService=_loggingService - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addEventListener:(id)arg1 ;
-(void)removeEventListener:(id)arg1 ;
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(id)newNavigationController;
-(id)initWithSession:(id)arg1 cartConfiguration:(id)arg2 ;
-(void)didTriggerEventWithName:(id)arg1 announcerIdentifier:(id)arg2 collectedData:(id)arg3 ;
-(void)_applyCartConfiguartion:(id)arg1 ;
-(void)_loadCartInfo;
-(void)_configureActionButtonView;
-(void)_updateInvoiceSummary;
-(void)_updateActionButtonTitle;
-(void)_updateActionButtonStatus;
-(void)_handleCartInfoLoadError:(id)arg1 ;
-(void)_handleFallbackURL:(id)arg1 ;
-(void)_updateWithCartInfo:(id)arg1 purchaseInfoDescriptors:(id)arg2 priceList:(id)arg3 ;
-(void)_applyCartInfo;
-(void)_onCancel;
-(void)_onActionButton;
-(void)setLoggingService:(id<FBPaymentsLoggingService>)arg1 ;
-(id<FBPaymentsLoggingService>)loggingService;
-(void)cartItemCollectionViewControllerDidUpdate:(id)arg1 ;
-(void)setDelegate:(id<FBPaymentsCartViewControllerDelegate>)arg1 ;
-(id<FBPaymentsCartViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(void)_updateNavigationBar;
-(void)_setLoadingStatus:(BOOL)arg1 ;
-(void)_configureNavigationBar;
-(id)viewControllerForPresenting;
@end

