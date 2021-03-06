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
#import <Facebook/FBFundraiserBeneficiaryPickerDelegate.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <Facebook/FBPresentableViewController.h>

@protocol FBFundraiserBeneficiaryPickerDelegate;
@class FBFundraiserCreateFlowToolbox, UISearchBar, FBMemCharityCategoryTextWrapper, FBListViewController, FBFundraiserSearchBarListenerAnnouncer, FBKeyboardObserver, FBKeyboardTracker, FBContentInsetTracker, NSString;

@interface FBFundraiserCharityPickerViewController : UIViewController <UISearchBarDelegate, FBFundraiserBeneficiaryPickerDelegate, FBKeyboardObserverDelegate, FBPresentableViewController> {

	FBFundraiserCreateFlowToolbox* _toolbox;
	UISearchBar* _searchBar;
	FBMemCharityCategoryTextWrapper* _currentCategoryFilter;
	FBListViewController* _charitiesViewController;
	FBListViewController* _categoriesViewController;
	FBListViewController* _currentViewController;
	FBFundraiserSearchBarListenerAnnouncer* _searchTermAnnouncer;
	FBKeyboardObserver* _keyboardObserver;
	FBKeyboardTracker* _keyboardTracker;
	FBContentInsetTracker* _contentInsetTracker;
	id<FBFundraiserBeneficiaryPickerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFundraiserBeneficiaryPickerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(unsigned long long)preferredPresentationMethod;
-(unsigned long long)preferredPresentationOptions;
-(id)initWithConfig:(/*^block*/id)arg1 toolbox:(id)arg2 ;
-(void)_didTapCancel;
-(void)_setNavigationAndStatusBarHidden:(BOOL)arg1 searchBar:(id)arg2 ;
-(void)didSelectBeneficiary:(id)arg1 fromSource:(long long)arg2 ;
-(void)didSelectCategory:(id)arg1 ;
-(void)_transitionFromViewController:(id)arg1 toViewController:(id)arg2 ;
-(void)setCurrentViewController:(id)arg1 ;
-(void)_setCategoryFilter:(id)arg1 ;
-(id)_setAttributesFromCharity:(id)arg1 ;
-(id)_charityPickerState;
-(void)setDelegate:(id<FBFundraiserBeneficiaryPickerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBFundraiserBeneficiaryPickerDelegate>)delegate;
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
-(BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
@end

