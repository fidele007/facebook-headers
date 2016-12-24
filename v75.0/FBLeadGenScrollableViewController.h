/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBComponentCellAppearanceEventListener.h>
#import <Facebook/FBComponentTableViewDataSourceAnimationDelegate.h>
#import <Facebook/FBComponentTableViewDataSourceCellConfigProvider.h>
#import <Facebook/FBComponentTableViewDataSourceEventListener.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBKeyboardObserverDelegate.h>
#import <Facebook/FBLeadGenQuestionHighlightControllerDelegate.h>
#import <Facebook/FBModalContainerViewControllerDelegate.h>
#import <Facebook/FBModalContentViewController.h>
#import <Facebook/FBWebViewContainerControllerDelegate.h>
#import <Facebook/FBWatchAndMoreContentControlling.h>
#import <Facebook/FBWatchAndMoreViewControllerDelegate.h>

@protocol FBNavigationCoordinator, FBWatchAndMoreContentViewControllerDelegate, FBWatchAndMoreScrollingController;
@class FBMemLeadGenDeepLinkData, NSArray, FBMemLeadGenLegalContent, FBUserSession, NSString, CKComponentHostingView, FBLeadGenScrollableFloatingHeaderView, UIView, FBLeadGenProfileImageAndNameView, FBGradientView, UITableView, FBComponentTableViewDataSource, FBLeadGenScrollableToolbox, FBKeyboardObserver, FBKeyboardFocusedViewDisplayer, FBLeadGenContinuedFlowFunnelLogger, NSMutableDictionary, FBWatchAndMoreData, UIViewController, FBOffer, UIScrollView;

@interface FBLeadGenScrollableViewController : UIViewController <CKComponentProvider, FBComponentCellAppearanceEventListener, FBComponentTableViewDataSourceAnimationDelegate, FBComponentTableViewDataSourceCellConfigProvider, FBComponentTableViewDataSourceEventListener, FBComponentScrollEventListener, FBKeyboardObserverDelegate, FBLeadGenQuestionHighlightControllerDelegate, FBModalContainerViewControllerDelegate, FBModalContentViewController, FBWebViewContainerControllerDelegate, FBWatchAndMoreContentControlling, FBWatchAndMoreViewControllerDelegate> {

