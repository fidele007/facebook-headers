/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBSearchResultsRuntimeContextProvider.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceEventListener.h>
#import <Facebook/FBComponentDataSourceScrollEventHandler.h>
#import <Facebook/FBComponentCellAppearanceEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBSearchResultsFilterBarControllerDelegate.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>
#import <Facebook/FBSearchResultsTransientViewStateHelperDelegate.h>
#import <Facebook/FBSearchPPSResultsDataBridgeDelegate.h>
#import <Facebook/FBSearchResultsControllerProtocol.h>
#import <Facebook/FBScrollableViewController.h>

@class NSString, FBSerpConfig, NSDictionary, UIScrollView, FBScenePath, FBSearchResultsTransientViewStateHelper, FBSearchResultsContext, FBUserSession, FBComponentTableViewDataSource, UITableView, FBDelegateForwarder, NSMutableArray, FBAnimationPerformanceLogger, FBLoadingIndicatorView, FBSearchRequestRetryErrorView, FBSearchResultsFilterBarController, FBSearchResultsAnnouncers, FBSearchPPSResultsDataBridge;

@interface FBSearchResultsPPSController : UIViewController <FBSearchResultsRuntimeContextProvider, FBComponentScrollEventListener, FBComponentTableViewDataSourceEventListener, FBComponentDataSourceScrollEventHandler, FBComponentCellAppearanceEventListener, FBComponentTableViewDataSourceCellConfigProvider, FBSearchResultsFilterBarControllerDelegate, FBAccessibilityInvalidationEventsListener, FBSearchResultsTransientViewStateHelperDelegate, FBSearchPPSResultsDataBridgeDelegate, FBSearchResultsControllerProtocol, FBScrollableViewController> {

	FBScenePath* _scenePath;
	FBSearchResultsTransientViewStateHelper* _viewStateHelper;
	FBSearchResultsContext* _searchResultsContext;
	FBUserSession* _session;
	Class _componentProvider;
	FBComponentTableViewDataSource* _tableViewDataSource;
	UITableView* _tableView;
	FBDelegateForwarder* _tableViewDelegateForwarder;
	NSMutableArray* _delegateForwarderObservers;
	FBAnimationPerformanceLogger* _apTracker;
	FBLoadingIndicatorView* _loadingIndicatorFooterView;
	FBSearchRequestRetryErrorView* _errorView;
	FBSearchResultsFilterBarController* _filterBarController;
	FBSearchResultsAnnouncers* _announcers;
	unsigned long long _searchType;
	NSString* _pendingImpressionSource;
	FBSearchPPSResultsDataBridge* _dataBridge;
	FBSerpConfig* _serpConfig;

}

@property (nonatomic,readonly) unsigned long long resultType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * resultsSessionID; 
@property (nonatomic,copy,readonly) NSString * verticalToLog; 
@property (nonatomic,copy,readonly) NSString * postSearchIntentLog; 
@property (nonatomic,copy,readonly) NSString * resultsSessionLoggingUnitId; 
@property (nonatomic,readonly) FBSerpConfig * serpConfig;                                //@synthesize serpConfig=_serpConfig - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule; 
@property (nonatomic,copy,readonly) NSDictionary * analyticsExtras; 
@property (nonatomic,readonly) UIScrollView * contentScrollView; 
-(BOOL)_showFilterBar;
-(NSString *)analyticsModule;
-(unsigned long long)enqueueChangeset:(const Changeset*)arg1 userInfo:(id)arg2 ;
-(void)componentWillAppearInViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)componentDidDisappearFromViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(NSDictionary *)analyticsExtras;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(void)didReceiveAccessibilityInvalidation;
-(NSString *)resultsSessionID;
-(NSString *)verticalToLog;
-(NSString *)postSearchIntentLog;
-(NSString *)resultsSessionLoggingUnitId;
-(void)viewStateHelperWillSetViewNeedsLayout:(id)arg1 ;
-(id)currentFilterTypeSets;
-(FBSerpConfig *)serpConfig;
-(void)createTableViewDataSourceIfNeeded;
-(void)updateViewState:(unsigned long long)arg1 ;
-(void)didReceiveInitalContentWithNeedleFilters:(id)arg1 isOfflineContent:(BOOL)arg2 ;
-(void)updateLoadingState:(BOOL)arg1 error:(id)arg2 ;
-(id)filteredSemantic;
-(void)loadHeadIfEmpty;
-(void)searchResultsFilterBarController:(id)arg1 didSelectAPIFilters:(id)arg2 ;
-(void)setNeedsToYieldImpressionWithSource:(id)arg1 ;
-(void)startEarlyLoad;
-(id)filtersTitle;
-(id)downloaderFilters;
-(unsigned long long)filtersColorScheme;
-(void)applyFilterChangeset:(id)arg1 expectedFilters:(id)arg2 ;
-(id)newFilterableControllerWithFiltersChangeset:(id)arg1 expectedFilters:(id)arg2 ;
-(void)_retryButtonDidTap:(id)arg1 ;
-(id)initWithSession:(id)arg1 serpConfig:(id)arg2 componentProvider:(Class)arg3 announcers:(id)arg4 scenePath:(id)arg5 ;
-(id)_createComponentContext;
-(void)setViewState:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewWillBeginDragging:(FBScrollViewState)arg1 ;
-(void)scrollViewDidEndDragging:(FBScrollViewState)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(FBScrollViewState)arg1 ;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(UIScrollView *)contentScrollView;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)resultType;
@end
