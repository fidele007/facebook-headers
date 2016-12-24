/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewController.h>
#import <Facebook/FBNetworkerRequestDelegate.h>
#import <Facebook/FBSelectPaymentMethodViewController.h>
@class FBUserSession;


@protocol FBSelectPaymentMethodViewController <FBPresentableViewController>
@property (nonatomic,retain) id<FBPaymentsCreditCard> selectedCreditCard; 
@property (nonatomic,retain) id<FBPaymentsPaypal> selectedPaypal; 
@property (assign,nonatomic,__weak) id<FBSelectPaymentMethodViewControllerDelegate> delegate; 
@property (nonatomic,retain) FBUserSession * session; 
@property (assign,nonatomic) BOOL paypalDisabled; 
@property (assign,nonatomic) BOOL PUXDisabled; 
@property (assign,nonatomic) BOOL NUXDisabled; 
@property (assign,nonatomic) BOOL addCreditCardShowZipCode; 
@property (assign,nonatomic) BOOL addCreditCardShowFullName; 
@property (assign,nonatomic) BOOL addCreditCardShowBillingAddress; 
@property (assign,nonatomic) BOOL addCreditCardIsAdsFundingSource; 
@required
-(BOOL)addCreditCardShowZipCode;
-(void)setAddCreditCardShowZipCode:(BOOL)arg1;
-(BOOL)addCreditCardShowFullName;
-(void)setAddCreditCardShowFullName:(BOOL)arg1;
-(BOOL)addCreditCardShowBillingAddress;
-(void)setAddCreditCardShowBillingAddress:(BOOL)arg1;
-(BOOL)addCreditCardIsAdsFundingSource;
-(void)setAddCreditCardIsAdsFundingSource:(BOOL)arg1;
-(void)setSelectedCreditCard:(id)arg1;
-(void)setSelectedPaypal:(id)arg1;
-(id<FBPaymentsCreditCard>)selectedCreditCard;
-(id<FBPaymentsPaypal>)selectedPaypal;
-(BOOL)paypalDisabled;
-(void)setPaypalDisabled:(BOOL)arg1;
-(BOOL)PUXDisabled;
-(void)setPUXDisabled:(BOOL)arg1;
-(BOOL)NUXDisabled;
-(void)setNUXDisabled:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBSelectPaymentMethodViewControllerDelegate>)delegate;
-(FBUserSession *)session;
-(void)setSession:(id)arg1;

@end


@protocol FBPaymentsCreditCard, FBPaymentsPaypal, FBSelectPaymentMethodViewControllerDelegate;
@class FBUserSession, NSMutableArray, FBExistingCreditCardsRequest, NSArray, FBPaymentsPaypal, NSString;

@interface FBSelectPaymentMethodViewController : UITableViewController <FBNetworkerRequestDelegate, FBSelectPaymentMethodViewController> {

	NSMutableArray* _tableRowDescriptions;
	FBExistingCreditCardsRequest* _downloadRequest;
	BOOL _showZipCode;
	BOOL _showFullName;
	BOOL _showBillingAddress;
	BOOL _isAdsFundingSource;
	BOOL _paypalDisabled;
	BOOL _PUXDisabled;
	BOOL _NUXDisabled;
	BOOL _userSelected;
	id<FBPaymentsCreditCard> _selectedCreditCard;
	id<FBPaymentsPaypal> _selectedPaypal;
	FBUserSession* _session;
	id<FBSelectPaymentMethodViewControllerDelegate> _delegate;
	NSArray* _creditCards;
	FBPaymentsPaypal* _paypalBA;
	NSString* _country;

}

