/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBFeedbackTargetManagerDelegate.h>
#import <Facebook/FBCommentStreamCommentsManagerDelegate.h>
#import <Facebook/FBCommentComposerViewControllerDelegate.h>
#import <Facebook/FBAnalyticsReferrerPerformanceLogging.h>
#import <Facebook/FBCommentStreamScrollPositionManagerDelegate.h>
#import <Facebook/FBComponentScrollEventListener.h>
#import <Facebook/FBCommentStreamDimmable.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>
#import <Facebook/FBMStickerStoreViewControllerDelegate.h>
#import <Facebook/FBCommentStreamPTRManagerDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/FBTypingIndicatorSubscriptionManagerDelegate.h>
#import <Facebook/FBPresentableViewController.h>
#import <Facebook/FBCommentStreamViewDelegate.h>
#import <Facebook/FBFeedbackSubscriberListener.h>
#import <Facebook/FBCommentComposerActivationRequestListener.h>
#import <Facebook/FBFeedbackCommentsSectionComponentListener.h>
#import <Facebook/FBComponentCollectionViewDataSourceEventListener.h>
#import <Facebook/FBCommentComposerActivationListener.h>
#import <Facebook/FBSideFeedConfigurationProvider.h>
#import <Facebook/FBModalContentViewController.h>
#import <Facebook/FBModalContainerViewControllerDelegate.h>
#import <Facebook/FBInAppNotificationEligibilityProtocol.h>
#import <Facebook/FBEmbeddedTab.h>
#import <Facebook/FBScrolling.h>

@protocol FBCommentStreamViewControllerDelegate, FBFeedbackTargetProtocol, FBFeedbackTargetManagerProtocol;
@class FBCommentStreamViewControllerConfiguration, NSDictionary, FBFeedbackAnalytics, NSString, NSArray, FBUserSession, FBMemFeedback, FBMemComment, FBCommentStreamReflowForcingListenerAnnouncer, FBCommentStreamLifecycleListenerAnnouncer, FBCommentStreamViewControllerAnalyticsFunnel, FBCommentStreamFeedbackAnalyticsManager, UICollectionView, CKComponentHostingView, FBCommentComposerViewController, FBComponentCollectionViewDataSource, FBCommentStreamSourceCollectionViewDataSourceAdapter, FBComponentCollectionViewFlowLayoutDelegate, FBCommentStreamFunnelInstance, FBCommentComposerMentionController, FBCommentStreamNewCommentPillManager, FBCommentStreamOverlaySpinnerManager, FBCommentStreamPTRManager, FBFeedbackPublishingAuthorFetcher, FBCommentStreamReachabilityManager, FBCommentStreamScrollPositionManager, FBCommentStreamSentencesManager, FBTypingIndicatorSubscriptionManager, FBComponentDataSourceWorkingRangeController, FBFeedbackSubscriber, FBFeedbackUpdateListenerAnnouncer, FBFeedbackViewStateListenerAnnouncer, FBCommentStreamCommentStateListenerAnnouncer, FBCommentStreamFeedbackSentencesSectionComponentManager, FBCommentStreamCommentsSectionComponentManager, FBCommentComposerActivationRequestListenerAnnouncer, FBCommentStreamViewControllerContextChangeListenerAnnouncer, FBFeedbackCommentsSectionComponentListenerAnnouncer, FBCommentComposerActivationListenerAnnouncer, FBNuxController, FBAnalyticsReferrerPerformanceLogger, FBCommentStreamView, FBScenePath, FBCommentStreamCommentsManager, FBVPVdLoggingWorkingRangeListener, UIScrollView, UIView;

