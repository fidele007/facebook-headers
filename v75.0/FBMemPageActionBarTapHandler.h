/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Facebook/FBCrowdsourcingHomeEditViewControllerDelegate.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBEventsComposerViewControllerDelegate.h>
#import <Facebook/FBPublishingCompletionEventListener.h>
#import <Facebook/FBPagesReviewComposerControllerDelegate.h>
#import <Facebook/FBPageSectionsEditViewControllerDelegate.h>
#import <Facebook/MFMailComposeViewControllerDelegate.h>
#import <Facebook/FBEntityCardPagesActionBarTapResponder.h>

@protocol FBMemPageActionBarPageProvider, FBMemPageCardControllerDelegate;
@class FBUserSession, UIActionSheet, FBPopoverActionSheet, NSArray, FBPageNotificationSubscriptionsViewController, FBModalDialogViewController, FBPublishingCompletionEventForwarder, FBCrowdsourcingContext, FBCrowdsourcingNewSuggestEditsViewController, FBCrowdsourcingHomeEditViewController, FBPagesReviewComposerController, NSString, FBButtonBarButton, FBNativeThirdPartyURLHandler, FBCrowdsourcingHomeRemovalHelper, FBPageSectionsEditViewController, FBAdsManagerDeepLinkingController, NSMutableDictionary, NSDictionary, FBPageActionHandlerToolbox, FBPageCTALogger, FBPageSubscriptionsViewController, UIView, FBMemPageCardController;

@interface FBMemPageActionBarTapHandler : NSObject <UIActionSheetDelegate, FBCrowdsourcingHomeEditViewControllerDelegate, FBComposerFlowDelegate, FBEventsComposerViewControllerDelegate, FBPublishingCompletionEventListener, FBPagesReviewComposerControllerDelegate, FBPageSectionsEditViewControllerDelegate, MFMailComposeViewControllerDelegate, FBEntityCardPagesActionBarTapResponder> {

	FBUserSession* _userSession;
	UIActionSheet* _moreActionSheet;
	FBPopoverActionSheet* _morePopoverActionSheet;
	NSArray* _currentActionSheetActions;
	NSArray* _overflowItems;
	unsigned long long _composerState;
	FBPageNotificationSubscriptionsViewController* _pageSubscriptionsViewController;
	FBModalDialogViewController* _pageSubscriptionsWarningViewController;
	FBPublishingCompletionEventForwarder* _publishingEventForwarder;
	FBCrowdsourcingContext* _crowdsourcingContext;
	FBCrowdsourcingNewSuggestEditsViewController* _suggestEditsViewController;
	FBCrowdsourcingHomeEditViewController* _crowdsourcingHomeEditViewController;
	FBPagesReviewComposerController* _reviewComposerController;
	NSString* _analyticsUUID;
	UIActionSheet* _confirmationActionSheet;
	FBButtonBarButton* _actionSheetSourceButton;
	unsigned long long _actionSheetSourceItemType;
	FBNativeThirdPartyURLHandler* _nativeURLHandler;
	FBCrowdsourcingHomeRemovalHelper* _homeRemovalHelper;
	id<FBMemPageActionBarPageProvider> _pageProvider;
	FBPageSectionsEditViewController* _editViewController;
	FBAdsManagerDeepLinkingController* _adsManagerDeepLinkingController;
	BOOL _usePMAActionBarItems;
	NSMutableDictionary* _actionHandlersMap;
	NSDictionary* _actionsDataMap;
	FBPageActionHandlerToolbox* _pageActionHandlerToolbox;
	FBPageCTALogger* _ctaLogger;
	FBPageSubscriptionsViewController* _subscriptionViewController;
	UIActionSheet* _shareActionSheet;
	UIView* _actionBar;
	id<FBMemPageCardControllerDelegate> _delegate;
	FBMemPageCardController* _controller;

}

