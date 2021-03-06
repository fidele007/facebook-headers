/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBGraphSearchContentViewControllerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UINavigationBarDelegate.h>
#import <Facebook/FBGraphSearchAppearanceTransitioningViewController.h>
#import <Facebook/FBNavigationBarSearchTextFieldDelegate.h>
#import <Facebook/FBSearchTypeaheadActivityListener.h>
#import <Facebook/FBGraphSearchActiveNullStateContentLoaderProviderProtocol.h>

@protocol FBGraphSearchContentViewController, FBSearchTextFieldProtocol;
@class FBSearchContext, FBScenePath, UIViewController, FBSearchTypeaheadViewController, FBSearchTypeaheadSessionStatus, FBSearchTypeaheadSessionConfig, FBSearchTypeaheadLogger, UIView, FBKeyboardObserver, FBSearchInputView, FBGraphSearchKeyboardShortcut, FBGraphSearchInputManager, CLLocation, FBUserSession, FBSearchTypeaheadActivityListenerAnnouncer, NSString;

@interface FBGraphSearchInputViewController : UIViewController <FBGraphSearchContentViewControllerDelegate, UIGestureRecognizerDelegate, UINavigationBarDelegate, FBGraphSearchAppearanceTransitioningViewController, FBNavigationBarSearchTextFieldDelegate, FBSearchTypeaheadActivityListener, FBGraphSearchActiveNullStateContentLoaderProviderProtocol> {

	double _tableViewOffsetTop;
	FBSearchContext* _searchContext;
	BOOL _didSelectFullSuggestion;
	BOOL _didSelectResult;
	BOOL _hidingNavigationBar;
	BOOL _pushingExternalView;
	double _topLayoutGuideLength;
	FBScenePath* _scenePath;
	UIViewController*<FBGraphSearchContentViewController> _nullStateViewController;
	FBSearchTypeaheadViewController* _typeaheadViewController;
	FBSearchTypeaheadSessionStatus* _sessionStatus;
	FBSearchTypeaheadSessionConfig* _sessionConfig;
	FBSearchTypeaheadLogger* _logger;
	UIView*<FBSearchTextFieldProtocol> _searchField;
	FBKeyboardObserver* _keyboardObserver;
	FBSearchInputView* _searchInputView;
	BOOL _isInitialLoad;
	FBGraphSearchKeyboardShortcut* _keyboardShortcut;
	FBGraphSearchInputManager* _graphSearchInputManager;
	CLLocation* _userLocation;
	FBUserSession* _session;
	UIViewController*<FBGraphSearchContentViewController> _contentViewController;

}

