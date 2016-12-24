/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBSearchResultsFiltersViewDelegate.h>
#import <Facebook/FBSearchResultsDownloaderDelegate.h>
#import <Facebook/FBSearchResultsFiltersTableViewCellDelegate.h>
#import <Facebook/FBSearchResultsFiltersPriceSelectorCellDelegate.h>

@protocol FBSearchResultsFilterableControllerProtocol;
@class FBSearchMultiResultsView, FBSearchResultsFiltersView, NSArray, FBUserSession, FBScenePath, FBGraphSearchResultsDownloader, FBSearchResultsActivityListenerAnnouncer, UIActivityIndicatorView, NSString;

@interface FBSearchResultsFiltersViewController : UIViewController <UIGestureRecognizerDelegate, FBSearchResultsFiltersViewDelegate, FBSearchResultsDownloaderDelegate, FBSearchResultsFiltersTableViewCellDelegate, FBSearchResultsFiltersPriceSelectorCellDelegate> {

	FBSearchMultiResultsView* _resultsView;
	FBSearchResultsFiltersView* _filtersView;
	id<FBSearchResultsFilterableControllerProtocol> _filterableController;
	NSArray* _filterTypeSets;
	NSArray* _filterViewModels;
	FBUserSession* _userSession;
	FBScenePath* _scenePath;
	long long _expandedSection;
	FBGraphSearchResultsDownloader* _downloader;
	FBSearchResultsActivityListenerAnnouncer* _announcer;
	UIActivityIndicatorView* _spinner;
	unsigned long long _activeColorScheme;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithResultsView:(id)arg1 filterableViewController:(id)arg2 initialExpandedSectionIndex:(long long)arg3 userSession:(id)arg4 scenePath:(id)arg5 announcer:(id)arg6 ;
-(void)downloader:(id)arg1 didLoadConnection:(id)arg2 requestStatus:(id)arg3 isCachedResponse:(BOOL)arg4 isHeadRequest:(BOOL)arg5 ;
-(void)downloader:(id)arg1 didFailWithError:(id)arg2 ;
-(id)_appliedFiltersChangeSet;
-(void)_didTapOnBackground:(id)arg1 ;
-(void)_reloadModel;
-(id)_appliedFiltersDictionary;
-(id)_iconImageForName:(id)arg1 mode:(BOOL)arg2 ;
-(void)_collapseOldSectionAndExpandNewSection:(long long)arg1 tableView:(id)arg2 ;
-(void)_downloaderDidCompleteRequest:(id)arg1 ;
-(void)_showFiltersView;
-(id)_filtersViewModelFromFiltersTypeSets:(id)arg1 ;
-(void)filtersViewDidApplyFilters:(id)arg1 ;
-(void)filtersViewDidClearFilters:(id)arg1 ;
-(void)didToggleSwitchOnCell:(id)arg1 toState:(BOOL)arg2 ;
-(void)didTapPriceSelectorButtonOnCell:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
