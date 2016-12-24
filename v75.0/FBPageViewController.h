/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBEmbeddedTabContainerViewDelegate.h>
#import <Facebook/FBEmbeddedTabControllerDelegate.h>
#import <Facebook/FBNuxBannerControllerDelegate.h>
#import <Facebook/FBPageHeaderDataSourceDelegate.h>
#import <Facebook/FBPageServiceStartHelper.h>
#import <Facebook/FBPageTabFootersManagerDelegate.h>
#import <Facebook/FBPublishingCompletionEventListener.h>
#import <Facebook/FBPullToRefreshViewDelegate.h>
#import <Facebook/FBScenePathHolding.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <Facebook/FBPageAdminBarControllerDelegate.h>
#import <Facebook/FBCanAcceptPageTabBarProtocol.h>
#import <Facebook/FBPageDeferredJobsNotifying.h>
#import <Facebook/FBTimelineHeaderDownloaderDelegate.h>

@protocol FBScrollingContentViewControllerListener, FBNuxBannerViewController, FBPageContentViewControllerDelegate;
@class FBConsistentLookasideCacheObservationHandle, FBMemPage, NSArray, FBMemPageHeaderCardController, FBPageHeaderDataSource, FBPageSession, FBPageTimelineHeaderDownloader, FBPublishingCompletionEventForwarder, FBScenePath, FBScenePathContext, FBPageTabFactory, FBIntent, FBEmbeddedTabContainerView, UICollectionView, UIViewController, FBPullToRefreshView, FBFullscreenSpinnerController, FBMemPageActionBarCardController, FBEmbeddedTabController, FBPageTabManager, FBPageTabBar, FBTransientViewStateManager, FBPageTabAdminSettingsView, FBPageBadgeCountManager, NSPointerArray, FBPageAdminBarController, FBFeedToolbox, FBPageTabFootersManager, UIView, FBPageTabFooterViewController, FBPageDeeplinkURLHandler, FBPageReactionDataPrefetcher, FBPageNavigationBarActionEventsListenerAnnouncer, NSString;

@interface FBPageViewController : UIViewController <FBComposerFlowDelegate, FBEmbeddedTabContainerViewDelegate, FBEmbeddedTabControllerDelegate, FBNuxBannerControllerDelegate, FBPageHeaderDataSourceDelegate, FBPageServiceStartHelper, FBPageTabFootersManagerDelegate, FBPublishingCompletionEventListener, FBPullToRefreshViewDelegate, FBScenePathHolding, UICollectionViewDataSource, UICollectionViewDelegate, UITableViewDelegate, UITextViewDelegate, FBPageAdminBarControllerDelegate, FBCanAcceptPageTabBarProtocol, FBPageDeferredJobsNotifying, FBTimelineHeaderDownloaderDelegate> {

