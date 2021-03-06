/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBComposerFlowDelegate.h>
#import <Facebook/FBEventsLegacyInviteViewControllerDelegate.h>
#import <Facebook/FBEventsInviteViewControllerDelegate.h>
#import <Facebook/FBComposerPublisherStatusListener.h>

@protocol FBNavigationCoordinator, FBIntentHandler;
@class FBMemEvent, FBUserSession, FBEventAnalyticTracker, NSArray, UIViewController, FBPopoverActionSheet, FBPublisherManager, FBComposerPublisherStatusEventFilter, NSString;

@interface FBEventSharingHandler : NSObject <FBPopoverControllerDelegate, FBComposerFlowDelegate, FBEventsLegacyInviteViewControllerDelegate, FBEventsInviteViewControllerDelegate, FBComposerPublisherStatusListener> {

	FBMemEvent* _event;
	FBUserSession* _session;
	FBEventAnalyticTracker* _tracker;
	id<FBNavigationCoordinator> _navigationCoordinator;
	id<FBIntentHandler> _intentHandler;
	NSArray* _actionSheetButtonOrder;
	unsigned long long _firstDegreeConnectionType;
	UIViewController* _shareActionSheetController;
	FBPopoverActionSheet* _actionSheet;
	FBPublisherManager* _publisherManager;
	FBComposerPublisherStatusEventFilter* _publicationEventFilter;

}

@property (nonatomic,retain) FBMemEvent * event;                                             //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) id<FBNavigationCoordinator> navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,retain) id<FBIntentHandler> intentHandler;                              //@synthesize intentHandler=_intentHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startedPublishingPublisherData:(id)arg1 ;
-(void)attemptedPublicationOfPublisherData:(id)arg1 ;
-(void)failedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)failedPublishingAndWaitingForRetryPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)terminallyFailedPublishingPublisherData:(id)arg1 withError:(id)arg2 ;
-(void)startedServerProcessingForUploadedPublication:(id)arg1 ;
-(void)successfullyPublishedPublisherData:(id)arg1 withResponse:(id)arg2 ;
-(void)cancelledPublishingPublisherData:(id)arg1 ;
-(void)pausedPublishingPublisherData:(id)arg1 ;
-(void)retriedPublishingPublisherData:(id)arg1 ;
-(void)startedWaitingForConnectivityForPublicationOfPublisherData:(id)arg1 ;
-(void)scheduledPublicationOfPublisherData:(id)arg1 atDate:(id)arg2 ;
-(void)publicationProgressedWithProgress:(double)arg1 forPublisherData:(id)arg2 ;
-(void)startedUploadingItemOfType:(int)arg1 withThumbnailImage:(id)arg2 forPublisherData:(id)arg3 ;
-(void)uploadQualityDidChange:(id)arg1 forPublisherData:(id)arg2 ;
-(void)canCancelPublishingOfPublisherData:(id)arg1 ;
-(void)cannotCancelPublishingOfPublisherData:(id)arg1 ;
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id<FBIntentHandler>)intentHandler;
-(void)setIntentHandler:(id<FBIntentHandler>)arg1 ;
-(void)setNavigationCoordinator:(id<FBNavigationCoordinator>)arg1 ;
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)inviteController:(id)arg1 didFinishWithSelection:(id)arg2 forEventID:(id)arg3 withNote:(id)arg4 ;
-(void)didCancelWithInviteController:(id)arg1 forEventID:(id)arg2 ;
-(void)legacyInviteController:(id)arg1 didFinishWithSelection:(id)arg2 forEventID:(id)arg3 ;
-(void)didCancelWithLegacyInviteController:(id)arg1 forEventID:(id)arg2 ;
-(void)legacyInviteController:(id)arg1 didFinishWithSelectionWithMessenger:(id)arg2 forEventID:(id)arg3 messengerShareURL:(id)arg4 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)cleanupPublicationListening;
-(void)inviteAction:(id)arg1 ;
-(void)shareAction:(id)arg1 ;
-(void)postToCurrentUserTimelineAction:(id)arg1 ;
-(id)initWithEvent:(id)arg1 userSession:(id)arg2 tracker:(id)arg3 navigationCoordinator:(id)arg4 intentHandler:(id)arg5 ;
-(id)_buttonTitleForActionType:(unsigned long long)arg1 ;
-(id)actionBarItemForEventActionType:(unsigned long long)arg1 ;
-(SEL)actionForEventActionType:(unsigned long long)arg1 ;
-(void)_showPopoverActionSheet:(id)arg1 sender:(id)arg2 ;
-(void)_navigateToInviteFlowWithInviteController:(id)arg1 ;
-(void)_sendInvitesWithSelectedInvitees:(id)arg1 withNote:(id)arg2 ;
-(void)_cancelFIGActionSheet;
-(id)FIGActionSheetButtonItemsForActionTypes:(id)arg1 ;
-(void)_showFIGActionSheetWithButtonItems:(id)arg1 style:(unsigned long long)arg2 sender:(id)arg3 ;
-(id)actionBarItemsForActionTypes:(id)arg1 ;
-(void)_showPopoverActionSheetWithActionBarItems:(id)arg1 sender:(id)arg2 ;
-(id)_FIGActionSheetCancelButton;
-(id)FIGActionSheetButtonItemForActionType:(unsigned long long)arg1 ;
-(unsigned long long)_glyphForActionType:(unsigned long long)arg1 ;
-(void)_dismissSharingActionSheetAnimated:(BOOL)arg1 ;
-(void)messageAnyFriendAction:(id)arg1 ;
-(void)externalShareAction:(id)arg1 ;
-(void)_sendLegacyInvitesWithSelectedInvitees:(id)arg1 throughMessenger:(BOOL)arg2 messengerShareURL:(id)arg3 ;
-(void)dealloc;
-(FBMemEvent *)event;
-(void)setEvent:(FBMemEvent *)arg1 ;
@end

