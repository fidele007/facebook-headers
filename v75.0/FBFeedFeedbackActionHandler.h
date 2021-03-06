/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBIntentHandler, FBNavigationCoordinator;
@class FBUserSession, FBScenePath, FBFeedActionHandlerListenerAnnouncer, NSString, NSArray;

@interface FBFeedFeedbackActionHandler : NSObject {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	id<FBIntentHandler> _intentHandler;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBFeedActionHandlerListenerAnnouncer* _announcer;
	unsigned long long _layoutIdiom;
	NSString* _analyticsModule;
	NSArray* _trackingCodes;

}
-(void)handleIntent:(id)arg1 ;
-(id)initWithLayoutIdiom:(unsigned long long)arg1 session:(id)arg2 scenePath:(id)arg3 analyticsModule:(id)arg4 intentHandler:(id)arg5 navigationCoordinator:(id)arg6 ;
-(void)presentStoryForFeedback:(id)arg1 focusedComment:(id)arg2 parentTrackingCodes:(id)arg3 trackingCodes:(id)arg4 trackingNodes:(id)arg5 tapSource:(id)arg6 highlightedWords:(id)arg7 composerPrefillText:(id)arg8 options:(unsigned long long)arg9 ;
-(id)analyticsTrackingCodes;
-(void)_presentNewStoryPermalinkViewControllerWithStory:(id)arg1 focusedComment:(id)arg2 parentTrackingCodes:(id)arg3 layoutIdiom:(unsigned long long)arg4 session:(id)arg5 highlightedWords:(id)arg6 composerActivationSource:(id)arg7 composerPrefillText:(id)arg8 showFeedbackOnly:(BOOL)arg9 scrollToTopOfUFI:(BOOL)arg10 tapSource:(id)arg11 ;
-(void)_presentFeedbackViewPopoverAsComposeMode:(BOOL)arg1 commentPermalink:(BOOL)arg2 story:(id)arg3 focusedComment:(id)arg4 composerPrefillText:(id)arg5 parentTrackingCodes:(id)arg6 trackingCodes:(id)arg7 trackingNodes:(id)arg8 animated:(BOOL)arg9 tapSource:(id)arg10 ;
-(void)_presentNewPhotoViewerAsComposeMode:(BOOL)arg1 story:(id)arg2 focusedComment:(id)arg3 trackingCodes:(id)arg4 trackingNodes:(id)arg5 tapSource:(id)arg6 ;
-(void)_presentPermalinkAsComposeMode:(BOOL)arg1 story:(id)arg2 focusedComment:(id)arg3 composerPrefillText:(id)arg4 parentTrackingCodes:(id)arg5 trackingCodes:(id)arg6 trackingNodes:(id)arg7 animated:(BOOL)arg8 highlightedWords:(id)arg9 options:(unsigned long long)arg10 tapSource:(id)arg11 ;
-(void)presentFeedbackForStory:(id)arg1 focusedComment:(id)arg2 activateComposer:(BOOL)arg3 composerPrefillText:(id)arg4 parentTrackingCodes:(id)arg5 trackingCodes:(id)arg6 trackingNodes:(id)arg7 tapSource:(id)arg8 ;
-(id)init;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

