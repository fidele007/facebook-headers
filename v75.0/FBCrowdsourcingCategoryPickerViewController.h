/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <Facebook/FBCrowdsourcingCategoryPickerMainDelegate.h>
#import <Facebook/FBCrowdsourcingCategoryPickerSearchResultsDelegate.h>
#import <Facebook/FBCrowdsourcingCategoryPickerChildCategoriesDelegate.h>

@protocol FBServiceTransactionMutating, FBCrowdsourcingCategoryPickerViewControllerDelegate;
@class FBUserSession, NSString, FBSearchBar, UIActivityIndicatorView, UIView, UITableView, FBCrowdsourcingCategoryPickerMainDataSource, FBCrowdsourcingCategoryPickerSearchResultsDataSource, FBCrowdsourcingCategoryPickerChildCategoriesDataSource, FBMemEntityCategory, CALayer;

@interface FBCrowdsourcingCategoryPickerViewController : UIViewController <UISearchBarDelegate, FBCrowdsourcingCategoryPickerMainDelegate, FBCrowdsourcingCategoryPickerSearchResultsDelegate, FBCrowdsourcingCategoryPickerChildCategoriesDelegate> {

	FBUserSession* _session;
	BOOL _hasLoggedNoResults;
	BOOL _hasLoggedEndpointImpression;
	NSString* _previousSearchText;
	FBSearchBar* _searchBar;
	UIActivityIndicatorView* _loadingIndicatorView;
	UIView* _loadingIndicator;
	UITableView* _mainTableView;
	FBCrowdsourcingCategoryPickerMainDataSource* _mainSource;
	FBCrowdsourcingCategoryPickerSearchResultsDataSource* _searchResultsSource;
	FBCrowdsourcingCategoryPickerChildCategoriesDataSource* _childCategoriesSource;
	UITableView* _searchResultsTableView;
	UITableView* _childCategoriesTableView;
	UIView* _currentView;
	UIView* _nullStateView;
	id<FBServiceTransactionMutating> _token;
	unsigned long long _style;
	FBMemEntityCategory* _parentCategory;
	FBCrowdsourcingCategoryPickerViewController* _childCategoryPicker;
	CALayer* _bottomSearchBarSeparator;
	id<FBCrowdsourcingCategoryPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCrowdsourcingCategoryPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_showBackArrowButton;
-(void)_didTapCancel;
-(void)_didTapBack;
-(id)initWithSession:(id)arg1 style:(unsigned long long)arg2 ;
-(void)childCategoriesTableViewDidSelectCategory:(id)arg1 ;
-(void)childCategoriesTableViewDidExpandCategory:(id)arg1 ;
-(void)childCategoriesTableViewWillBeginDragging;
-(void)mainTableViewDidExpandCategory:(id)arg1 ;
-(void)mainTableViewDidSelectCategoryFromHierarchy:(id)arg1 ;
-(void)mainTableViewWillBeginDragging;
-(void)searchResultsTableViewDidSelectCategory:(id)arg1 ;
-(id)initWithSession:(id)arg1 style:(unsigned long long)arg2 parentCategory:(id)arg3 ;
-(void)_fetchSuggestedCategories;
-(void)_showView:(id)arg1 ;
-(void)_fetchChildCategories;
-(BOOL)_isShowingNoResultsView;
-(void)_fetchSearchResults;
-(void)_handleSearchResultsResponse:(id)arg1 ;
-(void)_handleSuggestionsResponse:(id)arg1 ;
-(void)_handleChildCategoriesResponse:(id)arg1 ;
-(void)searchResultsTableViewWillBeginDragging;
-(void)setDelegate:(id<FBCrowdsourcingCategoryPickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCrowdsourcingCategoryPickerViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
@end