@property (nonatomic,retain) NSArray * creditCards;                                                        //@synthesize creditCards=_creditCards - In the implementation block
@property (nonatomic,retain) FBPaymentsPaypal * paypalBA;                                                  //@synthesize paypalBA=_paypalBA - In the implementation block
@property (nonatomic,retain) NSString * country;                                                           //@synthesize country=_country - In the implementation block
@property (assign,nonatomic) BOOL userSelected;                                                            //@synthesize userSelected=_userSelected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
@property (nonatomic,retain) id<FBPaymentsCreditCard> selectedCreditCard;                                  //@synthesize selectedCreditCard=_selectedCreditCard - In the implementation block
@property (nonatomic,retain) id<FBPaymentsPaypal> selectedPaypal;                                          //@synthesize selectedPaypal=_selectedPaypal - In the implementation block
@property (assign,nonatomic,__weak) id<FBSelectPaymentMethodViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBUserSession * session;                                                      //@synthesize session=_session - In the implementation block
@property (assign,nonatomic) BOOL paypalDisabled;                                                          //@synthesize paypalDisabled=_paypalDisabled - In the implementation block
@property (assign,nonatomic) BOOL PUXDisabled;                                                             //@synthesize PUXDisabled=_PUXDisabled - In the implementation block
@property (assign,nonatomic) BOOL NUXDisabled;                                                             //@synthesize NUXDisabled=_NUXDisabled - In the implementation block
@property (assign,nonatomic) BOOL addCreditCardShowZipCode;                                                //@synthesize showZipCode=_showZipCode - In the implementation block
@property (assign,nonatomic) BOOL addCreditCardShowFullName;                                               //@synthesize showFullName=_showFullName - In the implementation block
@property (assign,nonatomic) BOOL addCreditCardShowBillingAddress;                                         //@synthesize showBillingAddress=_showBillingAddress - In the implementation block
@property (assign,nonatomic) BOOL addCreditCardIsAdsFundingSource;                                         //@synthesize isAdsFundingSource=_isAdsFundingSource - In the implementation block
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_showBackArrowButton;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)creditCardViewController:(id)arg1 didSaveCreditCard:(id)arg2 ;
-(BOOL)addCreditCardShowZipCode;
-(void)setAddCreditCardShowZipCode:(BOOL)arg1 ;
-(BOOL)addCreditCardShowFullName;
-(void)setAddCreditCardShowFullName:(BOOL)arg1 ;
-(BOOL)addCreditCardShowBillingAddress;
-(void)setAddCreditCardShowBillingAddress:(BOOL)arg1 ;
-(BOOL)addCreditCardIsAdsFundingSource;
-(void)setAddCreditCardIsAdsFundingSource:(BOOL)arg1 ;
-(void)paypalViewController:(id)arg1 didSave:(id)arg2 ;
-(void)setSelectedCreditCard:(id<FBPaymentsCreditCard>)arg1 ;
-(void)setSelectedPaypal:(id<FBPaymentsPaypal>)arg1 ;
-(void)_configureCell:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3 data:(id)arg4 ;
-(FBPaymentsPaypal *)paypalBA;
-(NSArray *)creditCards;
-(void)setPaypalBA:(FBPaymentsPaypal *)arg1 ;
-(void)setCreditCards:(NSArray *)arg1 ;
-(void)setUserSelected:(BOOL)arg1 ;
-(id<FBPaymentsCreditCard>)selectedCreditCard;
-(id<FBPaymentsPaypal>)selectedPaypal;
-(BOOL)paypalDisabled;
-(void)setPaypalDisabled:(BOOL)arg1 ;
-(BOOL)PUXDisabled;
-(void)setPUXDisabled:(BOOL)arg1 ;
-(BOOL)NUXDisabled;
-(void)setNUXDisabled:(BOOL)arg1 ;
-(BOOL)userSelected;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<FBSelectPaymentMethodViewControllerDelegate>)arg1 ;
-(id)init;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBSelectPaymentMethodViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(id)initWithStyle:(long long)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(CGSize)contentSizeForViewInPopover;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_reloadData;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)country;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(void)cancelAction:(id)arg1 ;
@end
