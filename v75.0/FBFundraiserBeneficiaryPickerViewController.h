/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <Facebook/FBFundraiserBeneficiaryPickerDelegate.h>
#import <Facebook/FBPresentableViewController.h>

@protocol FBFundraiserBeneficiarySearchConfiguration, FBFundraiserCreateFlowEventsHandler, FBFundraiserBeneficiaryPickerDelegate;
@class FBFundraiserLogger, FBUserSession, FBSearchBar, FBListViewController, FBFundraiserSearchBarListenerAnnouncer, FBKeyboardObserver, FBKeyboardTracker, FBContentInsetTracker, NSString;

@interface FBFundraiserBeneficiaryPickerViewController : UIViewController <UISearchBarDelegate, FBKeyboardObserverDelegate, FBFundraiserBeneficiaryPickerDelegate, FBPresentableViewController> {

	FBFundraiserLogger* _analyticsLogger;
	FBUserSession* _session;
	BOOL _isPresentedModally;
	FBSearchBar* _searchBar;
	FBListViewController* _beneficiaryPickerViewController;
	FBFundraiserSearchBarListenerAnnouncer* _searchTermAnnouncer;
	FBKeyboardObserver* _keyboardObserver;
	FBKeyboardTracker* _keyboardTracker;
	FBContentInsetTracker* _contentInsetTracker;
	id<FBFundraiserBeneficiarySearchConfiguration> _beneficiarySearchConfig;
	id<FBFundraiserCreateFlowEventsHandler> _createFlowDelegate;
	id<FBFundraiserBeneficiaryPickerDelegate> _beneficiaryPickerDelegate;

}

@property (assign,nonatomic,__weak) id<FBFundraiserCreateFlowEventsHandler> createFlowDelegate;                       //@synthesize createFlowDelegate=_createFlowDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBFundraiserBeneficiaryPickerDelegate> beneficiaryPickerDelegate;              //@synthesize beneficiaryPickerDelegate=_beneficiaryPickerDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_showBackArrowButton;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(SEL)fb_actionForBackArrowButton;
-(void)_didTapCancel;
-(void)_didTapBack;
-(void)didSelectBeneficiary:(id)arg1 fromSource:(long long)arg2 ;
-(id<FBFundraiserBeneficiaryPickerDelegate>)beneficiaryPickerDelegate;
-(id)initWithBeneficiarySearchConfig:(id)arg1 session:(id)arg2 analyticsLogger:(id)arg3 isPresentedModally:(BOOL)arg4 ;
-(id<FBFundraiserCreateFlowEventsHandler>)createFlowDelegate;
-(void)setCreateFlowDelegate:(id<FBFundraiserCreateFlowEventsHandler>)arg1 ;
-(void)setBeneficiaryPickerDelegate:(id<FBFundraiserBeneficiaryPickerDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
@end

