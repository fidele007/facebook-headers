/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBSearchResultsFiltersFIGViewDelegate.h>
#import <Facebook/FBSearchResultsFiltersTableViewCellDelegate.h>
#import <Facebook/FBSearchResultsFiltersPriceSelectorCellDelegate.h>

@protocol FBNearbyPlacesAdvancedFiltersViewControllerDelegate;
@class FBSearchResultsFiltersFIGView, FBNearbyPlacesAdvancedFiltersModelController, NSArray, FBUserSession, FBNearbyPlacesLoggerHelper, UIActivityIndicatorView, NSString;

@interface FBNearbyPlacesAdvancedFiltersViewController : UIViewController <UIGestureRecognizerDelegate, FBSearchResultsFiltersFIGViewDelegate, FBSearchResultsFiltersTableViewCellDelegate, FBSearchResultsFiltersPriceSelectorCellDelegate> {

	FBSearchResultsFiltersFIGView* _filtersView;
	FBNearbyPlacesAdvancedFiltersModelController* _filtersModelController;
	NSArray* _tableViewModels;
	FBUserSession* _userSession;
	FBNearbyPlacesLoggerHelper* _nearbyPlacesLoggerHelper;
	long long _expandedSection;
	UIActivityIndicatorView* _spinner;
	NSString* _focusedFilterSection;
	unsigned long long _scope;
	id<FBNearbyPlacesAdvancedFiltersViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNearbyPlacesAdvancedFiltersViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_filterTypeSet;
-(void)_didTapOnBackground:(id)arg1 ;
-(void)_collapseOldSectionAndExpandNewSection:(long long)arg1 tableView:(id)arg2 ;
-(void)_showFiltersView;
-(void)didToggleSwitchOnCell:(id)arg1 toState:(BOOL)arg2 ;
-(void)didTapPriceSelectorButtonOnCell:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_initForFocusedFilterSection:(id)arg1 scope:(unsigned long long)arg2 withSession:(id)arg3 filtersModelController:(id)arg4 loggerHelper:(id)arg5 delegate:(id)arg6 ;
-(void)_reloadTableViewModelsForFilterTypeSet:(id)arg1 ;
-(id)_defaultFilterTypeSet;
-(id)_buildHeaderCell:(id)arg1 ;
-(id)_buildDetailCell:(id)arg1 forRow:(long long)arg2 ;
-(BOOL)_handleTapOnHeaderCell:(id)arg1 forSection:(long long)arg2 ;
-(BOOL)_handleTapOnDetailCell:(id)arg1 forRow:(long long)arg2 ;
-(id)_filtersViewModelFromFiltersTypeSet:(id)arg1 ;
-(id)_buildToggleSwitchHeaderCell:(id)arg1 ;
-(id)_buildSingleSelectHeaderCell:(id)arg1 ;
-(id)_buildMultiSelectHeaderCell:(id)arg1 ;
-(id)_buildExpandableHeaderCell:(id)arg1 ;
-(id)_buildHeaderSubtextFromModel:(id)arg1 withSelectedDescription:(id)arg2 ;
-(id)_buildFilterCell;
-(BOOL)_handleTapOnCollapsibleHeader:(id)arg1 forSection:(long long)arg2 ;
-(id)_buildSingleSelectDetailCell:(id)arg1 forRow:(long long)arg2 ;
-(id)_buildMultiSelectDetailCell:(id)arg1 forRow:(long long)arg2 ;
-(id)_buildMultiButtonSelectDetailCell:(id)arg1 forRow:(long long)arg2 ;
-(void)_handleTapOnSingleOrNoneSelect:(id)arg1 forRow:(long long)arg2 ;
-(void)filtersViewDidTapConfirmFilters:(id)arg1 ;
-(void)filtersViewDidTapResetFilters:(id)arg1 ;
-(void)filtersViewDidTapCancel:(id)arg1 ;
-(id)initForAllFilterSectionsWithSession:(id)arg1 filtersModelController:(id)arg2 loggerHelper:(id)arg3 delegate:(id)arg4 ;
-(id)initForExtrasFilterSectionsWithSession:(id)arg1 filtersModelController:(id)arg2 loggerHelper:(id)arg3 delegate:(id)arg4 ;
-(id)initForFocusedFilterSection:(id)arg1 withSession:(id)arg2 filtersModelController:(id)arg3 loggerHelper:(id)arg4 delegate:(id)arg5 ;
-(void)setDelegate:(id<FBNearbyPlacesAdvancedFiltersViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBNearbyPlacesAdvancedFiltersViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