@property (assign,nonatomic,__weak) UIView * actionBar;                                        //@synthesize actionBar=_actionBar - In the implementation block
@property (assign,nonatomic,__weak) id<FBMemPageCardControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) FBMemPageCardController * controller;                      //@synthesize controller=_controller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)tracker;
+(id)context;
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)createEventTapped:(id)arg1 ;
-(void)eventComposerDidCancel:(id)arg1 ;
-(void)eventComposer:(id)arg1 didCreateEvent:(id)arg2 ;
-(void)eventComposer:(id)arg1 didEditEvent:(id)arg2 ;
-(void)eventComposer:(id)arg1 didDeleteEvent:(id)arg2 ;
-(UIView *)actionBar;
-(void)setActionBar:(UIView *)arg1 ;
-(void)likeTapped:(id)arg1 ;
-(void)playTapped:(id)arg1 ;
-(void)installTapped:(id)arg1 ;
-(void)saveTapped:(id)arg1 ;
-(void)shareTapped:(id)arg1 ;
-(void)messageTapped:(id)arg1 ;
-(void)checkInTapped:(id)arg1 ;
-(void)reviewTapped:(id)arg1 ;
-(void)copyLinkTapped:(id)arg1 ;
-(void)followTapped:(id)arg1 ;
-(void)suggestEditsTapped:(id)arg1 ;
-(void)reportTapped:(id)arg1 ;
-(void)addServicesTabTapped:(id)arg1 ;
-(void)createPageTapped:(id)arg1 ;
-(void)placeClaimTapped:(id)arg1 ;
-(void)showSecondaryActions:(id)arg1 ;
-(void)phoneCallTapped:(id)arg1 ;
-(void)pageSubscriptionTapped:(id)arg1 ;
-(void)getDirectionTapped:(id)arg1 ;
-(void)postTapped:(id)arg1 ;
-(void)photoTapped:(id)arg1 ;
-(void)promoteTapped:(id)arg1 ;
-(void)editPageTapped:(id)arg1 ;
-(void)videoTapped:(id)arg1 ;
-(void)liveVideoTapped:(id)arg1 ;
-(void)eventTapped:(id)arg1 ;
-(void)editResidenceTapped:(id)arg1 ;
-(void)editSettingsTapped:(id)arg1 ;
-(void)editProfilePictureTapped:(id)arg1 ;
-(void)editCoverPhotoTapped:(id)arg1 ;
-(void)deletePageTapped:(id)arg1 ;
-(void)deleteResidenceTapped:(id)arg1 ;
-(void)manageAdsTapped:(id)arg1 ;
-(void)shareMessageLinkTapped:(id)arg1 ;
-(void)didUpdateTabOrder;
-(void)didUpdatePageCTA;
-(void)didUpdateTemplate;
-(void)didAddTabToPage;
-(BOOL)_isViewerConnectedToEntity;
-(BOOL)_tryHandingTapActionsWithActionChannelDataForType:(id)arg1 sender:(id)arg2 ;
-(void)_showShareActionSheet:(id)arg1 ;
-(void)_sharePageInTimeline:(id)arg1 ;
-(BOOL)_hasViewerSavedNonLocalEntity;
-(void)_showConfirmationActionSheetForItemType:(unsigned long long)arg1 actionBarButton:(id)arg2 ;
-(void)_updateSaveActionBarButton:(id)arg1 isSaveAction:(BOOL)arg2 ;
-(void)_performSaveAction:(BOOL)arg1 ;
-(void)_updateLikeActionBarButton:(id)arg1 isLikeAction:(BOOL)arg2 ;
-(BOOL)_shouldShowMoreActionItemsOnNavBar;
-(id)_actionHandlerForType:(id)arg1 ;
-(id)_actionHandlerWithPage:(id)arg1 forActionType:(id)arg2 ;
-(void)composerClosed;
-(void)startTrackingPublicationWithIdentifier:(id)arg1 ;
-(void)cleanUpPublicationHandling;
-(/*^block*/id)_followCompletionBlockForSubscribeRequest:(BOOL)arg1 ;
-(void)_dismissEventsComposer:(id)arg1 ;
-(void)dismissModalViewController:(id)arg1 withRefresh:(BOOL)arg2 ;
-(void)publicationCompletedThroughTerminalFailureOfPublication:(id)arg1 withError:(id)arg2 ;
-(void)publicationCompletedThroughSuccessOfPublication:(id)arg1 withResponse:(id)arg2 ;
-(void)publicationCompletedThroughCancellationOfPublication:(id)arg1 ;
-(id)initWithSession:(id)arg1 pageProvider:(id)arg2 actionBar:(id)arg3 delegate:(id)arg4 pageCardController:(id)arg5 pageActionHandlerToolbox:(id)arg6 analyticsUUID:(id)arg7 usePMAActionBarItems:(BOOL)arg8 ;
-(void)setOverflowItems:(id)arg1 ;
-(void)setActionsDataMap:(id)arg1 ;
-(void)handleCTATapAction:(id)arg1 ;
-(void)composerCancelled;
-(void)_openComposerWithTraits:(id)arg1 sourceView:(id)arg2 startingStyleContext:(id)arg3 entryPointAnalyticsContext:(id)arg4 ;
-(void)openPageAboutSection;
-(void)openPagePhotosSection;
-(void)openPageVideosSection;
-(void)openVisitorPostsTimeline;
-(void)_logPMAComposerButtonTapEventWithEventName:(id)arg1 ;
-(void)pagesReviewComposerControllerDidPublishReview:(id)arg1 ;
-(void)setDelegate:(id<FBMemPageCardControllerDelegate>)arg1 ;
-(id<FBMemPageCardControllerDelegate>)delegate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(FBMemPageCardController *)controller;
-(void)setController:(FBMemPageCardController *)arg1 ;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
-(id)pageID;
@end

