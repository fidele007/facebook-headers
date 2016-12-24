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
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UISearchDisplayDelegate.h>

@protocol FBPhoneCountryCodesPickerViewControllerDelegate, FBPhoneNumberMetadata;
@class UISearchDisplayController, UITableView, NSMutableArray, NSArray, UISearchBar, NSString;

@interface FBPhoneCountryCodesPickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate> {

	UISearchDisplayController* _searchController;
	UITableView* _tableView;
	NSMutableArray* _commonCountries;
	NSArray* _otherCountries;
	NSMutableArray* _searchCountries;
	UISearchBar* _searchBar;
	BOOL _showCallingCodes;
	id<FBPhoneCountryCodesPickerViewControllerDelegate> _delegate;
	id<FBPhoneNumberMetadata> _phoneNumberMetadata;

}

@property (nonatomic,retain) id<FBPhoneNumberMetadata> phoneNumberMetadata;                                    //@synthesize phoneNumberMetadata=_phoneNumberMetadata - In the implementation block
@property (assign,nonatomic,__weak) id<FBPhoneCountryCodesPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(id)initWithDefaultCountry:(id)arg1 ;
-(id)initWithPhoneNumberMetadata:(id)arg1 ;
-(id)sortByCountryName:(id)arg1 ;
-(void)setPhoneNumberMetadata:(id<FBPhoneNumberMetadata>)arg1 ;
-(void)_initializeCountryInfoArrays:(id)arg1 ;
-(id)getDisplayInfoForCode:(id)arg1 ;
-(void)_unloadViews;
-(void)_searchForCountry:(id)arg1 inCountries:(id)arg2 ;
-(id<FBPhoneNumberMetadata>)phoneNumberMetadata;
-(void)setDelegate:(id<FBPhoneCountryCodesPickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id<FBPhoneCountryCodesPickerViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)searchDisplayControllerDidEndSearch:(id)arg1 ;
-(void)searchDisplayControllerWillBeginSearch:(id)arg1 ;
-(void)searchDisplayControllerWillEndSearch:(id)arg1 ;
-(BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2 ;
-(void)_cancel;
@end