@property (nonatomic,retain) FBUserSession * session;                                                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) UIViewController*<FBGraphSearchContentViewController> contentViewController;                 //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) unsigned long long defaultKeywordSuggestionBucketSize; 
@property (nonatomic,retain) CLLocation * userLocation;                                                                   //@synthesize userLocation=_userLocation - In the implementation block
@property (nonatomic,readonly) FBSearchTypeaheadActivityListenerAnnouncer * announcer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBGraphSearchNullStateContentLoaderProtocol> activeNullStateContentLoader; 
-(id)analyticsModule;
-(FBSearchTypeaheadActivityListenerAnnouncer *)announcer;
-(BOOL)fb_useDefaultSearchText;
-(BOOL)fb_leftAlignSearchText;
-(id)fb_searchFieldAttributedText;
-(id)fb_navBarTintColor;
-(BOOL)fb_hidesNavigationBar;
-(double)fb_navigationSearchBarRightOffset;
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(unsigned long long)fb_searchFieldStyle;
-(BOOL)fb_viewControllerSuppressBackButton;
-(id)fb_toViewControllerAnimatedTransitioningForOperation:(long long)arg1 fromViewController:(id)arg2 ;
-(id)fb_fromViewControllerAnimatedTransitioningForOperation:(long long)arg1 toViewController:(id)arg2 ;
-(BOOL)fb_suppressAnimationForNavBarVisibilityStateOnNavigation;
-(id)contentsView;
-(void)setTableViewOffsetTop:(double)arg1 ;
-(id)initWithSession:(id)arg1 searchContext:(id)arg2 searchField:(id)arg3 ;
-(id)fb_tabBarBackgroundColor;
-(id)fb_tabBarTopBorderColor;
-(id)fb_tabBarUnselectedIconColor;
-(void)graphSearchSuggestionWillAppear:(id)arg1 position:(unsigned long long)arg2 ;
-(void)graphSearchDidTapOnSuggestion:(id)arg1 position:(unsigned long long)arg2 ;
-(void)graphSearchDidTapOnRecentSearchEditButtonWithLogFilter:(id)arg1 ;
-(void)graphSearchExpandableModuleExpandedWithModels:(id)arg1 moduleModel:(id)arg2 ;
-(void)graphSearchScopedSearchModeChanged:(BOOL)arg1 ;
-(void)graphSearchDidTapOnSuggestionArrowButton:(id)arg1 position:(unsigned long long)arg2 ;
-(void)graphSearchDidChangeNullStateInputType:(unsigned long long)arg1 ;
-(void)graphSearchDidChangeTypeaheadInputType:(unsigned long long)arg1 ;
-(void)graphSearchDidRemoveSuggestions:(id)arg1 ;
-(void)graphSearchDidReloadNullState;
-(void)graphSearchDidTapOnTypeaheadNUXCrossButton;
-(id<FBGraphSearchNullStateContentLoaderProtocol>)activeNullStateContentLoader;
-(double)layoutGuideTopLength;
-(void)graphSearchContentViewControllerWillBeginDragging:(id)arg1 ;
-(id)fb_tabBarUnselectedTitleColor;
-(id)fb_navBarButtonsTintColor;
-(id)_currentlyShownViewController;
-(double)_bottomOfStatusBarInContainerView;
-(void)_updateSearchBoxWithText:(id)arg1 ;
-(void)_toggleNullStateIfNeeded;
-(void)_updateSearchBarShowRealNavBar:(BOOL)arg1 ;
-(void)_openSuggestion:(id)arg1 ;
-(BOOL)_shouldShowNullState;
-(void)searchBarSearchButtonTapped:(id)arg1 ;
-(void)backButtonTapped:(id)arg1 ;
-(void)searchTextFieldDidBeginEditing:(id)arg1 ;
-(BOOL)searchTextFieldShouldBeginEditing:(id)arg1 ;
-(void)searchTextFieldDidEndEditing:(id)arg1 ;
-(BOOL)searchTextFieldShouldEndEditing:(id)arg1 ;
-(void)searchTextFieldDidAttemptToBeginEditing:(id)arg1 ;
-(void)searchBarBackspaceButtonTapped:(id)arg1 ;
-(void)clearButtonTapped:(id)arg1 ;
-(void)updateBarHeightIfNecessary:(id)arg1 ;
-(id)_defaultAnalyticsModule;
-(void)_logLoadView;
-(void)voiceSearchButtonTapped;
-(void)_addTypeaheadViewController;
-(void)_updateSearchBarPlaceholderTextForScopedSearch:(BOOL)arg1 ;
-(id)_defaultQueryWithString:(id)arg1 ;
-(void)_updateSearchBarScopedSearchTokenWithMode:(BOOL)arg1 ;
-(unsigned long long)defaultKeywordSuggestionBucketSize;
-(void)_updateNavigationBarForAppearanceSelector:(SEL)arg1 ;
-(void)_typeaheadSessionLoggingStart;
-(void)_openKeyboard;
-(void)_updateSearchBarPlaceholderTextForVideoSearchWithInputType:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)positionForBar:(id)arg1 ;
-(void)textDidChange:(id)arg1 ;
-(UIViewController*<FBGraphSearchContentViewController>)contentViewController;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)searchBar;
-(void)setContentViewController:(UIViewController*<FBGraphSearchContentViewController>)arg1 ;
-(void)setUserLocation:(CLLocation *)arg1 ;
-(FBUserSession *)session;
-(CLLocation *)userLocation;
-(void)setSession:(FBUserSession *)arg1 ;
@end