@interface FBCommentStreamViewController : UIViewController <FBFeedbackTargetManagerDelegate, FBCommentStreamCommentsManagerDelegate, FBCommentComposerViewControllerDelegate, FBAnalyticsReferrerPerformanceLogging, FBCommentStreamScrollPositionManagerDelegate, FBComponentScrollEventListener, FBCommentStreamDimmable, FBAccessibilityInvalidationEventsListener, FBMStickerStoreViewControllerDelegate, FBCommentStreamPTRManagerDelegate, UIAlertViewDelegate, FBTypingIndicatorSubscriptionManagerDelegate, FBPresentableViewController, FBCommentStreamViewDelegate, FBFeedbackSubscriberListener, FBCommentComposerActivationRequestListener, FBFeedbackCommentsSectionComponentListener, FBComponentCollectionViewDataSourceEventListener, FBCommentComposerActivationListener, FBSideFeedConfigurationProvider, FBModalContentViewController, FBModalContainerViewControllerDelegate, FBInAppNotificationEligibilityProtocol, FBEmbeddedTab, FBScrolling> {

	FBCommentStreamViewControllerConfiguration* _configuration;
	id<FBCommentStreamViewControllerDelegate> _delegate;
	NSDictionary* _extraAnalyticsData;
	FBFeedbackAnalytics* _feedbackAnalytics;
	NSString* _focusedCommentID;
	NSString* _focusedReplyID;
	BOOL _shouldShowReplyToFocusedComment;
	NSArray* _parentTrackingCodes;
	BOOL _shouldEnableSideFeedJointScrolling;
	BOOL _shouldScrollToTopOfUFI;
	FBUserSession* _userSession;
	BOOL _didLogNetworkContent;
	BOOL _didPresentScrollPromptIndicator;
	FBMemFeedback* _feedback;
	id<FBFeedbackTargetProtocol> _lastUpdatedFeedbackTarget;
	double _lastViewWidth;
	BOOL _shouldLogLikesFromNotificationTap;
	BOOL _viewIsVisible;
	BOOL _isReplyComposerActive;
	FBMemComment* _commentForInlineReplyComposer;
	FBCommentStreamReflowForcingListenerAnnouncer* _reflowForcingAnnouncer;
	FBCommentStreamLifecycleListenerAnnouncer* _lifecycleAnnouncer;
	FBCommentStreamViewControllerAnalyticsFunnel* _analyticsFunnel;
	FBCommentStreamFeedbackAnalyticsManager* _analyticsManager;
	UICollectionView* _collectionView;
	CKComponentHostingView* _commentsDisabledNoticeView;
	FBCommentComposerViewController* _composerViewController;
	FBComponentCollectionViewDataSource* _dataSource;
	FBCommentStreamSourceCollectionViewDataSourceAdapter* _feedbackTargetDataSourceAdapter;
	FBCommentStreamSourceCollectionViewDataSourceAdapter* _feedbackTargetFooterDataSourceAdapter;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	FBCommentStreamFunnelInstance* _funnelInstance;
	FBCommentComposerMentionController* _mentionController;
	FBCommentStreamNewCommentPillManager* _newCommentPillManager;
	FBCommentStreamOverlaySpinnerManager* _overlaySpinnerManager;
	FBCommentStreamPTRManager* _ptrManager;
	FBFeedbackPublishingAuthorFetcher* _publishingAuthorFetcher;
	FBCommentStreamReachabilityManager* _reachabilityManager;
	FBCommentStreamScrollPositionManager* _scrollPositionManager;
	FBCommentStreamSentencesManager* _sentencesManager;
	FBTypingIndicatorSubscriptionManager* _typingIndicatorSubscriptionManager;
	FBComponentDataSourceWorkingRangeController* _workingRangeController;
	FBFeedbackSubscriber* _feedbackSubscriber;
	BOOL _listKitEnabledForStory;
	BOOL _listKitEnabledForFooter;
	BOOL _listKitEnabledForListOfTopLevelComments;
	BOOL _shouldScrollToBottom;
	FBFeedbackUpdateListenerAnnouncer* _feedbackUpdateAnnouncer;
	FBFeedbackViewStateListenerAnnouncer* _feedbackViewStateAnnouncer;
	FBCommentStreamCommentStateListenerAnnouncer* _commentStateListenerAnnouncer;
	FBCommentStreamFeedbackSentencesSectionComponentManager* _sentencesSectionComponentManager;
	FBCommentStreamCommentsSectionComponentManager* _commentsSectionComponentManager;
	FBCommentComposerActivationRequestListenerAnnouncer* _commentComposerActivationRequestListenerAnnouncer;
	FBCommentStreamViewControllerContextChangeListenerAnnouncer* _contextChangeListenerAnnouncer;
	FBFeedbackCommentsSectionComponentListenerAnnouncer* _commentsLCAnnouncer;
	FBCommentComposerActivationListenerAnnouncer* _composerActivationAnnouncer;
	FBNuxController* _nuxController;
	FBFeedbackTargetManagerRespondsToSelectors _feedbackTargetManagerRespondsToSelectors;
	BOOL _dimmed;
	FBAnalyticsReferrerPerformanceLogger* _referrerPerformanceLogger;
	id<FBFeedbackTargetManagerProtocol> _feedbackTargetManager;
	FBCommentStreamView* _commentStreamView;
	FBScenePath* _scenePath;
	FBCommentStreamCommentsManager* _commentsManager;
	FBVPVdLoggingWorkingRangeListener* _vpvLoggingWorkingRangeListener;

}