	FBConsistentLookasideCacheObservationHandle* _clcObserver;
	FBMemPage* _page;
	NSArray* _tabActions;
	FBMemPage* _pageBeforeRedirect;
	FBMemPageHeaderCardController* _headerCardController;
	FBPageHeaderDataSource* _headerDataSource;
	FBPageSession* _pageSession;
	FBPageTimelineHeaderDownloader* _headerDownloader;
	FBPublishingCompletionEventForwarder* _publishingEventForwarder;
	FBScenePath* _scenePath;
	FBScenePathContext* _scenePathContext;
	unsigned long long _syncState;
	FBPageTabFactory* _tabFactory;
	id<FBScrollingContentViewControllerListener> _scrollingContentListener;
	FBIntent* _registeredDeeplinkIntentAfterTabReload;
	FBEmbeddedTabContainerView* _embeddedTabContainerView;
	UICollectionView* _headerFloatingView;
	UIViewController*<FBNuxBannerViewController> _bannerViewController;
	FBPullToRefreshView* _pullToRefreshView;
	FBFullscreenSpinnerController* _fullScreenSpinnerController;
	FBMemPageActionBarCardController* _actionBarController;
	BOOL _firstCardDidLoad;
	BOOL _firstStoryDidAppear;
	BOOL _isPageAdmin;
	BOOL _shouldShowTabs;
	BOOL _hasDisplayedPageView;
	BOOL _hasCheckedPageRedirection;
	BOOL _pageHasBeenRedirected;
	BOOL _hasLoggedOnce;
	BOOL _shouldShowTabCTA;
	BOOL _hasExecutedDeferredJobsAfterInitialLoad;
	FBEmbeddedTabController* _embeddedTabController;
	FBPageTabManager* _tabManager;
	FBPageTabBar* _adminTabBar;
	FBTransientViewStateManager* _viewStateManager;
	FBPageTabAdminSettingsView* _adminSettingsView;
	FBPageBadgeCountManager* _badgeCountManager;
	NSPointerArray* _configureOutsourcedCardControllers;
	FBPageAdminBarController* _adminBarController;
	FBFeedToolbox* _toolbox;
	FBPageTabFootersManager* _tabFootersManager;
	UIView* _currentTabFooterView;
	FBPageTabFooterViewController* _currentTabFooterViewController;
	double _currentTabFooterViewVisibleHeight;
	FBPageDeeplinkURLHandler* _deeplinkURLHandler;
	BOOL _hasCachedHeader;
	FBPageReactionDataPrefetcher* _reactionDataPrefetcher;
	id<FBPageContentViewControllerDelegate> _delegate;
	FBPageNavigationBarActionEventsListenerAnnouncer* _pageNavigationBarActionEventsListenerAnnouncer;

}

