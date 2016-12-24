/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/FBPaymentsKitCardInfoViewDelegate.h>

@protocol FBPaymentsKitCardViewControllerDelegate;
@class FBMemCreditCard, FBPaymentsKitCardViewDataSource, NSString, FBPaymentsKitCardViewSectionHeaderView, FBPaymentsKitCardViewSectionFooterView, FBFullscreenSpinnerController, NSMutableDictionary, NSDictionary, FBPaymentsKitPaymentMethodsRequestHandler, FBPaymentsKitCardViewControllerEventListenerAnnouncer;

@interface FBPaymentsKitCardViewController : UITableViewController <FBPaymentsKitCardInfoViewDelegate> {

	FBMemCreditCard* _card;
	FBPaymentsKitCardViewDataSource* _viewDataSource;
	NSString* _errorDescription;
	FBPaymentsKitCardViewSectionHeaderView* _infoSectionHeaderView;
	FBPaymentsKitCardViewSectionFooterView* _infoSectionFooterView;
	FBPaymentsKitCardViewSectionFooterView* _makePrimarySectionFooterView;
	long long _presentingMode;
	long long _flowMode;
	FBFullscreenSpinnerController* _spinnerController;
	NSString* _accountID;
	NSString* _contextID;
	NSMutableDictionary* _errorMessagesForInfoViews;
	NSDictionary* _extraAnalyticsInfo;
	BOOL _shouldDisableErrorMessage;
	FBPaymentsKitPaymentMethodsRequestHandler* _paymentMethodsRequestHandler;
	FBPaymentsKitCardViewControllerEventListenerAnnouncer* _announcer;
	BOOL _isValidatingCard;
	id<FBPaymentsKitCardViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPaymentsKitCardViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL isValidatingCard;                                                    //@synthesize isValidatingCard=_isValidatingCard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(void)_handleLinkTap:(id)arg1 withEvent:(id)arg2 ;
-(id)initWithSession:(id)arg1 flowMode:(long long)arg2 accountID:(id)arg3 extraAnalyticsInfo:(id)arg4 ;
-(id)initWithPaymentMethodsRequestHandler:(id)arg1 andCreditCard:(id)arg2 ;
-(void)_onCancel;
-(void)_applyConfiguration:(id)arg1 animated:(BOOL)arg2 ;
-(void)_updateCardViewOrientationIsLandscapeMode:(BOOL)arg1 ;
-(void)_updateSaveCardBarButtonItemEnabledState;
-(BOOL)isValidatingCard;
-(void)setIsValidatingCard:(BOOL)arg1 ;
-(void)infoView:(id)arg1 didChangeContentsInTextAndImageView:(id)arg2 isUserInput:(BOOL)arg3 errorDescription:(id)arg4 shouldAlert:(BOOL)arg5 ;
-(void)_initializeViewControllerWithCard:(id)arg1 ;
-(void)saveCard:(id)arg1 ;
-(id)_actionButtonTitleForMode:(long long)arg1 ;
-(void)_deleteCard;
-(void)_updateInfoSectionHeaderView;
-(void)_displayVerificationMode;
-(void)_handleSuccessfulResponseforGraphRequest:(id)arg1 cardNumber:(id)arg2 expiryDate:(id)arg3 zipCode:(id)arg4 ;
-(void)_handleAddCardCallback:(BOOL)arg1 paymentMethod:(id)arg2 error:(id)arg3 ;
-(void)_handleFailureResponseforGraphRequestWithError:(id)arg1 ;
-(void)_displayResultModeWithResult:(BOOL)arg1 ;
-(void)_dismissSpinnerWithFadeOutEffect:(BOOL)arg1 ;
-(void)setDelegate:(id<FBPaymentsKitCardViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<FBPaymentsKitCardViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_updateNavigationItemAnimated:(BOOL)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