	unsigned long long _state;
	FBMemLeadGenDeepLinkData* _dataModel;
	NSArray* _carouselDataModels;
	NSArray* _carouselImages;
	unsigned long long _carouselItemIndex;
	FBMemLeadGenLegalContent* _legalContent;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBUserSession* _session;
	NSArray* _trackingCodes;
	NSString* _clickHashKey;
	CKComponentHostingView* _stickyFooterView;
	FBLeadGenScrollableFloatingHeaderView* _floatingHeaderView;
	UIView* _coverPhotoView;
	FBLeadGenProfileImageAndNameView* _profileImageAndNameView;
	FBGradientView* _topGradientView;
	UIView* _overlayViewWithSpinner;
	UITableView* _tableView;
	FBComponentTableViewDataSource* _dataSource;
	FBLeadGenScrollableToolbox* _toolbox;
	FBKeyboardObserver* _keyboardObserver;
	FBKeyboardFocusedViewDisplayer* _keyboardFocusedViewDisplayer;
	FBLeadGenContinuedFlowFunnelLogger* _continuedFlowFunnelLogger;
	NSMutableDictionary* _stateToMaxScrolledValue;
	unsigned long long _lastSeenState;
	BOOL _isChangingState;
	BOOL _shouldScrollToErrorField;
	BOOL _reloadDataAfterApplyingChangeset;
	BOOL _shouldAllowSubmit;
	BOOL _shouldShowFullPrivacy;
	BOOL _shouldContextCardOnSamePageWithQuestions;
	FBWatchAndMoreData* _watchAndMoreData;
	BOOL _shouldShowActionSheet;
	UIViewController* _actionSheet;
	FBOffer* _offer;
	unsigned long long _claimState;
	BOOL _swipeAwayEnable;
	BOOL _shouldHideStatusBar;
	id<FBWatchAndMoreContentViewControllerDelegate> _delegate;
	UIScrollView* _contentView;
	id<FBWatchAndMoreScrollingController> _watchAndMoreScrollingController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL swipeAwayEnable;                                                                 //@synthesize swipeAwayEnable=_swipeAwayEnable - In the implementation block
@property (assign,nonatomic,__weak) id<FBWatchAndMoreContentViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIScrollView * contentView;                                                         //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL shouldHideStatusBar;                                                             //@synthesize shouldHideStatusBar=_shouldHideStatusBar - In the implementation block
@property (nonatomic,readonly) id<FBWatchAndMoreScrollingController> watchAndMoreScrollingController;              //@synthesize watchAndMoreScrollingController=_watchAndMoreScrollingController - In the implementation block
@property (nonatomic,retain) UIScrollView * contentAndVideoScrollView; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
+(void)presentWithDataModel:(id)arg1 navigationCoordinator:(id)arg2 intentHandler:(id)arg3 session:(id)arg4 trackingCodes:(id)arg5 ;
+(void)presentWithDataModel:(id)arg1 carouselItemIndex:(unsigned long long)arg2 carouselDataModels:(id)arg3 carouselImages:(id)arg4 navigationCoordinator:(id)arg5 intentHandler:(id)arg6 session:(id)arg7 trackingCodes:(id)arg8 ;
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(long long)arg5 ;
-(void)componentWillAppearInViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)componentDidDisappearFromViewWithFrame:(CGRect)arg1 withModel:(id)arg2 atIndexPath:(id)arg3 ;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(FBComponentTableViewDataSourceCellConfig)configForTableCellInDataSource:(id)arg1 ;
-(BOOL)dataSource:(id)arg1 shouldAnimateApplicationOfChangeset:(const Changeset*)arg2 ;
-(FBComponentTableViewDataSourceAnimationContext)dataSource:(id)arg1 rowAnimationContextForChangeset:(const Changeset*)arg2 ;
-(void)dismissModalContainerViewController:(id)arg1 ;
-(void)dismissWebViewContainerController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)headerViewForModalContainerViewController:(id)arg1 ;
-(id)scrollViewForDismissingModalContainerViewController:(id)arg1 ;
-(void)setShouldHideStatusBar:(BOOL)arg1 ;
-(BOOL)shouldHideStatusBar;
-(id)initWithDataModel:(id)arg1 carouselItemIndex:(unsigned long long)arg2 carouselDataModels:(id)arg3 carouselImages:(id)arg4 navigationCoordinator:(id)arg5 intentHandler:(id)arg6 session:(id)arg7 trackingCodes:(id)arg8 watchAndMoreData:(id)arg9 ;
-(BOOL)swipeAwayEnable;
-(void)setSwipeAwayEnable:(BOOL)arg1 ;
-(id<FBWatchAndMoreScrollingController>)watchAndMoreScrollingController;
-(void)processSplitFlow:(id)arg1 splitFlowURLString:(id)arg2 ;
-(void)setUpKeyboardObserver;
-(void)setUpCoverPhoto;
-(void)setUpTopGradientView;
-(void)setUpFloatingHeaderView;
-(void)setUpNameLabelView;
-(void)setUpStickyFooterView;
-(void)_updateTableViewInsetsWithHeight:(double)arg1 ;
-(void)_adjustViewsLayoutWhenScrolling;
-(void)_updateStickyFooter;
-(id)availableSections;
-(void)willDismissDialog;
-(id)modelsForSection:(unsigned long long)arg1 ;
-(id)_createPrivacyPolicyInfo;
-(id)_createButtonInfoArray;
-(void)dismissDialog;
-(BOOL)_hasValidationError;
-(BOOL)_hasUncheckedRequiredCheckboxes;
-(void)_scrollToVisibilityIndicator;
-(void)_makeGraphQLMutationCallToShareUserInfo;
-(void)setUpOverlayViewWithSpinner;
-(void)removeOverlayViewWithSpinner;
-(void)_logEventToAdMetrics:(id)arg1 ;
-(void)tapContextCardCTAButton;
-(void)tapBackButton;
-(void)tapNextButton;
-(void)tapSubmitButton;
-(void)tapThankYouPageCTA;
-(void)updateHighlightStateForQuestion:(id)arg1 ;
-(void)setDelegate:(id<FBWatchAndMoreContentViewControllerDelegate>)arg1 ;
-(void)reloadData;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)scrollViewWillBeginDragging:(FBScrollViewState)arg1 ;
-(id<FBWatchAndMoreContentViewControllerDelegate>)delegate;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(UIScrollView *)contentView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
@end