@property (nonatomic,retain) UIViewController*<FBNuxBannerViewController> bannerViewController;                                              //@synthesize bannerViewController=_bannerViewController - In the implementation block
@property (nonatomic,retain) FBPageReactionDataPrefetcher * reactionDataPrefetcher;                                                          //@synthesize reactionDataPrefetcher=_reactionDataPrefetcher - In the implementation block
@property (assign,nonatomic) BOOL hasCachedHeader;                                                                                           //@synthesize hasCachedHeader=_hasCachedHeader - In the implementation block
@property (assign,nonatomic,__weak) id<FBPageContentViewControllerDelegate> delegate;                                                        //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBPageNavigationBarActionEventsListenerAnnouncer * pageNavigationBarActionEventsListenerAnnouncer;              //@synthesize pageNavigationBarActionEventsListenerAnnouncer=_pageNavigationBarActionEventsListenerAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)pullToRefreshViewDidTriggerRefresh:(id)arg1 ;
-(id)fb_navigationCoordinator;
-(void)composerCompletedWithResult:(id)arg1 ;
-(id)timelineHeaderGraphQLQueriesForTargetID:(id)arg1 indexOfQueryForConsistentValuesUpdate:(out unsigned long long*)arg2 ;
-(void)headerDownloader:(id)arg1 didReceiveParsedResponse:(id)arg2 withDate:(id)arg3 isLastResponse:(BOOL)arg4 ;
-(void)headerDownloaderDidFailParsingNetworkResponse:(id)arg1 ;
-(void)headerDownloaderDidFinishNetworkRequest:(id)arg1 ;
-(void)_handleDidPinPostNotification;
-(void)_handleDidDeletePostNotification;
-(void)showActivityController;
-(void)cleanUpPublicationHandling;
-(void)publicationCompletedThroughTerminalFailureOfPublication:(id)arg1 withError:(id)arg2 ;
-(void)publicationCompletedThroughSuccessOfPublication:(id)arg1 withResponse:(id)arg2 ;
-(void)publicationCompletedThroughCancellationOfPublication:(id)arg1 ;
-(UIViewController*<FBNuxBannerViewController>)bannerViewController;
-(void)_layoutBannerViewWithController:(id)arg1 ;
-(void)_handleAddServicesTabNotification:(id)arg1 ;
-(void)setBannerViewController:(UIViewController*<FBNuxBannerViewController>)arg1 ;
-(id)containingViewControllerForDataSource:(id)arg1 ;
-(id)composerFlowDelegateForDataSource:(id)arg1 ;
-(void)headerSourceDidUpdatePage:(id)arg1 ;
-(void)nuxBannerControllerDidDismissBanner:(id)arg1 ;
-(void)setAdminTabBar:(id)arg1 ;
-(id)initWithPage:(id)arg1 pageSession:(id)arg2 headerDownloader:(id)arg3 headerCardController:(id)arg4 reactionDataPrefetcher:(id)arg5 scenePathContext:(id)arg6 pageBeforeRedirect:(id)arg7 scrollingContentListener:(id)arg8 pageDeeplinkURLParamsConfig:(id)arg9 ;
-(void)setHasCachedHeader:(BOOL)arg1 ;
-(void)setPageNavigationBarActionEventsListenerAnnouncer:(FBPageNavigationBarActionEventsListenerAnnouncer *)arg1 ;
-(id)currentTabType;
-(void)didTapBackButton;
-(id)_createUserInfoForReaction;
-(UIEdgeInsets)_additionalInsetsForCards;
-(UIEdgeInsets)_insetsForContent;
-(double)_minimumContentViewBottomInset;
-(BOOL)_shouldUseCardedDesign;
-(long long)_initialTabIndex;
-(id)_tabBarAuxView;
-(void)_updateScrollViewForTab;
-(void)_prepareTabFooterSwitchToIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(void)_handleDidCancelAppointmentNotification:(id)arg1 ;
-(void)_handleDidCreateCTA;
-(void)_handleDidCheckoutSuccessInComponentFlowNotification;
-(void)_adjustTabFooterViewFrameWithCurrentScrollView:(id)arg1 ;
-(void)_layoutEmbeddedTabContainerView;
-(void)_displayPageViewNow;
-(void)_configureWithPage:(id)arg1 cached:(BOOL)arg2 ;
-(void)_reloadHeader:(BOOL)arg1 content:(BOOL)arg2 tabFooter:(BOOL)arg3 reason:(unsigned long long)arg4 ;
-(unsigned long long)_numberOfAdminTab;
-(CGRect)_calculateAdminTabBarFrame;
-(void)_setupCLCObserver;
-(void)_logOnReceivingParsedResponse:(id)arg1 page:(id)arg2 cached:(BOOL)arg3 lastResponse:(BOOL)arg4 nameSpace:(id)arg5 downloadDate:(id)arg6 ;
-(void)_consistentFieldsDidChangeForPageVC:(id)arg1 ;
-(void)_reloadTabActions:(id)arg1 ;
-(void)_startConfiguringTabFootersManager;
-(void)_configureCurrentTabFooterViewAndControllerForTabActionType:(id)arg1 ;
-(double)viewContentWidth;
-(void)_setHeaderAndTabViewContentOffset:(CGPoint)arg1 ;
-(CGSize)headerViewSize;
-(void)headerViewFrameDidUpdate;
-(void)headerSourceDidChangeCellHeight:(id)arg1 forCardController:(id)arg2 ;
-(void)refreshCardView:(id)arg1 ;
-(void)setReactionDataPrefetcher:(FBPageReactionDataPrefetcher *)arg1 ;
-(BOOL)hasCachedHeader;
-(FBPageNavigationBarActionEventsListenerAnnouncer *)pageNavigationBarActionEventsListenerAnnouncer;
-(void)addConfigureOutsourcedCard:(id)arg1 ;
-(id)existingTabs;
-(void)reloadContent;
-(void)registerDeeplinkIntentAfterTabReload:(id)arg1 ;
-(void)footerViewControllerDidUpdateContent;
-(double)mainColumnContentWidth;
-(FBPageReactionDataPrefetcher *)reactionDataPrefetcher;
-(void)tabRemoveCompleted;
-(void)tabAndActionsUpdated;
-(void)startDeferredJobsAfterPageInitialLoading;
-(void)didSelectTabAtIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(void)willSelectTabAtIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2 ;
-(void)setDelegate:(id<FBPageContentViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBPageContentViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(void)showSpinner;
-(void)_scrollViewDidScroll:(id)arg1 ;
-(id)logName;
-(void)hideSpinner;
@end