@property (nonatomic,readonly) FBCommentStreamCommentsManager * commentsManager;                                //@synthesize commentsManager=_commentsManager - In the implementation block
@property (nonatomic,readonly) FBCommentComposerMentionController * mentionController;                          //@synthesize mentionController=_mentionController - In the implementation block
@property (nonatomic,readonly) FBVPVdLoggingWorkingRangeListener * vpvLoggingWorkingRangeListener;              //@synthesize vpvLoggingWorkingRangeListener=_vpvLoggingWorkingRangeListener - In the implementation block
@property (nonatomic,readonly) id<FBFeedbackTargetManagerProtocol> feedbackTargetManager;                       //@synthesize feedbackTargetManager=_feedbackTargetManager - In the implementation block
@property (nonatomic,readonly) FBCommentStreamView * commentStreamView;                                         //@synthesize commentStreamView=_commentStreamView - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                                         //@synthesize scenePath=_scenePath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) FBAnalyticsReferrerPerformanceLogger * referrerPerformanceLogger;                  //@synthesize referrerPerformanceLogger=_referrerPerformanceLogger - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                                                       //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * secondaryStickyHeaderView; 
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowNotification:(id)arg2 ;
-(FBScenePath *)scenePath;
-(id)analyticsModule;
-(id)_toolbox;
-(void)dataSourceWillEndUpdates:(id)arg1 changeset:(Changeset*)arg2 ;
-(void)dataSourceDidEndUpdates:(id)arg1 changeset:(Changeset*)arg2 userInfo:(id)arg3 ;
-(id)analyticsExtras;
-(id)analyticsSourceExtras;
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_useDefaultSearchText;
-(id)fb_searchContext;
-(void)pullToRefreshManagerDidTriggerRefresh:(id)arg1 ;
-(BOOL)alreadyOpenWithViewController:(id)arg1 ;
-(void)refreshData;
-(BOOL)fb_hideNavBarRightButton;
-(id)sideFeedConfigurationForSession:(id)arg1 contactsSearch:(id)arg2 onlineStatusManager:(id)arg3 ;
-(id)sideFeedRightViewControllerKey;
-(BOOL)compatibleWithConfiguration:(id)arg1 ;
-(double)fb_navigationSearchBarRightOffset;
-(id)_trackingCodes;
-(void)didReceiveAccessibilityInvalidation;
-(BOOL)fb_showAuxiliaryViewController;
-(BOOL)isScrolledToTop;
-(void)_sessionWillInvalidate:(id)arg1 ;
-(void)dismissModalContainerViewController:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 feedbackTargetManager:(id)arg2 userSession:(id)arg3 delegate:(id)arg4 ;
-(void)feedbackTargetManager:(id)arg1 didUpdateFeedbackTarget:(id)arg2 ;
-(FBAnalyticsReferrerPerformanceLogger *)referrerPerformanceLogger;
-(void)setReferrerPerformanceLogger:(FBAnalyticsReferrerPerformanceLogger *)arg1 ;
-(id)headerViewForModalContainerViewController:(id)arg1 ;
-(id)scrollViewForDismissingModalContainerViewController:(id)arg1 ;
-(id)animationControllerForPresentedModalContainerViewController:(id)arg1 ;
-(void)_dismissSelf;
-(id)fb_searchTitleContext;
-(FBCommentStreamView *)commentStreamView;
-(void)feedbackTargetManagerTargetDidDisappear:(id)arg1 ;
-(id)listKitConversion_contextChangeListenerAnnouncer;
-(id)listKitConversion_commentComposerActivationRequestListenerAnnouncer;
-(id)commentToolboxForFeedbackTargetManager:(id)arg1 ;
-(id<FBFeedbackTargetManagerProtocol>)feedbackTargetManager;
-(void)feedbackTargetManager:(id)arg1 redirectToFallbackURL:(id)arg2 ;
-(void)feedbackTargetManager:(id)arg1 didDownloadFeedbackTarget:(id)arg2 ;
-(void)feedbackTargetManagerDidFailToDownloadFeedbackTarget:(id)arg1 ;
-(void)feedbackTargetManagerScrollBottomOfFeedbackTargetToMiddleOfScreen:(id)arg1 ;
-(void)feedbackSubscriber:(id)arg1 didUpdateLiveReactionInfo:(id)arg2 forActor:(id)arg3 ;
-(void)commentComposerActivationRequested;
-(void)commentComposerViewControllerDidShowComposerContainerView:(id)arg1 ;
-(void)commentComposerViewControllerDidHideComposerContainerView:(id)arg1 ;
-(void)commentComposerViewControllerDidUpdateComposerSize:(id)arg1 ;
-(void)commentComposerViewControllerWillActivateCommentComposer:(id)arg1 ;
-(void)commentComposerViewControllerDidDismissCommentComposer:(id)arg1 ;
-(void)commentComposerViewControllerDidTapPostButton:(id)arg1 ;
-(void)commentComposerViewControllerDidTapReplyBanner:(id)arg1 forComment:(id)arg2 ;
-(void)commentComposerViewControllerDidTapDismissReplyBanner:(id)arg1 forComment:(id)arg2 shouldShowAlertDismissalView:(BOOL)arg3 ;
-(void)didActivateCommentComposer;
-(void)didDismissCommentComposer;
-(void)didSetComposerFeedbackTarget:(id)arg1 ;
-(FBCommentComposerMentionController *)mentionController;
-(void)feedbackTargetManager:(id)arg1 disableAllSections:(BOOL)arg2 ;
-(void)feedbackTargetManager:(id)arg1 hideCommentComposer:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)feedbackTargetManager:(id)arg1 updateContextAndEnqeueReloadWithCellTheme:(unsigned long long)arg2 ufiCommentTheme:(unsigned long long)arg3 ;
-(id)feedbackTargetManagerHeaderView:(id)arg1 ;
-(void)_createTypingIndicatorManagerWithFeedback:(id)arg1 ;
-(void)typingIndicatorSubscriptionManagerDidRecieveActiveTypingState:(id)arg1 ;
-(void)typingIndicatorSubscriptionManagerDidRecieveInactiveTypingState:(id)arg1 ;
-(id)_composerAnalyticsInfo;
-(void)commentsManager:(id)arg1 shouldRefreshFeedbackTarget:(id)arg2 ;
-(void)commentsManagerDidCompleteLoadingNetworkContent:(id)arg1 ;
-(void)commentsManager:(id)arg1 didStartEditingComment:(id)arg2 ;
-(void)didTapCommentToReply:(id)arg1 ;
-(void)didTapDimmedComment;
-(void)commentsManagerDidLoadComments:(id)arg1 fromInitialQuery:(BOOL)arg2 ;
-(void)commentsManagerDidUpdateDataSource:(id)arg1 ;
-(void)commentsManager:(id)arg1 didUpdateCommentsDisabledFields:(id)arg2 ;
-(void)commentsManager:(id)arg1 didReplaceCommentsController:(id)arg2 ;
-(BOOL)commentsManagerIsCommentsViewVisible:(id)arg1 ;
-(void)startKeyboardObservation;
-(void)stopKeyboardObservation;
-(BOOL)_shouldOfferCommentComposerActivationRequestListenerAnnouncer;
-(BOOL)_shouldOfferContextChangeListenerAnnouncer;
-(BOOL)_shouldOfferCommentComposerActivationAnnouncer;
-(BOOL)_shouldOfferReflowForcingAnnouncer;
-(void)_insertEmptySections;
-(id)createComponentContext;
-(void)_willActivateReplyComposerForComment:(id)arg1 ;
-(void)_didActivateReplyComposerForComment:(id)arg1 ;
-(void)_didDismissReplyComposerForComment:(id)arg1 ;
-(void)_configureHeaderView:(id)arg1 title:(id)arg2 ;
-(void)_didDismiss:(id)arg1 ;
-(void)_dismissInlineReplyComposer;
-(void)_reloadSourcesIfNeeded;
-(void)_headerBackAction:(id)arg1 ;
-(void)_headerDoneAction:(id)arg1 ;
-(id)_additionalResponderTargetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)_additionalResponders;
-(void)_didTapReplyOnComment:(id)arg1 forComment:(id)arg2 ;
-(void)_didTapInlineReplyComposerCTA:(id)arg1 forComment:(id)arg2 ;
-(void)_didTapInlineReplyExpansionFakeComposer:(id)arg1 forComment:(id)arg2 ;
-(void)_didTapReplyOnReplyOnReplyVC:(id)arg1 forComment:(id)arg2 ;
-(void)_commentOnFeedbackTarget;
-(void)_showCommentRepliesAndActivateComposer:(id)arg1 forComment:(id)arg2 ;
-(void)_showCommentRepliesFromFakeComposer:(id)arg1 forComment:(id)arg2 ;
-(void)_didTapFakeNeckReplyPager:(id)arg1 forComment:(id)arg2 ;
-(void)_didTapFakeTailReplyPager:(id)arg1 forComment:(id)arg2 ;
-(void)_didBeginEditingComment;
-(void)_didTapCancelWhileEditingComment;
-(void)_commitEditingComment:(id)arg1 forComment:(id)arg2 ;
-(void)_didTapReplyRow:(id)arg1 forComment:(id)arg2 ;
-(void)_didTapReplyOverlay:(id)arg1 forComment:(id)arg2 ;
-(void)_didTapLike:(id)arg1 forComment:(id)arg2 ;
-(void)_didTapSecondaryAction:(id)arg1 context:(id)arg2 ;
-(FBVPVdLoggingWorkingRangeListener *)vpvLoggingWorkingRangeListener;
-(id)_createCommentsModelControllerForEditingOfComment:(id)arg1 ;
-(void)_loadFeedbackFromFeedbackTarget:(id)arg1 ;
-(id)_createVPVLoggingWorkingRangeListener;
-(void)_updateCommentsDisabledForFeedback:(id)arg1 ;
-(void)_createCommentComposerWithFeedback:(id)arg1 ;
-(id)commentsDisabledNoticeView;
-(void)_initializeMentionAndHashtagControllersWithFeedback:(id)arg1 ;
-(id)_commentAuthorForFeedback:(id)arg1 ;
-(void)_instantiateTopLevelComposerViewControllerForCommentAuthor:(id)arg1 ;
-(void)_updateComposerForFeedbackTarget:(id)arg1 commentsController:(id)arg2 dismissComposer:(BOOL)arg3 preserveComposerText:(BOOL)arg4 ;
-(void)_cancelEditingComment;
-(void)_resetFeedbackTargetWithDismissComposer:(BOOL)arg1 preserveComposerText:(BOOL)arg2 ;
-(void)_activateCommentComposerForFeedbackTarget:(id)arg1 commentsController:(id)arg2 ;
-(void)_showCommentReplies:(id)arg1 forComment:(id)arg2 ;
-(void)_replyToMentionForComment:(id)arg1 ;
-(void)_prefillComposerWithMention:(id)arg1 ;
-(void)_prefillComposerWithReplyMentionForComment:(id)arg1 ;
-(void)_replyToComment:(id)arg1 shouldScroll:(BOOL)arg2 ;
-(void)_activateInlineReplyComposerForComment:(id)arg1 ;
-(void)_showCommentReplyControllerForComment:(id)arg1 keyboardSource:(id)arg2 ;
-(void)_replyToComment:(id)arg1 ;
-(void)_didTapLiveReactionFlyoverForMention:(id)arg1 reactionInfo:(id)arg2 ;
-(void)_startEditingComment:(id)arg1 ;
-(void)_hideComposerForCommentEditMode;
-(void)_unhideComposerForCommentEditMode;
-(void)_switchToCommentEditMode;
-(void)_exitCommentEditMode;
-(void)_scrollToComment:(id)arg1 ;
-(void)_resetEditingStateResetingRowBeingEdited:(BOOL)arg1 ;
-(void)_commitEditingComment:(id)arg1 ;
-(id)_indexPathForCommentWithID:(id)arg1 ;
-(void)feedbackTargetManagerScrollToTopOfCommentsSection:(id)arg1 ;
-(id)scrollPositionManagerHighlightFocusedCommentWithManager:(id)arg1 ;
-(id)indexPathForComment:(id)arg1 ;
-(id)indexPathForReplyComposerForComment:(id)arg1 ;
-(CGPoint)initialOffsetForScrollPositionManager:(id)arg1 ;
-(void)commentStreamViewDidTapCollectionView:(id)arg1 ;
-(BOOL)commentStreamViewShouldReceiveTapEvents:(id)arg1 ;
-(void)commentStreamViewDidSwipeCollectionView:(id)arg1 ;
-(void)didTapLikeOnCommentOrReply:(id)arg1 ;
-(void)activateComposerForComment:(id)arg1 mentioningAuthorOfReply:(id)arg2 ;
-(void)hideCommentComposerDuringEditingForCommentOrReply:(id)arg1 ;
-(void)unhideCommentComposerAfterEditingForCommentOrReply:(id)arg1 ;
-(void)switchToEditModeWithCommentOrReply:(id)arg1 ;
-(void)exitEditModeWithCommentOrReply:(id)arg1 ;
-(void)scrollToCommentOrReplyBeingEdited:(id)arg1 ;
-(void)didReceiveCommentsAfterInitialLoad:(id)arg1 atIndexes:(id)arg2 ;
-(void)stickerViewPackButtonPressed:(id)arg1 ;
-(FBCommentStreamCommentsManager *)commentsManager;
-(void)unfocusReplyThread;
-(void)dealloc;
-(id)dataSource;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(id)targetForAction:(SEL)arg1 withSender:(id)arg2 ;
-(long long)preferredStatusBarStyle;
-(BOOL)prefersStatusBarHidden;
-(long long)preferredStatusBarUpdateAnimation;
-(unsigned long long)supportedInterfaceOrientations;
-(UIScrollView *)scrollView;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(id)collectionView;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)scrollToTopAnimated:(BOOL)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
@end
