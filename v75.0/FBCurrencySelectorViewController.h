/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UIAlertViewDelegate.h>

@protocol FBCurrencySelectorViewControllerDelegate;
@class UITableView, FBPaymentsCurrency, NSArray, FBCurrencySelectorConfiguration, NSString;

@interface FBCurrencySelectorViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate> {

	UITableView* _tableView;
	id _selectionAlertView;
	FBPaymentsCurrency* _defaultSelectedCurrency;
	NSArray* _allCurrencies;
	FBPaymentsCurrency* _selectedCurrency;
	FBCurrencySelectorConfiguration* _configuration;
	id<FBCurrencySelectorViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCurrencySelectorViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_showBackArrowButton;
-(void)_didTapCancel;
-(id)initWithDefaultSelectedCurrency:(id)arg1 configuration:(id)arg2 ;
-(void)_showSelectionAlertForCurrency:(id)arg1 ;
-(void)setDelegate:(id<FBCurrencySelectorViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBCurrencySelectorViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

