/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBNewsFeedViewControllerProviding.h>
#import <Facebook/FBEmbeddedTab.h>
#import <Facebook/FBListViewStateManagerDelegate.h>
#import <Facebook/FBComponentCollectionViewDataSourceCellConfigProvider.h>
#import <Facebook/FBComponentDataSourceScrollEventHandler.h>
#import <Facebook/FBScrollPositionRestoringScrollViewRestorationIndexPathProvider.h>
#import <Facebook/FBListViewNavigationSearchBarUpdater.h>
#import <Facebook/FBListViewControllerActionHandler.h>
#import <Facebook/FBMovableNavigationBarScrolling.h>

@protocol FBGraphQLService, FBListViewImpressionControllerProtocol;
@class FBListViewControllerConfiguration, FBSectionComponentContext, FBListViewControllerActionHandlerAnnouncer, FBStreamListView, FBListViewStateManager, FBComponentCollectionViewDataSource, UICollectionViewFlowLayout, FBComponentCollectionViewFlowLayoutDelegate, FBSectionComponentTrackerWrapper, FBUserSession, FBListViewSearchBarConfiguration, FBListViewLayoutListenerAnnouncer, UIColor, UIView, FBScrollPositionRestoringCollectionViewControllerIndexPathAdapter, FBScrollPositionRestoringCollectionViewController, FBCollectionViewUpdateIndexPathTracker, FBComponentDataSourceWorkingRangeController, FBScenePath, FBListViewControllerAnalyticsLogger, FBListLogger, FBListViewControllerAnalyticsConfiguration, FBListViewKitScrollEventListenerAnnouncer, FBListViewControllerDataSourceUpdateListenerAnnouncer, FBSectionComponentScrollManager, NSString, UIScrollView;

@interface FBListViewController : UIViewController <FBNewsFeedViewControllerProviding, FBEmbeddedTab, FBListViewStateManagerDelegate, FBComponentCollectionViewDataSourceCellConfigProvider, FBComponentDataSourceScrollEventHandler, FBScrollPositionRestoringScrollViewRestorationIndexPathProvider, FBListViewNavigationSearchBarUpdater, FBListViewControllerActionHandler, FBMovableNavigationBarScrolling> {

