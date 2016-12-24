/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventsComposerViewControllerDelegate.h>
#import <Facebook/FBEventsInviteViewControllerDelegate.h>
#import <Facebook/FBEventsLegacyInviteViewControllerDelegate.h>
#import <Facebook/FBEventPermalinkNavigationDelegate.h>
#import <Facebook/RCTFBSessionModule.h>

@class NSNumber, RCTBridge, FBUserSession, FBEventAnalyticTracker, NSString;

@interface FBEventsNativeModule : NSObject <FBEventsComposerViewControllerDelegate, FBEventsInviteViewControllerDelegate, FBEventsLegacyInviteViewControllerDelegate, FBEventPermalinkNavigationDelegate, RCTFBSessionModule> {

	NSNumber* _createEventRootTag;
	RCTBridge* _bridge;
	FBUserSession* _session;
	FBEventAnalyticTracker* _analyticsTracker;

}

@property (nonatomic,retain) FBEventAnalyticTracker * analyticsTracker;               //@synthesize analyticsTracker=_analyticsTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
@property (assign,nonatomic,__weak) FBUserSession * session;                          //@synthesize session=_session - In the implementation block
+(id)moduleName;
+(id)__rct_export__910;
+(id)__rct_export__1131;
+(id)__rct_export__1242;
+(id)__rct_export__1473;
+(id)__rct_export__1554;
+(id)__rct_export__1875;
+(id)__rct_export__2116;
+(id)__rct_export__2307;
+(id)__rct_export__2558;
+(id)__rct_export__2799;
+(void)load;
-(void)eventComposerDidCancel:(id)arg1 ;
-(void)eventComposer:(id)arg1 didCreateEvent:(id)arg2 ;
-(void)eventComposer:(id)arg1 didEditEvent:(id)arg2 ;
-(void)eventComposer:(id)arg1 didDeleteEvent:(id)arg2 ;
-(void)inviteController:(id)arg1 didFinishWithSelection:(id)arg2 forEventID:(id)arg3 withNote:(id)arg4 ;
-(void)didCancelWithInviteController:(id)arg1 forEventID:(id)arg2 ;
-(void)legacyInviteController:(id)arg1 didFinishWithSelection:(id)arg2 forEventID:(id)arg3 ;
-(void)didCancelWithLegacyInviteController:(id)arg1 forEventID:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)setAnalyticsTracker:(FBEventAnalyticTracker *)arg1 ;
-(void)_sendInvitesWithSelectedInvitees:(id)arg1 toEvent:(id)arg2 withNote:(id)arg3 ;
-(id)navigationCoordinatorForReactTag:(id)arg1 ;
-(void)_openCreateEventWithReactTag:(id)arg1 group:(id)arg2 ;
-(id)intentHandlerForReactTag:(id)arg1 ;
-(void)_sendLegacyInvitesWithSelectedInvitees:(id)arg1 toEvent:(id)arg2 ;
-(void)openEventPermalink:(id)arg1 eventId:(id)arg2 ;
-(void)eventPermalinkWillDismiss;
-(void)openComposerToPerson:(id)arg1 targetPersonId:(id)arg2 ;
-(void)openCreateGroupEvent:(id)arg1 groupID:(id)arg2 name:(id)arg3 visibility:(id)arg4 parentName:(id)arg5 communityCategory:(id)arg6 ;
-(void)openCreateEvent:(id)arg1 ;
-(void)openInviteToEvent:(id)arg1 eventId:(id)arg2 eventKind:(id)arg3 isAdmin:(BOOL)arg4 ;
-(void)openEditEvent:(id)arg1 event:(id)arg2 ;
-(void)openAllBirthdaysListView:(id)arg1 ;
-(void)openDiscoveryListViewForCutType:(id)arg1 cutType:(id)arg2 title:(id)arg3 ;
-(void)openSubscribedEvents:(id)arg1 title:(id)arg2 ;
-(void)openCollection:(id)arg1 eventCollectionID:(id)arg2 ;
-(FBEventAnalyticTracker *)analyticsTracker;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
-(RCTBridge *)bridge;
@end

