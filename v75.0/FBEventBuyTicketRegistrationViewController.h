/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBPaymentsNavigationDelegate.h>
#import <Facebook/FBModalWebFlowDelegate.h>
#import <Facebook/FBPaymentsNavigationDelegate.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <Facebook/FBEventTicketingRegistrationDataDelegate.h>
#import <Facebook/FBPaymentsExpandableItem.h>

@protocol FBNavigationCoordinator, FBPaymentsExpandableViewControllerExpandingDelegate, FBEventBuyTicketRegistrationViewControllerDelegate;
@class FBEventBuyTicketExternalPartnerModel, FBMemEventRegistrationSetting, FBMemEvent, FBUserSession, UITableView, CKComponentDataSource, FBComponentTableViewDataSource, FBEventTicketingPaymentFlowLauncher, FBKeyboardFocusedViewDisplayer, FBKeyboardObserver, NSMutableDictionary, FBEventTicketingRegistrationDataStore, FBScenePath, NSString;

@interface FBEventBuyTicketRegistrationViewController : UIViewController <FBComponentTableViewDataSourceCellConfigProvider, FBPaymentsNavigationDelegate, FBModalWebFlowDelegate, FBPaymentsNavigationDelegate, FBKeyboardObserverDelegate, FBEventTicketingRegistrationDataDelegate, FBPaymentsExpandableItem> {

	FBEventBuyTicketExternalPartnerModel* _model;
	FBMemEventRegistrationSetting* _registrationSetting;
	FBMemEvent* _event;
	FBUserSession* _session;
	UITableView* _tableView;
	CKComponentDataSource* _componentDataSource;
	FBComponentTableViewDataSource* _tableViewDataSource;
	FBEventTicketingPaymentFlowLauncher* _paymentsFlowLauncher;
	FBKeyboardFocusedViewDisplayer* _keyboardDisplayer;
	FBKeyboardObserver* _keyboardObserver;
	NSMutableDictionary* _regDataPerTier;
	FBEventTicketingRegistrationDataStore* _registrationDataStore;
	long long _continueButtonSectionIndex;
	BOOL _hasError;
	FBScenePath* _scenePath;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBPaymentsExpandableViewControllerExpandingDelegate> _expandingDelegate;
	id<FBEventBuyTicketRegistrationViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEventBuyTicketRegistrationViewControllerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsExpandableViewControllerExpandingDelegate> expandingDelegate;              //@synthesize expandingDelegate=_expandingDelegate - In the implementation block
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(void)modalWebFlowControllerDidComplete:(id)arg1 ;
-(id)newNavigationController;
-(double)preferredHeightWithWidth:(double)arg1 ;
-(id<FBPaymentsExpandableViewControllerExpandingDelegate>)expandingDelegate;
-(void)setExpandingDelegate:(id<FBPaymentsExpandableViewControllerExpandingDelegate>)arg1 ;
-(void)didSelectBackButton;
-(void)buildForm;
-(Items*)buildFormWithTitle:(id)arg1 inItems:(Items*)arg2 forSectionIndex:(int)arg3 formIndex:(int)arg4 itemIndex:(int)arg5 ;
-(void)didTapDisclaimer:(id)arg1 context:(id)arg2 ;
-(void)didPressContinueButton;
-(void)registrationDataHasError:(BOOL)arg1 ;
-(id)initWithModel:(id)arg1 event:(id)arg2 registrationSettings:(id)arg3 session:(id)arg4 paymentsFlowLauncher:(id)arg5 withPrefillRegistrationData:(id)arg6 ;
-(void)setDelegate:(id<FBEventBuyTicketRegistrationViewControllerDelegate>)arg1 ;
-(id<FBEventBuyTicketRegistrationViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)viewControllerForPresenting;
@end

