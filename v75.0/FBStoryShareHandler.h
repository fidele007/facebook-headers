/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBShareToFriendFlowCoordinatorDelegate.h>
#import <Facebook/FBComposerFlowDelegate.h>

@protocol FBNavigationCoordinator, NSObject, FBQueriedActorFieldsProtocol, FBShareable, FBComposerShareConfiguring;
@class NSArray, FBUserSession, NSString, NSDictionary, FBPopoverActionSheet, FBShareToFriendFlowCoordinator, FBComposerPublisherData, FBFeedSaveAction, FBMemModelObject, FBMemFeedStory, NSURL, FBComposerPrivacySetting, FBStoryShareTextExperimentContext, UIView;

@interface FBStoryShareHandler : NSObject <UIActionSheetDelegate, FBPopoverControllerDelegate, FBShareToFriendFlowCoordinatorDelegate, FBComposerFlowDelegate> {

	NSArray* _shareActionsSequence;
	FBUserSession* _session;
	NSString* _analyticsModule;
	NSDictionary* _extraAnalyticsData;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBPopoverActionSheet* _popoverActionSheet;
	id<NSObject> _statusBarChangeObserver;
	FBShareToFriendFlowCoordinator* _friendShareFlowCoordinator;
	FBComposerPublisherData* _publicationForShareNow;
	FBFeedSaveAction* _feedSaveAction;
	FBMemModelObject*<FBQueriedActorFieldsProtocol> _actor;
	FBMemFeedStory* _storyToShare;
	id<FBShareable> _shareable;
	NSURL* _linkURL;
	NSArray* _trackingCodes;
	FBComposerPrivacySetting* _shareNowPrivacySetting;
	BOOL _allowSharing;
	FBStoryShareTextExperimentContext* _textExperimentContext;
	id<FBComposerShareConfiguring> _shareConfiguration;
	UIView* _presentationViewForShareAnimation;
	BOOL _fancyShareAnimationIsAnimating;
	/*^block*/id _didDismissBlock;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)overrideStoryShareMenuOptionPresenceDecider:(/*function pointer*/void*)arg1 ;
+(void)overrideStoryShareActorModifier:(/*function pointer*/void*)arg1 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 analyticsModule:(id)arg3 extraAnalyticsData:(id)arg4 ;
-(void)presentActionsForShareable:(id)arg1 actor:(id)arg2 linkURL:(id)arg3 trackingCodes:(id)arg4 feedSaveAction:(id)arg5 fromRect:(CGRect)arg6 inView:(id)arg7 withStory:(id)arg8 forceDisablePaperShareSheet:(BOOL)arg9 didDismissBlock:(/*^block*/id)arg10 ;
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)_openShareModalForStory;
-(void)_dismissPopoverAndCleanup;
-(void)_handleShareCancelled;
-(void)_handleShareAction:(unsigned long long)arg1 ;
-(void)shareToFriendFlowCoordinatorDidCancel:(id)arg1 ;
-(void)shareToFriendFlowCoordinatorDidPresentComposer:(id)arg1 ;
-(void)_logShareAction:(id)arg1 compositionID:(id)arg2 shareableID:(id)arg3 ;
-(void)_fetchComposerPrivacySettingsAndPresentPopoverInView:(id)arg1 fromRect:(CGRect)arg2 ;
-(void)_setPublicationForShareNow;
-(void)_presentPopoverForShareable:(id)arg1 linkURL:(id)arg2 trackingCodes:(id)arg3 fromRect:(CGRect)arg4 inView:(id)arg5 ;
-(id)textExperimentContext;
-(void)_shareNowForStory;
-(void)_openSendModalForStory;
-(void)_copyLinkForStory;
-(void)_saveLinkForStory;
-(void)_shareOnFriendTimeline;
-(void)_shareToPage;
-(void)_concludeShareAction:(id)arg1 compositionID:(id)arg2 shareableID:(id)arg3 ;
-(void)_logAnalyticsForShareNow;
-(void)_publishShareNow:(id)arg1 ;
-(void)_cleanupAfterFancyShareAnimationCompletion;
-(void)dealloc;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