	FBListViewControllerConfiguration* _configuration;
	/*^block*/id _sectionComponentTrackerWrapperFactory;
	FBSectionComponentContext* _sectionComponentContext;
	FBListViewControllerActionHandlerAnnouncer* _actionHandlerAnnouncer;
	FBStreamListView* _listView;
	FBListViewStateManager* _viewStateManager;
	FBComponentCollectionViewDataSource* _dataSource;
	UICollectionViewFlowLayout* _flowLayout;
	BOOL _isSectionComponentCollectionViewFlowLayout;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	id<FBGraphQLService> _graphQLService;
	FBSectionComponentTrackerWrapper* _sectionComponentTrackerWrapper;
	FBUserSession* _session;
	FBListViewSearchBarConfiguration* _searchBarConfiguration;
	FBListViewLayoutListenerAnnouncer* _layoutAnnouncer;
	UIColor* _backgroundColor;
	UIView* _stickyHeaderView;
	FBScrollPositionRestoringCollectionViewControllerIndexPathAdapter* _scrollPositionRestoringCollectionViewControllerIndexPathAdapter;
	FBScrollPositionRestoringCollectionViewController* _scrollPositionRestoringCollectionViewController;
	FBCollectionViewUpdateIndexPathTracker* _collectionViewUpdateIndexPathTracker;
	FBComponentDataSourceWorkingRangeController* _workingRangeController;
	FBScenePath* _scenePath;
	BOOL _hasReceivedData;
	unsigned long long _dataSourceUpdatesCount;
	BOOL _isUsingExternalLogger;
	FBListViewControllerAnalyticsLogger* _analyticsLogger;
	id<FBListViewImpressionControllerProtocol> _impressionController;
	FBListLogger* _logger;
	BOOL _hasPreviouslyMountedHierarchy;
	FBListViewControllerAnalyticsConfiguration* _analyticsConfiguration;
	FBListViewKitScrollEventListenerAnnouncer* _scrollEventAnnouncer;
	FBListViewControllerDataSourceUpdateListenerAnnouncer* _dataSourceUpdateAnnouncer;
	double _itemWidth;
	FBSectionComponentScrollManager* _scrollManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * secondaryStickyHeaderView; 
-(id)analyticsModule;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 userInfo:(id)arg3 ;
-(void)addScrollEventListener:(id)arg1 ;
-(id)analyticsExtras;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_useDefaultSearchText;
-(id)fb_searchContext;
-(void)removeScrollEventListener:(id)arg1 ;
-(void)addComponentScrollEventListener:(id)arg1 ;
-(id)fb_navBarTintColor;
-(BOOL)fb_hidesNavigationBar;
-(BOOL)fb_showBackArrowButton;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 componentContextFactory:(/*^block*/id)arg3 sectionComponentFactory:(/*^block*/id)arg4 ;
-(void)refreshData;
-(void)redrawView;
-(UIView *)secondaryStickyHeaderView;
-(BOOL)fb_hideNavBarRightButton;
-(void)streamListViewDidScrollToBottom:(id)arg1 ;
-(void)streamListViewDidScrollToTop:(id)arg1 ;
-(void)streamListViewDidScroll:(id)arg1 ;
-(void)streamListViewDidTriggerPullToRefresh:(id)arg1 ;
-(BOOL)fb_hidesTabBar;
-(long long)fb_cardedLayoutStyle;
-(id)indexPathForScrollPositionRestorationInScrollView:(id)arg1 ;
-(void)updateSearchBarWithSearchBarConfiguration:(id)arg1 ;
-(FBComponentCollectionViewDataSourceCellConfig)configForCollectionCellInDataSource:(id)arg1 ;
-(id)fb_navBarTitleColor;
-(id)newsFeedViewController;
-(id)fb_navBarButtonsTintColor;
-(BOOL)fb_enableChatBarButton;
-(id)initWithSession:(id)arg1 prefetchingContext:(id)arg2 ;
-(void)setupViewStateManager;
-(id)fb_searchTitleContext;
-(void)updateListViewControllerConfiguration:(id)arg1 ;
-(void)removeComponentScrollEventListener:(id)arg1 ;
-(id)initWithSession:(id)arg1 logger:(id)arg2 configuration:(id)arg3 componentContextFactory:(/*^block*/id)arg4 sectionComponentFactory:(/*^block*/id)arg5 ;
-(void)addDataSourceUpdateListener:(id)arg1 ;
-(id)stickyHeaderView;
-(id)dataSourceUpdateAnnouncer;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 componentContextFactory:(/*^block*/id)arg3 sectionComponentFactory:(/*^block*/id)arg4 streamListView:(id)arg5 flowLayout:(id)arg6 itemWidth:(double)arg7 ;
-(void)updateSectionComponentProviderBlock:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 componentContextFactory:(/*^block*/id)arg3 sectionComponentFactory:(/*^block*/id)arg4 streamListView:(id)arg5 flowLayout:(id)arg6 itemWidth:(double)arg7 logger:(id)arg8 ;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 sectionComponentTrackerFactory:(const /*^block*/id*)arg3 prefetchingContext:(id)arg4 streamListView:(id)arg5 flowLayout:(id)arg6 itemWidth:(double)arg7 logger:(id)arg8 ;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 sectionComponentTrackerFactory:(const /*^block*/id*)arg3 prefetchingContext:(id)arg4 ;
-(void)setupAnalytics;
-(void)_didForeground;
-(void)_didBackground;
-(void)updateSectionComponentContext;
-(BOOL)shouldAdjustForContentInsets;
-(BOOL)shouldAdjustForContentWidth;
-(void)recalculateForSize:(CGSize)arg1 ;
-(void)viewStateManagerDidRequestReload:(id)arg1 ;
-(unsigned long long)movableNavigationBarScrollAwayMode;
-(void)dealloc;
-(BOOL)scrollViewShouldScrollToTop:(id)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(UIScrollView *)scrollView;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)dismiss;
-(id)logger;
-(id)listView;
@end

