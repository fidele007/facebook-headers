/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBNewsFeedViewControllerProviding.h>
#import <Facebook/FBPagingViewDataSource.h>
#import <Facebook/FBPagingViewDelegate.h>
#import <Facebook/FBScrolling.h>
#import <Facebook/FBPagingContainerSwitcherViewDelegate.h>
#import <Facebook/FBPresentableViewController.h>
#import <Facebook/FBMovableNavigationBarScrolling.h>
#import <Facebook/FBMovableNavigationBarViewControllerDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBPagingContainerDataSource;
@class FBUserSession, FBPagingContainerView, FBPagingView, FBPagingContainerSwitcherView, UIView, FBContentInsetTracker, UIScrollView, NSMutableDictionary, NSArray, NSString;

@interface FBPagingContainerViewController : UIViewController <FBNewsFeedViewControllerProviding, FBPagingViewDataSource, FBPagingViewDelegate, FBScrolling, FBPagingContainerSwitcherViewDelegate, FBPresentableViewController, FBMovableNavigationBarScrolling, FBMovableNavigationBarViewControllerDelegate, UIScrollViewDelegate> {

	FBPagingContainerViewControllerConfig _config;
	FBUserSession* _session;
	id<FBPagingContainerDataSource> _dataSource;
	BOOL _old;
	FBPagingContainerView* _containerView;
	FBPagingView* _pagingView;
	FBPagingContainerSwitcherView* _switcherView;
	UIView* _headerView;
	FBContentInsetTracker* _feedContentInsetTracker;
	UIScrollView* _activeScrollView;
	NSMutableDictionary* _childrenViewControllers;
	NSMutableDictionary* _containerViews;
	long long _presentedChildIndex;
	long long _previousChildIndex;
	BOOL _prefetchReady;
	BOOL _scrollableHeaderViewIsManaged;
	BOOL _pageScrolling;
	BOOL _switcherTapTriggeredScroll;
	long long _updatingSwitcher;
	double _pinnedScrollViewContentOffsetY;
	UIView* _monitoringScrollView;
	BOOL _scrollAwayHeader;
	NSArray* _pages;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * pages;                                                  //@synthesize pages=_pages - In the implementation block
@property (nonatomic,readonly) id<FBPagingContainerDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(id)analyticsModule;
-(id)analyticsExtras;
-(id)analyticsSourceExtras;
-(BOOL)fb_handleTabReselection;
-(id)analyticsUUID;
-(id)analyticsPresentedViewController;
-(BOOL)alreadyOpenWithURL:(id)arg1 ;
-(BOOL)alreadyOpenWithViewController:(id)arg1 ;
-(unsigned long long)occlusionInfo;
-(id)currentViewController;
-(BOOL)isScrolledToTop;
-(id)scrollableHeaderView;
-(void)setScrollableHeaderViewIsManaged:(BOOL)arg1 ;
-(BOOL)fb_deferSwipeToOpenLeftNav;
-(BOOL)fb_swipeToOpenLeftNav;
-(void)fb_willResetToRoot;
-(BOOL)fb_hidesNavigationBarShadow;
-(BOOL)fb_hidesMinimizedTabBar;
-(id)newsFeedViewController;
-(void)fb_setTopLayoutGuideLength:(double)arg1 ;
-(id)pagingView:(id)arg1 viewForPageAtIndex:(unsigned long long)arg2 ;
-(void)pagingViewDidScroll:(id)arg1 pagingPosition:(double)arg2 ;
-(void)pagingViewDidEndScrollingAnimation:(id)arg1 ;
-(void)pagingViewDidChangePageIndex:(id)arg1 ;
-(BOOL)fb_enableChatBarButton;
-(id)switcherView;
-(id)pageForChildViewController:(id)arg1 ;
-(id)childViewControllerForIndex:(long long)arg1 ;
-(id)initWithSession:(id)arg1 dataSource:(id)arg2 config:(FBPagingContainerViewControllerConfig)arg3 ;
-(BOOL)fb_allowPinnedConversationsButton;
-(void)navigateToPageModel:(id)arg1 ;
-(unsigned long long)movableNavigationBarScrollAwayMode;
-(void)barSwitcherView:(id)arg1 segmentAtIndexWasTapped:(long long)arg2 withSelectionType:(int)arg3 ;
-(void)_prefetchCanBegin;
-(void)removeNonVisiblePagesFromMemory;
-(void)_removeChildForKeyIfAllowed:(id)arg1 ;
-(void)setPage:(id)arg1 forChildViewController:(id)arg2 ;
-(void)reloadSwitcherView;
-(void)loadPagingView;
-(id)_containerViewForPageAtIndex:(long long)arg1 ;
-(void)_willScrollToPageIndex:(long long)arg1 ;
-(void)_didScrollToPageIndex:(long long)arg1 updateSwitcher:(BOOL)arg2 ;
-(BOOL)switcherIsVisible;
-(void)updateChildrenTopLayoutGuideLengths:(BOOL)arg1 ;
-(double)topLayoutGuideLengthForChildren:(BOOL)arg1 ;
-(void)_navigateToPageAtIndex:(long long)arg1 ;
-(void)_allowScrollsToTop:(id)arg1 ;
-(id)mainScrollView:(id)arg1 ;
-(void)_pullToRefreshViewForViewController:(id)arg1 setEnabled:(BOOL)arg2 ;
-(void)removeTopInsetAdjustmentFromScrollView:(id)arg1 ;
-(void)applyTopInsetAdjustment:(double)arg1 toScrollView:(id)arg2 ;
-(void)_removeViewFromContainerWithIndex:(long long)arg1 ;
-(void)setActiveViewController:(id)arg1 scrollView:(id)arg2 ;
-(void)loadPageAtIndex:(long long)arg1 ;
-(void)_prefetchPageIfReadyAtIndex:(long long)arg1 ;
-(void)setContainer:(id)arg1 forChildViewController:(id)arg2 ;
-(id)containerForChildViewController:(id)arg1 ;
-(void)_reloadPagesWithCurrentPage:(id)arg1 ;
-(id)_switcherViewSegmentItems;
-(void)_willLoadNewChild;
-(void)movableNavigationBarViewController:(id)arg1 headerView:(id)arg2 headerViewMovedToOffset:(double)arg3 ;
-(id)contentInsetTrackerForScrollView:(id)arg1 ;
-(long long)indexOfPage:(id)arg1 ;
-(void)reloadPageModelsAndSwitcher;
-(id)analyticsContentDelegate;
-(void)dealloc;
-(void)reloadData;
-(id<FBPagingContainerDataSource>)dataSource;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(id)mainScrollView;
-(unsigned long long)numberOfPagesInPagingView:(id)arg1 ;
-(NSArray *)pages;
-(void)setPages:(NSArray *)arg1 ;
@end

